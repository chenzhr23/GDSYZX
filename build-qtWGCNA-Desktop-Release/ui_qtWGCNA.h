/********************************************************************************
** Form generated from reading UI file 'qtWGCNA.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWGCNA_H
#define UI_QTWGCNA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtWGCNA
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_all;
    QVBoxLayout *verticalLayout_basic;
    QGroupBox *Basic;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_basic_opt;
    QVBoxLayout *verticalLayout_basic_2;
    QLabel *label_input;
    QHBoxLayout *horizontalLayout_input;
    QLineEdit *line_exp;
    QPushButton *browse_exp;
    QLabel *label_treatment;
    QHBoxLayout *horizontalLayout_treatment;
    QLineEdit *line_work_dir;
    QPushButton *browse_work_dir;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_enableWGCNAThreads;
    QCheckBox *checkBox_skipSaveBlocks;
    QCheckBox *checkBox_gzipTOMs;
    QLineEdit *line_blockwiseModules_para;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *config;
    QPushButton *start;
    QLabel *label_rtsSeeker;

    void setupUi(QWidget *qtWGCNA)
    {
        if (qtWGCNA->objectName().isEmpty())
            qtWGCNA->setObjectName(QString::fromUtf8("qtWGCNA"));
        qtWGCNA->resize(800, 564);
        gridLayout_4 = new QGridLayout(qtWGCNA);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        textEdit = new QTextEdit(qtWGCNA);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial [TMC ]"));
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        textEdit->setFont(font);

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        horizontalLayout_all = new QHBoxLayout();
        horizontalLayout_all->setSpacing(6);
        horizontalLayout_all->setObjectName(QString::fromUtf8("horizontalLayout_all"));
        verticalLayout_basic = new QVBoxLayout();
        verticalLayout_basic->setSpacing(6);
        verticalLayout_basic->setObjectName(QString::fromUtf8("verticalLayout_basic"));
        Basic = new QGroupBox(qtWGCNA);
        Basic->setObjectName(QString::fromUtf8("Basic"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial [TMC ]"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        Basic->setFont(font1);
        verticalLayout_7 = new QVBoxLayout(Basic);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_basic_opt = new QVBoxLayout();
        verticalLayout_basic_opt->setSpacing(6);
        verticalLayout_basic_opt->setObjectName(QString::fromUtf8("verticalLayout_basic_opt"));
        verticalLayout_basic_2 = new QVBoxLayout();
        verticalLayout_basic_2->setSpacing(6);
        verticalLayout_basic_2->setObjectName(QString::fromUtf8("verticalLayout_basic_2"));
        label_input = new QLabel(Basic);
        label_input->setObjectName(QString::fromUtf8("label_input"));
        label_input->setFont(font1);

        verticalLayout_basic_2->addWidget(label_input);

        horizontalLayout_input = new QHBoxLayout();
        horizontalLayout_input->setSpacing(6);
        horizontalLayout_input->setObjectName(QString::fromUtf8("horizontalLayout_input"));
        line_exp = new QLineEdit(Basic);
        line_exp->setObjectName(QString::fromUtf8("line_exp"));
        line_exp->setFont(font1);

        horizontalLayout_input->addWidget(line_exp);

        browse_exp = new QPushButton(Basic);
        browse_exp->setObjectName(QString::fromUtf8("browse_exp"));
        browse_exp->setFont(font1);

        horizontalLayout_input->addWidget(browse_exp);


        verticalLayout_basic_2->addLayout(horizontalLayout_input);

        label_treatment = new QLabel(Basic);
        label_treatment->setObjectName(QString::fromUtf8("label_treatment"));
        label_treatment->setFont(font1);

        verticalLayout_basic_2->addWidget(label_treatment);

        horizontalLayout_treatment = new QHBoxLayout();
        horizontalLayout_treatment->setSpacing(6);
        horizontalLayout_treatment->setObjectName(QString::fromUtf8("horizontalLayout_treatment"));
        line_work_dir = new QLineEdit(Basic);
        line_work_dir->setObjectName(QString::fromUtf8("line_work_dir"));
        line_work_dir->setFont(font1);

        horizontalLayout_treatment->addWidget(line_work_dir);

        browse_work_dir = new QPushButton(Basic);
        browse_work_dir->setObjectName(QString::fromUtf8("browse_work_dir"));
        browse_work_dir->setFont(font1);

        horizontalLayout_treatment->addWidget(browse_work_dir);


        verticalLayout_basic_2->addLayout(horizontalLayout_treatment);

        groupBox = new QGroupBox(Basic);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBox_enableWGCNAThreads = new QCheckBox(groupBox);
        checkBox_enableWGCNAThreads->setObjectName(QString::fromUtf8("checkBox_enableWGCNAThreads"));

        gridLayout_2->addWidget(checkBox_enableWGCNAThreads, 0, 0, 1, 1);

        checkBox_skipSaveBlocks = new QCheckBox(groupBox);
        checkBox_skipSaveBlocks->setObjectName(QString::fromUtf8("checkBox_skipSaveBlocks"));

        gridLayout_2->addWidget(checkBox_skipSaveBlocks, 0, 1, 1, 1);

        checkBox_gzipTOMs = new QCheckBox(groupBox);
        checkBox_gzipTOMs->setObjectName(QString::fromUtf8("checkBox_gzipTOMs"));

        gridLayout_2->addWidget(checkBox_gzipTOMs, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        line_blockwiseModules_para = new QLineEdit(groupBox);
        line_blockwiseModules_para->setObjectName(QString::fromUtf8("line_blockwiseModules_para"));

        gridLayout_3->addWidget(line_blockwiseModules_para, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        verticalLayout_basic_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        config = new QPushButton(Basic);
        config->setObjectName(QString::fromUtf8("config"));
        config->setMinimumSize(QSize(0, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial [TMC ]"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        config->setFont(font2);

        horizontalLayout->addWidget(config);

        start = new QPushButton(Basic);
        start->setObjectName(QString::fromUtf8("start"));
        start->setEnabled(false);
        start->setMinimumSize(QSize(0, 40));
        start->setFont(font2);

        horizontalLayout->addWidget(start);


        verticalLayout_basic_2->addLayout(horizontalLayout);


        verticalLayout_basic_opt->addLayout(verticalLayout_basic_2);


        verticalLayout_7->addLayout(verticalLayout_basic_opt);


        verticalLayout_basic->addWidget(Basic);


        horizontalLayout_all->addLayout(verticalLayout_basic);


        gridLayout->addLayout(horizontalLayout_all, 2, 0, 1, 1);

        label_rtsSeeker = new QLabel(qtWGCNA);
        label_rtsSeeker->setObjectName(QString::fromUtf8("label_rtsSeeker"));
        label_rtsSeeker->setMaximumSize(QSize(16777215, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial [TMC ]"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_rtsSeeker->setFont(font3);

        gridLayout->addWidget(label_rtsSeeker, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(qtWGCNA);

        QMetaObject::connectSlotsByName(qtWGCNA);
    } // setupUi

    void retranslateUi(QWidget *qtWGCNA)
    {
        qtWGCNA->setWindowTitle(QCoreApplication::translate("qtWGCNA", "qtWGCNA", nullptr));
        textEdit->setHtml(QCoreApplication::translate("qtWGCNA", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial [TMC ]'; font-size:9pt; font-weight:600; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Citation: </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">iterativeWGCNA: iterative refinement to improve module detection from WGCNA co-expression networks</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Emily Greenfest-Allen, Jean-Philippe Cartailler, Mark A. Magnuson, Christian J. Stoeckert Jr.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-ind"
                        "ent:0; text-indent:0px;\">bioRxiv 234062; doi: https://doi.org/10.1101/234062</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; color:#aa0000;\">Usage:  </span><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">iterativeWGCNA [-h] -i &lt;gene expression file&gt; [-o &lt;output dir&gt;] [-v]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                      [--debug] [-p &lt;param list&gt;] [--enableWGCNAThreads]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                      [--skipSaveBlocks] [--gzipTOMs] [-f &lt;cut height&gt;]</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">perform iterativeWGCNA analysis</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">optional arguments:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">  -h, --help            show this help message and exit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">  -i &lt;gene expression file&gt;, --inputFile &lt;gene expression file&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                        full path to input gene expression file; if full path is not provided,</span>"
                        "</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                        assumes the file is in the working directory</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                        ;see below for input file format</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">  -o &lt;output dir&gt;, --workingDir &lt;output dir&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:"
                        "10pt; font-weight:400; color:#000000;\">                        R working directory; where output will be saved</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">  -v, --verbose         print status messages</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">  --debug               print debugging messages</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">  -p &lt;param list&gt;, --wgcnaParameters &lt;param list&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                        comma separated list of parameters to be passed to WGCNA's blockwiseModules function</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                        e.g., power=6,randomSeed=1234875</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                        see WGCNA manual &amp; more info below</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\""
                        ">  --enableWGCNAThreads  enable WGCNA to use threading;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                        see WGCNA manual</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">  --skipSaveBlocks      do not save WGCNA blockwise modules for each iteration;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                        NOTE: without blocks summary graphics cannot be generated.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                        Also will not saveTOMs.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">  --gzipTOMs            gzip TOM RData files</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">  -f &lt;cut height&gt;, --finalMergeCutHeight &lt;cut height&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">                        cut height for final merge (after iterations are asse"
                        "mbled)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">------------------------------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">Input File Format</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">-------------------------------------------------"
                        "-----</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">iterativeWGCNA expects a tab-delimited text file containing</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">gene expression data arranged such that there is one</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">row per gene and one column per sample.  The first column</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:"
                        "10pt; font-weight:400; color:#000000;\">should contain unique gene identifiers.  For example:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">GENE    Sample1    Sample2    Sample3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">Gata1    500    715    1000</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; fon"
                        "t-weight:400; color:#000000;\">Phtf2    60    1000    1600</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">------------------------------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">WGCNA Parameters</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\""
                        ">------------------------------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">iterativeWGCNA can accept any parameter valid for the WGCNA</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">blockwiseModules function.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; col"
                        "or:#000000;\">See http://www.inside-r.org/packages/cran/wgcna/docs/blockwiseModules</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">To specify these parameters use the --wgcnaParameters flag followed by</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">a comma separated list of parameter=value pairs.  For example:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">--wgcnaParameters maxBlockSize=5000,corType=bicor,power=10</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">sets the maximum block size to 5000 genes,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" f"
                        "ont-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">the correlation type to the biweight correlation,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">and the power-law scaling factor (beta) to 10</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">If parameters are not specified, iterativeWGCNA uses the default WGCNA settings,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-blo"
                        "ck-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">except for the following:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">minModuleSize=20</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">saveTOMs=FALSE</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; fon"
                        "t-size:10pt; font-weight:400; color:#000000;\">minKMEtoStay=0.8</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">minCoreKME=0.8</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">networkType=signed</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\">numericLabels=TRUE</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt; font-weight:400; color:#000000;\"><br /></p></"
                        "body></html>", nullptr));
        Basic->setTitle(QCoreApplication::translate("qtWGCNA", "iterativeWGCCCNA control panel", nullptr));
        label_input->setText(QCoreApplication::translate("qtWGCNA", "<html><head/><body><p><span style=\" color:#aa0000;\">*</span><span style=\" color:#000000;\">gene expression file</span> &lt;txt&gt;</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        line_exp->setToolTip(QCoreApplication::translate("qtWGCNA", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial [TMC ]'; font-size:10pt; font-weight:600; font-style:italic;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">samples &lt;bam&gt; </span><span style=\" font-weight:400; text-decoration: underline; color:#aa0000;\">not </span><span style=\" font-weight:400;\">treated with the carbodiimide N-cyclohexyl-N0-(2 morpholinoethyl)carbodiimide methop-toluenesulfonate (CMC) or other chemical.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        line_exp->setText(QString());
#if QT_CONFIG(tooltip)
        browse_exp->setToolTip(QCoreApplication::translate("qtWGCNA", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial [TMC ]'; font-size:10pt; font-weight:600; font-style:italic;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">browse input file in bam format</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        browse_exp->setText(QCoreApplication::translate("qtWGCNA", "Browse...", nullptr));
        label_treatment->setText(QCoreApplication::translate("qtWGCNA", "<html><head/><body><p><span style=\" color:#aa0000;\">*</span><span style=\" color:#000000;\">output dir </span>&lt;dir&gt;</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        line_work_dir->setToolTip(QCoreApplication::translate("qtWGCNA", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial [TMC ]'; font-size:10pt; font-weight:600; font-style:italic;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">samples &lt;bam&gt; treated with the carbodiimide N-cyclohexyl-N0-(2 morpholinoethyl)carbodiimide methop-toluenesulfonate (CMC) or other chemical.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        line_work_dir->setText(QString());
#if QT_CONFIG(tooltip)
        browse_work_dir->setToolTip(QCoreApplication::translate("qtWGCNA", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial [TMC ]'; font-size:10pt; font-weight:600; font-style:italic;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">browse treatment file in bam format</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        browse_work_dir->setText(QCoreApplication::translate("qtWGCNA", "Browse...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("qtWGCNA", "basic parameters", nullptr));
        checkBox_enableWGCNAThreads->setText(QCoreApplication::translate("qtWGCNA", "enableWGCNAThreads", nullptr));
        checkBox_skipSaveBlocks->setText(QCoreApplication::translate("qtWGCNA", "skipSaveBlocks", nullptr));
        checkBox_gzipTOMs->setText(QCoreApplication::translate("qtWGCNA", "gzipTOMs", nullptr));
        label->setText(QCoreApplication::translate("qtWGCNA", "blockwiseModules arguments", nullptr));
#if QT_CONFIG(tooltip)
        config->setToolTip(QCoreApplication::translate("qtWGCNA", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial [TMC ]'; font-size:15pt; font-weight:600; font-style:italic;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">get rtsSeeker arguments from rtsSeeker_config.txt</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        config->setText(QCoreApplication::translate("qtWGCNA", "CONFIG", nullptr));
#if QT_CONFIG(tooltip)
        start->setToolTip(QCoreApplication::translate("qtWGCNA", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial [TMC ]'; font-size:15pt; font-weight:600; font-style:italic;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">start running rtsSeeker</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        start->setText(QCoreApplication::translate("qtWGCNA", "START", nullptr));
        label_rtsSeeker->setText(QCoreApplication::translate("qtWGCNA", "qtWGCNA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtWGCNA: public Ui_qtWGCNA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWGCNA_H
