/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Read_File;
    QPushButton *pushButton_Initialise_Network;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_Train_Network_Max_Epochs;
    QSpinBox *spinBox_training_Epochs;
    QPushButton *pushButton_Test_All_Patterns;
    QPushButton *pushButton_testNetOnTrainingSet;
    QFrame *line_6;
    QLabel *label_9;
    QPlainTextEdit *plainTextEdit_saveWeightsAs;
    QPushButton *pushButton_Save_Weights;
    QFrame *line_5;
    QLabel *label_8;
    QPlainTextEdit *plainTextEdit_fileNameLoadWeights;
    QPushButton *pushButton_Load_Weights;
    QSpacerItem *verticalSpacer;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QScrollBar *horizScrollBar_LearningRate;
    QLCDNumber *lcdNumber_LearningRate;
    QFrame *line;
    QFrame *line_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QPlainTextEdit *plainTextEdit_results;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLCDNumber *lcdNumber_A;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLCDNumber *lcdNumber_B;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QLCDNumber *lcdNumber_unknown;
    QHBoxLayout *horizontalLayout_6;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber_SSE;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLCDNumber *lcdNumber_percentageOfGoodClassification;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *pushButton_Classify_Test_Pattern;
    QPlainTextEdit *plainTextEdit_Input_Pattern;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *label_Classification;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLCDNumber *lcdNumber_C;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLCDNumber *lcdNumber_D;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_14;
    QLCDNumber *lcdNumber_E;
    QHBoxLayout *horizontalLayout_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1498, 892);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(13, 10, 360, 715));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Read_File = new QPushButton(verticalLayoutWidget);
        pushButton_Read_File->setObjectName(QStringLiteral("pushButton_Read_File"));

        verticalLayout->addWidget(pushButton_Read_File);

        pushButton_Initialise_Network = new QPushButton(verticalLayoutWidget);
        pushButton_Initialise_Network->setObjectName(QStringLiteral("pushButton_Initialise_Network"));

        verticalLayout->addWidget(pushButton_Initialise_Network);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton_Train_Network_Max_Epochs = new QPushButton(verticalLayoutWidget);
        pushButton_Train_Network_Max_Epochs->setObjectName(QStringLiteral("pushButton_Train_Network_Max_Epochs"));

        horizontalLayout_8->addWidget(pushButton_Train_Network_Max_Epochs);

        spinBox_training_Epochs = new QSpinBox(verticalLayoutWidget);
        spinBox_training_Epochs->setObjectName(QStringLiteral("spinBox_training_Epochs"));
        spinBox_training_Epochs->setMaximum(9999);
        spinBox_training_Epochs->setValue(50);

        horizontalLayout_8->addWidget(spinBox_training_Epochs);


        verticalLayout->addLayout(horizontalLayout_8);

        pushButton_Test_All_Patterns = new QPushButton(verticalLayoutWidget);
        pushButton_Test_All_Patterns->setObjectName(QStringLiteral("pushButton_Test_All_Patterns"));

        verticalLayout->addWidget(pushButton_Test_All_Patterns);

        pushButton_testNetOnTrainingSet = new QPushButton(verticalLayoutWidget);
        pushButton_testNetOnTrainingSet->setObjectName(QStringLiteral("pushButton_testNetOnTrainingSet"));

        verticalLayout->addWidget(pushButton_testNetOnTrainingSet);

        line_6 = new QFrame(verticalLayoutWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_6);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        plainTextEdit_saveWeightsAs = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit_saveWeightsAs->setObjectName(QStringLiteral("plainTextEdit_saveWeightsAs"));

        verticalLayout->addWidget(plainTextEdit_saveWeightsAs);

        pushButton_Save_Weights = new QPushButton(verticalLayoutWidget);
        pushButton_Save_Weights->setObjectName(QStringLiteral("pushButton_Save_Weights"));

        verticalLayout->addWidget(pushButton_Save_Weights);

        line_5 = new QFrame(verticalLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        plainTextEdit_fileNameLoadWeights = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit_fileNameLoadWeights->setObjectName(QStringLiteral("plainTextEdit_fileNameLoadWeights"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit_fileNameLoadWeights->sizePolicy().hasHeightForWidth());
        plainTextEdit_fileNameLoadWeights->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(plainTextEdit_fileNameLoadWeights);

        pushButton_Load_Weights = new QPushButton(verticalLayoutWidget);
        pushButton_Load_Weights->setObjectName(QStringLiteral("pushButton_Load_Weights"));

        verticalLayout->addWidget(pushButton_Load_Weights);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(430, 10, 371, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizScrollBar_LearningRate = new QScrollBar(horizontalLayoutWidget);
        horizScrollBar_LearningRate->setObjectName(QStringLiteral("horizScrollBar_LearningRate"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizScrollBar_LearningRate->sizePolicy().hasHeightForWidth());
        horizScrollBar_LearningRate->setSizePolicy(sizePolicy1);
        horizScrollBar_LearningRate->setMaximum(500);
        horizScrollBar_LearningRate->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizScrollBar_LearningRate);

        lcdNumber_LearningRate = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_LearningRate->setObjectName(QStringLiteral("lcdNumber_LearningRate"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdNumber_LearningRate->sizePolicy().hasHeightForWidth());
        lcdNumber_LearningRate->setSizePolicy(sizePolicy2);
        lcdNumber_LearningRate->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_LearningRate->setLineWidth(1);
        lcdNumber_LearningRate->setSmallDecimalPoint(true);

        horizontalLayout->addWidget(lcdNumber_LearningRate);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(390, 0, 20, 721));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(400, 380, 891, 31));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(690, 210, 681, 147));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_2->addWidget(label_10);

        plainTextEdit_results = new QPlainTextEdit(verticalLayoutWidget_2);
        plainTextEdit_results->setObjectName(QStringLiteral("plainTextEdit_results"));

        verticalLayout_2->addWidget(plainTextEdit_results);

        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(430, 430, 951, 59));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        lcdNumber_A = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_A->setObjectName(QStringLiteral("lcdNumber_A"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lcdNumber_A->sizePolicy().hasHeightForWidth());
        lcdNumber_A->setSizePolicy(sizePolicy3);
        lcdNumber_A->setMinimumSize(QSize(100, 0));
        lcdNumber_A->setSmallDecimalPoint(true);
        lcdNumber_A->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumber_A);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(horizontalLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        lcdNumber_B = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_B->setObjectName(QStringLiteral("lcdNumber_B"));
        lcdNumber_B->setMinimumSize(QSize(100, 0));
        lcdNumber_B->setSmallDecimalPoint(true);
        lcdNumber_B->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumber_B);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        label_6 = new QLabel(horizontalLayoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_6);

        lcdNumber_unknown = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_unknown->setObjectName(QStringLiteral("lcdNumber_unknown"));
        lcdNumber_unknown->setMinimumSize(QSize(100, 0));
        lcdNumber_unknown->setSmallDecimalPoint(true);
        lcdNumber_unknown->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumber_unknown);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));

        horizontalLayout_5->addLayout(horizontalLayout_6);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayoutWidget_10 = new QWidget(centralWidget);
        horizontalLayoutWidget_10->setObjectName(QStringLiteral("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(430, 90, 1053, 80));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(horizontalLayoutWidget_10);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(label_2);

        lcdNumber_SSE = new QLCDNumber(horizontalLayoutWidget_10);
        lcdNumber_SSE->setObjectName(QStringLiteral("lcdNumber_SSE"));
        sizePolicy2.setHeightForWidth(lcdNumber_SSE->sizePolicy().hasHeightForWidth());
        lcdNumber_SSE->setSizePolicy(sizePolicy2);
        lcdNumber_SSE->setMinimumSize(QSize(175, 0));
        lcdNumber_SSE->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_SSE->setLineWidth(1);
        lcdNumber_SSE->setSmallDecimalPoint(true);
        lcdNumber_SSE->setDigitCount(8);

        horizontalLayout_2->addWidget(lcdNumber_SSE);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_11 = new QLabel(horizontalLayoutWidget_10);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_9->addWidget(label_11);

        lcdNumber_percentageOfGoodClassification = new QLCDNumber(horizontalLayoutWidget_10);
        lcdNumber_percentageOfGoodClassification->setObjectName(QStringLiteral("lcdNumber_percentageOfGoodClassification"));
        sizePolicy2.setHeightForWidth(lcdNumber_percentageOfGoodClassification->sizePolicy().hasHeightForWidth());
        lcdNumber_percentageOfGoodClassification->setSizePolicy(sizePolicy2);
        lcdNumber_percentageOfGoodClassification->setMinimumSize(QSize(275, 0));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lcdNumber_percentageOfGoodClassification->setFont(font1);
        lcdNumber_percentageOfGoodClassification->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_percentageOfGoodClassification->setLineWidth(1);
        lcdNumber_percentageOfGoodClassification->setSmallDecimalPoint(true);
        lcdNumber_percentageOfGoodClassification->setDigitCount(8);

        horizontalLayout_9->addWidget(lcdNumber_percentageOfGoodClassification);


        horizontalLayout_2->addLayout(horizontalLayout_9);


        horizontalLayout_11->addLayout(horizontalLayout_2);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(420, 600, 991, 221));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pushButton_Classify_Test_Pattern = new QPushButton(verticalLayoutWidget_3);
        pushButton_Classify_Test_Pattern->setObjectName(QStringLiteral("pushButton_Classify_Test_Pattern"));

        horizontalLayout_3->addWidget(pushButton_Classify_Test_Pattern);

        plainTextEdit_Input_Pattern = new QPlainTextEdit(verticalLayoutWidget_3);
        plainTextEdit_Input_Pattern->setObjectName(QStringLiteral("plainTextEdit_Input_Pattern"));

        horizontalLayout_3->addWidget(plainTextEdit_Input_Pattern);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        line_2 = new QFrame(verticalLayoutWidget_3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        label_Classification = new QLabel(verticalLayoutWidget_3);
        label_Classification->setObjectName(QStringLiteral("label_Classification"));
        label_Classification->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setPointSize(12);
        label_Classification->setFont(font2);

        horizontalLayout_7->addWidget(label_Classification);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayoutWidget_5 = new QWidget(centralWidget);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(430, 500, 951, 59));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_12);

        lcdNumber_C = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_C->setObjectName(QStringLiteral("lcdNumber_C"));
        sizePolicy3.setHeightForWidth(lcdNumber_C->sizePolicy().hasHeightForWidth());
        lcdNumber_C->setSizePolicy(sizePolicy3);
        lcdNumber_C->setMinimumSize(QSize(100, 0));
        lcdNumber_C->setSmallDecimalPoint(true);
        lcdNumber_C->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_10->addWidget(lcdNumber_C);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_13 = new QLabel(horizontalLayoutWidget_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_13);

        lcdNumber_D = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_D->setObjectName(QStringLiteral("lcdNumber_D"));
        lcdNumber_D->setMinimumSize(QSize(100, 0));
        lcdNumber_D->setSmallDecimalPoint(true);
        lcdNumber_D->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_12->addWidget(lcdNumber_D);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);

        label_14 = new QLabel(horizontalLayoutWidget_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);
        label_14->setLayoutDirection(Qt::LeftToRight);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_14);

        lcdNumber_E = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_E->setObjectName(QStringLiteral("lcdNumber_E"));
        lcdNumber_E->setMinimumSize(QSize(100, 0));
        lcdNumber_E->setSmallDecimalPoint(true);
        lcdNumber_E->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_12->addWidget(lcdNumber_E);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));

        horizontalLayout_12->addLayout(horizontalLayout_13);


        horizontalLayout_10->addLayout(horizontalLayout_12);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1498, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Neural Network Application:  CHARACTER RECOGNITION", Q_NULLPTR));
        pushButton_Read_File->setText(QApplication::translate("MainWindow", "&Read File", Q_NULLPTR));
        pushButton_Initialise_Network->setText(QApplication::translate("MainWindow", "Initialise Network", Q_NULLPTR));
        pushButton_Train_Network_Max_Epochs->setText(QApplication::translate("MainWindow", "Train Network (max epochs)", Q_NULLPTR));
        pushButton_Test_All_Patterns->setText(QApplication::translate("MainWindow", "Test Network on TEST SET", Q_NULLPTR));
        pushButton_testNetOnTrainingSet->setText(QApplication::translate("MainWindow", "Test Network on TRAINING SET", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Save Weights as:", Q_NULLPTR));
        plainTextEdit_saveWeightsAs->setPlainText(QApplication::translate("MainWindow", "weights.txt", Q_NULLPTR));
        pushButton_Save_Weights->setText(QApplication::translate("MainWindow", "&Save Weights", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Filename of Weights to load:", Q_NULLPTR));
        plainTextEdit_fileNameLoadWeights->setPlainText(QApplication::translate("MainWindow", "weights.txt", Q_NULLPTR));
        pushButton_Load_Weights->setText(QApplication::translate("MainWindow", "Load Weights", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Learning rate:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Results:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Letter 'A'", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Letter 'B'", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "unknown", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Sum of Squared Error:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "% of Good Classification:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Test Pattern", Q_NULLPTR));
        pushButton_Classify_Test_Pattern->setText(QApplication::translate("MainWindow", "Classify Test Pattern", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Classification:", Q_NULLPTR));
        label_Classification->setText(QApplication::translate("MainWindow", "- - - - - - - - - ", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Letter 'C'", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Letter 'D'", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Letter 'E'", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
