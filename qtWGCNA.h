#ifndef qtWGCNA_H
#define qtWGCNA_H

#include <QDialog>
#include <QString>
#include <QStringList>
#include <QProcess>



QT_BEGIN_NAMESPACE
class QFile;
QT_END_NAMESPACE


namespace Ui {
class qtWGCNA;
}

class qtWGCNA : public QWidget
{
    Q_OBJECT

public:
    explicit qtWGCNA(QWidget *parent = nullptr);
    ~qtWGCNA();

public:
    void loadFile(const QString &fileName);

private slots:
    void on_start_clicked();

    void checkLineEdits_start();


    void on_config_clicked();



    void on_browse_exp_clicked();

    void on_browse_work_dir_clicked();

private:
    Ui::qtWGCNA *ui;
    QString fileName;
    QFile *file;
};


#endif // qtWGCNA_H
