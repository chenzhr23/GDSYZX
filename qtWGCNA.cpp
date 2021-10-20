#include "qtWGCNA.h"
#include "ui_qtWGCNA.h"
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QProcess>
#include <QDesktopWidget>
#include <QProgressDialog>
#include <QtConcurrent>
using namespace QtConcurrent;



qtWGCNA::qtWGCNA(QWidget *parent) : QWidget(parent),ui(new Ui::qtWGCNA)
{
    ui->setupUi(this);

    connect(ui->line_exp, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits_start()));
    connect(ui->line_work_dir, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits_start()));

}

qtWGCNA::~qtWGCNA()
{
    delete ui;
}

void qtWGCNA::checkLineEdits_start()
{
    bool ok = !ui->line_exp->text().isEmpty()
    && !ui->line_work_dir->text().isEmpty();

    if(ok){
        ui->start->setEnabled(true);
    }

}



void qtWGCNA::on_start_clicked()
{
    //    Basic:
    QString exp=ui->line_exp->text();
    QString work_dir=ui->line_work_dir->text();
    QString blockwiseModules_para=ui->line_blockwiseModules_para->text();
    if(blockwiseModules_para!=""){blockwiseModules_para = "-p "+blockwiseModules_para;}else {blockwiseModules_para = "";}

    //  Checkbox:
    QString enableWGCNAThreads = ui->checkBox_enableWGCNAThreads->text();
    if(ui->checkBox_enableWGCNAThreads->isChecked()){enableWGCNAThreads = "--enableWGCNAThreads";}else {enableWGCNAThreads = "";}

    QString skipSaveBlocks = ui->checkBox_skipSaveBlocks->text();
    if(ui->checkBox_skipSaveBlocks->isChecked()){skipSaveBlocks = "--skipSaveBlocks";}else {skipSaveBlocks = "";}

    QString gzipTOMs = ui->checkBox_gzipTOMs->text();
    if(ui->checkBox_gzipTOMs->isChecked()){gzipTOMs = "--gzipTOMs";}else {gzipTOMs = "";}

    qDebug()<<"Input exp file <bed>:"<<exp;
    qDebug()<<"ouput work directory <bed>:"<<work_dir;

    QStringList qtWGCNA_command;
    qtWGCNA_command<<"iterativeWGCNA"
                  <<"-i"
                    <<exp
                   <<"-o"
                   <<work_dir
                  <<enableWGCNAThreads
                 <<skipSaveBlocks
                <<gzipTOMs
               <<blockwiseModules_para;


    QString qtWGCNA_command_join = qtWGCNA_command.join(" ");
    qDebug()<<"qtWGCNA command:"<<qtWGCNA_command_join;

    QString qPath("qtWGCNA_config.txt");
    QFile qFile(qPath);
      if (qFile.open(QIODevice::WriteOnly)) {
        QTextStream out(&qFile); out << qtWGCNA_command_join;
        qFile.close();
      }


     qtWGCNA_command_join = "\""+qtWGCNA_command_join+"\"";
     qDebug()<<"run qtWGCNA.sh command: "<<qtWGCNA_command_join;

     QEventLoop loop;
     QProgressDialog dialog;
     dialog.setWindowModality(Qt::WindowModal);
     dialog.setWindowTitle("qtWGCNA: for seeking the reverse transcriptase stop sites");
     dialog.setWindowIcon(QIcon(":/images/qtWGCNAlogo.png"));
     dialog.setMinimumWidth(800);
     dialog.setRange(0,0);
     dialog.setLabelText(QString("qtWGCNA ROC mode is running (%1 threads)...").arg(QThread::idealThreadCount()));
     dialog.show();

     QProcess p;
     p.start("bash "+QCoreApplication::applicationDirPath()+"/qtWGCNA.sh "+"-c"+qtWGCNA_command_join+" -d "+"\""+work_dir+"\"");
     connect(&p,SIGNAL(finished(int,QProcess::ExitStatus)),&loop,SLOT(quit()));
     loop.exec();
     QString getStr=QString(p.readAllStandardOutput());
     ui->textEdit->setText(getStr);
     QMessageBox::information(this,"qtWGCNA log: \n","A qtWGCNA job is done!");

     QString getStr_Error=QString(p.readAllStandardError());
     if(getStr_Error!=""){
         QMessageBox::information(this,"qtWGCNA Error: \n",getStr_Error);
     }



}



void qtWGCNA::on_browse_exp_clicked()
{
    QFileDialog dialog(this);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    QString exp = dialog.getOpenFileName(this,tr("Locate gene expression file"),"txt",tr("Find gene expression file (*.txt)"));

    if (!exp.isEmpty()) {
        ui->line_exp->setText(exp);
    }
}



void qtWGCNA::on_browse_work_dir_clicked()
{
    QFileDialog dialog(this);
    QString out_dir = dialog.getExistingDirectory(this,
                                tr("Find directory"), QDir::currentPath());

        if (!out_dir.isEmpty()) {
            ui->line_work_dir->setText(out_dir);
        }
}



void qtWGCNA::on_config_clicked()
{
        QString fileName = QFileDialog::getOpenFileName(this,tr("Open qtWGCNA config text"),"txt",tr("config text(qtWGCNA_config.txt)"));
        if (!fileName.isEmpty())
            loadFile(fileName);
}

void qtWGCNA::loadFile(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("Application"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(QDir::toNativeSeparators(fileName), file.errorString()));
        return;
    }

    QTextStream in(&file);
    QString config_text=in.readAll();
    QStringList config_list = config_text.split(' ');
    ui->line_exp->setText(config_list[2]);
    ui->line_work_dir->setText(config_list[4]);


    if(config_list[5]!=""){
        ui->checkBox_enableWGCNAThreads->setChecked(true);
    }

    if(config_list[6]!=""){
        ui->checkBox_skipSaveBlocks->setChecked(true);
    }

    if(config_list[7]!=""){
        ui->checkBox_gzipTOMs->setChecked(true);
    }

    if(config_list[8]!=""){
        ui->line_blockwiseModules_para->setText(config_list[9]);
    }

}


