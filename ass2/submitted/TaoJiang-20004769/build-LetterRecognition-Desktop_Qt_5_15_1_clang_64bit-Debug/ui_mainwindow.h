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
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QTextEdit>
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
    QHBoxLayout *horizontalLayout_14;
    QLabel *file_path_label;
    QTextEdit *textEdit_file_path;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_Load_Test_File;
    QPushButton *pushButton_Test_File_Data;
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
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLCDNumber *lcdNumber_B;
    QLabel *label_12;
    QLCDNumber *lcdNumber_C;
    QLabel *label_13;
    QLCDNumber *lcdNumber_D;
    QLabel *label_14;
    QLCDNumber *lcdNumber_E;
    QLabel *label_15;
    QLCDNumber *lcdNumber_F;
    QLabel *label_16;
    QLCDNumber *lcdNumber_G;
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
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *label_Classification;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLCDNumber *lcdNumber_H;
    QLabel *label_17;
    QLCDNumber *lcdNumber_I;
    QLabel *label_18;
    QLCDNumber *lcdNumber_J;
    QLabel *label_19;
    QLCDNumber *lcdNumber_K;
    QLabel *label_20;
    QLCDNumber *lcdNumber_L;
    QLabel *label_21;
    QLCDNumber *lcdNumber_M;
    QLabel *label_22;
    QLCDNumber *lcdNumber_N;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_20;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_30;
    QLCDNumber *lcdNumber_O;
    QLabel *label_31;
    QLCDNumber *lcdNumber_P;
    QLabel *label_32;
    QLCDNumber *lcdNumber_Q;
    QLabel *label_33;
    QLCDNumber *lcdNumber_R;
    QLabel *label_34;
    QLCDNumber *lcdNumber_S;
    QLabel *label_35;
    QLCDNumber *lcdNumber_T;
    QLabel *label_36;
    QLCDNumber *lcdNumber_U;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_26;
    QHBoxLayout *horizontalLayout_27;
    QHBoxLayout *horizontalLayout_28;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_44;
    QLCDNumber *lcdNumber_V;
    QLabel *label_45;
    QLCDNumber *lcdNumber_W;
    QLabel *label_46;
    QLCDNumber *lcdNumber_X;
    QLabel *label_47;
    QLCDNumber *lcdNumber_Y;
    QLabel *label_48;
    QLCDNumber *lcdNumber_Z;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_activation_function;
    QComboBox *comboBox_activate;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1563, 854);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(13, 10, 360, 771));
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

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        file_path_label = new QLabel(verticalLayoutWidget);
        file_path_label->setObjectName(QStringLiteral("file_path_label"));
        file_path_label->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_14->addWidget(file_path_label);

        textEdit_file_path = new QTextEdit(verticalLayoutWidget);
        textEdit_file_path->setObjectName(QStringLiteral("textEdit_file_path"));
        textEdit_file_path->setMinimumSize(QSize(0, 100));
        textEdit_file_path->setMaximumSize(QSize(180, 300));

        horizontalLayout_14->addWidget(textEdit_file_path);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButton_Load_Test_File = new QPushButton(verticalLayoutWidget);
        pushButton_Load_Test_File->setObjectName(QStringLiteral("pushButton_Load_Test_File"));
        pushButton_Load_Test_File->setMaximumSize(QSize(80, 16777215));

        verticalLayout_4->addWidget(pushButton_Load_Test_File);

        pushButton_Test_File_Data = new QPushButton(verticalLayoutWidget);
        pushButton_Test_File_Data->setObjectName(QStringLiteral("pushButton_Test_File_Data"));
        pushButton_Test_File_Data->setMaximumSize(QSize(80, 16777215));

        verticalLayout_4->addWidget(pushButton_Test_File_Data);


        horizontalLayout_14->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_14);

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
        line_4->setGeometry(QRect(400, 330, 891, 31));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(640, 180, 681, 147));
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
        horizontalLayoutWidget_4->setGeometry(QRect(410, 360, 951, 41));
        horizontalLayoutWidget_4->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(30, 0));
        label_4->setMaximumSize(QSize(30, 80));
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
        lcdNumber_A->setMinimumSize(QSize(50, 0));
        lcdNumber_A->setMaximumSize(QSize(80, 80));
        lcdNumber_A->setSmallDecimalPoint(true);
        lcdNumber_A->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumber_A);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(horizontalLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(30, 0));
        label_5->setMaximumSize(QSize(30, 80));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        lcdNumber_B = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_B->setObjectName(QStringLiteral("lcdNumber_B"));
        lcdNumber_B->setMinimumSize(QSize(50, 0));
        lcdNumber_B->setMaximumSize(QSize(80, 80));
        lcdNumber_B->setSmallDecimalPoint(true);
        lcdNumber_B->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumber_B);

        label_12 = new QLabel(horizontalLayoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(30, 0));
        label_12->setMaximumSize(QSize(30, 80));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_12);

        lcdNumber_C = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_C->setObjectName(QStringLiteral("lcdNumber_C"));
        sizePolicy3.setHeightForWidth(lcdNumber_C->sizePolicy().hasHeightForWidth());
        lcdNumber_C->setSizePolicy(sizePolicy3);
        lcdNumber_C->setMinimumSize(QSize(50, 0));
        lcdNumber_C->setMaximumSize(QSize(80, 80));
        lcdNumber_C->setSmallDecimalPoint(true);
        lcdNumber_C->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumber_C);

        label_13 = new QLabel(horizontalLayoutWidget_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(30, 0));
        label_13->setMaximumSize(QSize(30, 80));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_13);

        lcdNumber_D = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_D->setObjectName(QStringLiteral("lcdNumber_D"));
        lcdNumber_D->setMinimumSize(QSize(50, 0));
        lcdNumber_D->setMaximumSize(QSize(80, 80));
        lcdNumber_D->setSmallDecimalPoint(true);
        lcdNumber_D->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumber_D);

        label_14 = new QLabel(horizontalLayoutWidget_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(30, 0));
        label_14->setMaximumSize(QSize(30, 80));
        label_14->setFont(font);
        label_14->setLayoutDirection(Qt::LeftToRight);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_14);

        lcdNumber_E = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_E->setObjectName(QStringLiteral("lcdNumber_E"));
        lcdNumber_E->setMinimumSize(QSize(50, 0));
        lcdNumber_E->setMaximumSize(QSize(80, 80));
        lcdNumber_E->setSmallDecimalPoint(true);
        lcdNumber_E->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumber_E);

        label_15 = new QLabel(horizontalLayoutWidget_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(30, 0));
        label_15->setMaximumSize(QSize(30, 80));
        label_15->setFont(font);
        label_15->setLayoutDirection(Qt::LeftToRight);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_15);

        lcdNumber_F = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_F->setObjectName(QStringLiteral("lcdNumber_F"));
        lcdNumber_F->setMinimumSize(QSize(50, 0));
        lcdNumber_F->setMaximumSize(QSize(80, 80));
        lcdNumber_F->setSmallDecimalPoint(true);
        lcdNumber_F->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumber_F);

        label_16 = new QLabel(horizontalLayoutWidget_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(30, 0));
        label_16->setMaximumSize(QSize(30, 80));
        label_16->setFont(font);
        label_16->setLayoutDirection(Qt::LeftToRight);
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_16);

        lcdNumber_G = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_G->setObjectName(QStringLiteral("lcdNumber_G"));
        lcdNumber_G->setMinimumSize(QSize(50, 0));
        lcdNumber_G->setMaximumSize(QSize(80, 80));
        lcdNumber_G->setSmallDecimalPoint(true);
        lcdNumber_G->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumber_G);


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
        label_3->setMaximumSize(QSize(16777215, 60));

        horizontalLayout_3->addWidget(label_3);

        pushButton_Classify_Test_Pattern = new QPushButton(verticalLayoutWidget_3);
        pushButton_Classify_Test_Pattern->setObjectName(QStringLiteral("pushButton_Classify_Test_Pattern"));

        horizontalLayout_3->addWidget(pushButton_Classify_Test_Pattern);

        plainTextEdit_Input_Pattern = new QPlainTextEdit(verticalLayoutWidget_3);
        plainTextEdit_Input_Pattern->setObjectName(QStringLiteral("plainTextEdit_Input_Pattern"));
        plainTextEdit_Input_Pattern->setMaximumSize(QSize(16777215, 60));

        horizontalLayout_3->addWidget(plainTextEdit_Input_Pattern);


        verticalLayout_3->addLayout(horizontalLayout_3);

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
        horizontalLayoutWidget_5->setGeometry(QRect(410, 420, 951, 41));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(horizontalLayoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(30, 0));
        label_6->setMaximumSize(QSize(30, 80));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_6);

        lcdNumber_H = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_H->setObjectName(QStringLiteral("lcdNumber_H"));
        lcdNumber_H->setMinimumSize(QSize(50, 0));
        lcdNumber_H->setMaximumSize(QSize(80, 80));
        lcdNumber_H->setSmallDecimalPoint(true);
        lcdNumber_H->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumber_H);

        label_17 = new QLabel(horizontalLayoutWidget_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(30, 0));
        label_17->setMaximumSize(QSize(30, 80));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_17);

        lcdNumber_I = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_I->setObjectName(QStringLiteral("lcdNumber_I"));
        sizePolicy3.setHeightForWidth(lcdNumber_I->sizePolicy().hasHeightForWidth());
        lcdNumber_I->setSizePolicy(sizePolicy3);
        lcdNumber_I->setMinimumSize(QSize(50, 0));
        lcdNumber_I->setMaximumSize(QSize(80, 80));
        lcdNumber_I->setSmallDecimalPoint(true);
        lcdNumber_I->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumber_I);

        label_18 = new QLabel(horizontalLayoutWidget_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(30, 0));
        label_18->setMaximumSize(QSize(30, 80));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_18);

        lcdNumber_J = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_J->setObjectName(QStringLiteral("lcdNumber_J"));
        lcdNumber_J->setMinimumSize(QSize(50, 0));
        lcdNumber_J->setMaximumSize(QSize(80, 80));
        lcdNumber_J->setSmallDecimalPoint(true);
        lcdNumber_J->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumber_J);

        label_19 = new QLabel(horizontalLayoutWidget_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(30, 0));
        label_19->setMaximumSize(QSize(30, 80));
        label_19->setFont(font);
        label_19->setLayoutDirection(Qt::LeftToRight);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_19);

        lcdNumber_K = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_K->setObjectName(QStringLiteral("lcdNumber_K"));
        lcdNumber_K->setMinimumSize(QSize(50, 0));
        lcdNumber_K->setMaximumSize(QSize(80, 80));
        lcdNumber_K->setSmallDecimalPoint(true);
        lcdNumber_K->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumber_K);

        label_20 = new QLabel(horizontalLayoutWidget_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(30, 0));
        label_20->setMaximumSize(QSize(30, 80));
        label_20->setFont(font);
        label_20->setLayoutDirection(Qt::LeftToRight);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_20);

        lcdNumber_L = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_L->setObjectName(QStringLiteral("lcdNumber_L"));
        lcdNumber_L->setMinimumSize(QSize(50, 0));
        lcdNumber_L->setMaximumSize(QSize(80, 80));
        lcdNumber_L->setSmallDecimalPoint(true);
        lcdNumber_L->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumber_L);

        label_21 = new QLabel(horizontalLayoutWidget_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(30, 0));
        label_21->setMaximumSize(QSize(30, 80));
        label_21->setFont(font);
        label_21->setLayoutDirection(Qt::LeftToRight);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_21);

        lcdNumber_M = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_M->setObjectName(QStringLiteral("lcdNumber_M"));
        lcdNumber_M->setMinimumSize(QSize(50, 0));
        lcdNumber_M->setMaximumSize(QSize(80, 80));
        lcdNumber_M->setSmallDecimalPoint(true);
        lcdNumber_M->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumber_M);

        label_22 = new QLabel(horizontalLayoutWidget_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(30, 0));
        label_22->setMaximumSize(QSize(30, 80));
        label_22->setFont(font);
        label_22->setLayoutDirection(Qt::LeftToRight);
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_22);

        lcdNumber_N = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_N->setObjectName(QStringLiteral("lcdNumber_N"));
        lcdNumber_N->setMinimumSize(QSize(50, 0));
        lcdNumber_N->setMaximumSize(QSize(80, 80));
        lcdNumber_N->setSmallDecimalPoint(true);
        lcdNumber_N->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumber_N);


        horizontalLayout_13->addLayout(horizontalLayout_6);


        horizontalLayout_12->addLayout(horizontalLayout_13);


        horizontalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayoutWidget_6 = new QWidget(centralWidget);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(410, 480, 951, 41));
        horizontalLayout_18 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_30 = new QLabel(horizontalLayoutWidget_6);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMinimumSize(QSize(30, 0));
        label_30->setMaximumSize(QSize(30, 80));
        label_30->setFont(font);
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(label_30);

        lcdNumber_O = new QLCDNumber(horizontalLayoutWidget_6);
        lcdNumber_O->setObjectName(QStringLiteral("lcdNumber_O"));
        lcdNumber_O->setMinimumSize(QSize(50, 0));
        lcdNumber_O->setMaximumSize(QSize(80, 80));
        lcdNumber_O->setSmallDecimalPoint(true);
        lcdNumber_O->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_21->addWidget(lcdNumber_O);

        label_31 = new QLabel(horizontalLayoutWidget_6);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMinimumSize(QSize(30, 0));
        label_31->setMaximumSize(QSize(30, 80));
        label_31->setFont(font);
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(label_31);

        lcdNumber_P = new QLCDNumber(horizontalLayoutWidget_6);
        lcdNumber_P->setObjectName(QStringLiteral("lcdNumber_P"));
        sizePolicy3.setHeightForWidth(lcdNumber_P->sizePolicy().hasHeightForWidth());
        lcdNumber_P->setSizePolicy(sizePolicy3);
        lcdNumber_P->setMinimumSize(QSize(50, 0));
        lcdNumber_P->setMaximumSize(QSize(80, 80));
        lcdNumber_P->setSmallDecimalPoint(true);
        lcdNumber_P->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_21->addWidget(lcdNumber_P);

        label_32 = new QLabel(horizontalLayoutWidget_6);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMinimumSize(QSize(30, 0));
        label_32->setMaximumSize(QSize(30, 80));
        label_32->setFont(font);
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(label_32);

        lcdNumber_Q = new QLCDNumber(horizontalLayoutWidget_6);
        lcdNumber_Q->setObjectName(QStringLiteral("lcdNumber_Q"));
        lcdNumber_Q->setMinimumSize(QSize(50, 0));
        lcdNumber_Q->setMaximumSize(QSize(80, 80));
        lcdNumber_Q->setSmallDecimalPoint(true);
        lcdNumber_Q->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_21->addWidget(lcdNumber_Q);

        label_33 = new QLabel(horizontalLayoutWidget_6);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setMinimumSize(QSize(30, 0));
        label_33->setMaximumSize(QSize(30, 80));
        label_33->setFont(font);
        label_33->setLayoutDirection(Qt::LeftToRight);
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(label_33);

        lcdNumber_R = new QLCDNumber(horizontalLayoutWidget_6);
        lcdNumber_R->setObjectName(QStringLiteral("lcdNumber_R"));
        lcdNumber_R->setMinimumSize(QSize(50, 0));
        lcdNumber_R->setMaximumSize(QSize(80, 80));
        lcdNumber_R->setSmallDecimalPoint(true);
        lcdNumber_R->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_21->addWidget(lcdNumber_R);

        label_34 = new QLabel(horizontalLayoutWidget_6);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMinimumSize(QSize(30, 0));
        label_34->setMaximumSize(QSize(30, 80));
        label_34->setFont(font);
        label_34->setLayoutDirection(Qt::LeftToRight);
        label_34->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(label_34);

        lcdNumber_S = new QLCDNumber(horizontalLayoutWidget_6);
        lcdNumber_S->setObjectName(QStringLiteral("lcdNumber_S"));
        lcdNumber_S->setMinimumSize(QSize(50, 0));
        lcdNumber_S->setMaximumSize(QSize(80, 80));
        lcdNumber_S->setSmallDecimalPoint(true);
        lcdNumber_S->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_21->addWidget(lcdNumber_S);

        label_35 = new QLabel(horizontalLayoutWidget_6);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setMinimumSize(QSize(30, 0));
        label_35->setMaximumSize(QSize(30, 80));
        label_35->setFont(font);
        label_35->setLayoutDirection(Qt::LeftToRight);
        label_35->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(label_35);

        lcdNumber_T = new QLCDNumber(horizontalLayoutWidget_6);
        lcdNumber_T->setObjectName(QStringLiteral("lcdNumber_T"));
        lcdNumber_T->setMinimumSize(QSize(50, 0));
        lcdNumber_T->setMaximumSize(QSize(80, 80));
        lcdNumber_T->setSmallDecimalPoint(true);
        lcdNumber_T->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_21->addWidget(lcdNumber_T);

        label_36 = new QLabel(horizontalLayoutWidget_6);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setMinimumSize(QSize(30, 0));
        label_36->setMaximumSize(QSize(30, 80));
        label_36->setFont(font);
        label_36->setLayoutDirection(Qt::LeftToRight);
        label_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(label_36);

        lcdNumber_U = new QLCDNumber(horizontalLayoutWidget_6);
        lcdNumber_U->setObjectName(QStringLiteral("lcdNumber_U"));
        lcdNumber_U->setMinimumSize(QSize(50, 0));
        lcdNumber_U->setMaximumSize(QSize(80, 80));
        lcdNumber_U->setSmallDecimalPoint(true);
        lcdNumber_U->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_21->addWidget(lcdNumber_U);


        horizontalLayout_20->addLayout(horizontalLayout_21);


        horizontalLayout_19->addLayout(horizontalLayout_20);


        horizontalLayout_18->addLayout(horizontalLayout_19);

        horizontalLayoutWidget_7 = new QWidget(centralWidget);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(410, 530, 951, 41));
        horizontalLayout_26 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        label_44 = new QLabel(horizontalLayoutWidget_7);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setMinimumSize(QSize(30, 0));
        label_44->setMaximumSize(QSize(30, 80));
        label_44->setFont(font);
        label_44->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_29->addWidget(label_44);

        lcdNumber_V = new QLCDNumber(horizontalLayoutWidget_7);
        lcdNumber_V->setObjectName(QStringLiteral("lcdNumber_V"));
        lcdNumber_V->setMinimumSize(QSize(50, 0));
        lcdNumber_V->setMaximumSize(QSize(80, 80));
        lcdNumber_V->setSmallDecimalPoint(true);
        lcdNumber_V->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_29->addWidget(lcdNumber_V);

        label_45 = new QLabel(horizontalLayoutWidget_7);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setMinimumSize(QSize(30, 0));
        label_45->setMaximumSize(QSize(30, 80));
        label_45->setFont(font);
        label_45->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_29->addWidget(label_45);

        lcdNumber_W = new QLCDNumber(horizontalLayoutWidget_7);
        lcdNumber_W->setObjectName(QStringLiteral("lcdNumber_W"));
        sizePolicy3.setHeightForWidth(lcdNumber_W->sizePolicy().hasHeightForWidth());
        lcdNumber_W->setSizePolicy(sizePolicy3);
        lcdNumber_W->setMinimumSize(QSize(50, 0));
        lcdNumber_W->setMaximumSize(QSize(80, 80));
        lcdNumber_W->setSmallDecimalPoint(true);
        lcdNumber_W->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_29->addWidget(lcdNumber_W);

        label_46 = new QLabel(horizontalLayoutWidget_7);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setMinimumSize(QSize(30, 0));
        label_46->setMaximumSize(QSize(30, 80));
        label_46->setFont(font);
        label_46->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_29->addWidget(label_46);

        lcdNumber_X = new QLCDNumber(horizontalLayoutWidget_7);
        lcdNumber_X->setObjectName(QStringLiteral("lcdNumber_X"));
        lcdNumber_X->setMinimumSize(QSize(50, 0));
        lcdNumber_X->setMaximumSize(QSize(80, 80));
        lcdNumber_X->setSmallDecimalPoint(true);
        lcdNumber_X->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_29->addWidget(lcdNumber_X);

        label_47 = new QLabel(horizontalLayoutWidget_7);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setMinimumSize(QSize(30, 0));
        label_47->setMaximumSize(QSize(30, 80));
        label_47->setFont(font);
        label_47->setLayoutDirection(Qt::LeftToRight);
        label_47->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_29->addWidget(label_47);

        lcdNumber_Y = new QLCDNumber(horizontalLayoutWidget_7);
        lcdNumber_Y->setObjectName(QStringLiteral("lcdNumber_Y"));
        lcdNumber_Y->setMinimumSize(QSize(50, 0));
        lcdNumber_Y->setMaximumSize(QSize(80, 80));
        lcdNumber_Y->setSmallDecimalPoint(true);
        lcdNumber_Y->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_29->addWidget(lcdNumber_Y);

        label_48 = new QLabel(horizontalLayoutWidget_7);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setMinimumSize(QSize(30, 0));
        label_48->setMaximumSize(QSize(30, 80));
        label_48->setFont(font);
        label_48->setLayoutDirection(Qt::LeftToRight);
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_29->addWidget(label_48);

        lcdNumber_Z = new QLCDNumber(horizontalLayoutWidget_7);
        lcdNumber_Z->setObjectName(QStringLiteral("lcdNumber_Z"));
        lcdNumber_Z->setMinimumSize(QSize(50, 0));
        lcdNumber_Z->setMaximumSize(QSize(80, 80));
        lcdNumber_Z->setSmallDecimalPoint(true);
        lcdNumber_Z->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_29->addWidget(lcdNumber_Z);


        horizontalLayout_28->addLayout(horizontalLayout_29);


        horizontalLayout_27->addLayout(horizontalLayout_28);


        horizontalLayout_26->addLayout(horizontalLayout_27);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(880, 10, 434, 84));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_activation_function = new QLabel(horizontalLayoutWidget_2);
        label_activation_function->setObjectName(QStringLiteral("label_activation_function"));

        horizontalLayout_15->addWidget(label_activation_function);

        comboBox_activate = new QComboBox(horizontalLayoutWidget_2);
        comboBox_activate->insertItems(0, QStringList()
         << QStringLiteral("sigmoid")
         << QStringLiteral("ReLU")
         << QStringLiteral("Tanh")
        );
        comboBox_activate->setObjectName(QStringLiteral("comboBox_activate"));

        horizontalLayout_15->addWidget(comboBox_activate);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1563, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        comboBox_activate->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Neural Network Application:  CHARACTER RECOGNITION", Q_NULLPTR));
        pushButton_Read_File->setText(QApplication::translate("MainWindow", "Read Complete Data File", Q_NULLPTR));
        pushButton_Initialise_Network->setText(QApplication::translate("MainWindow", "Initialise Network", Q_NULLPTR));
        pushButton_Train_Network_Max_Epochs->setText(QApplication::translate("MainWindow", "Train Network (max epochs)", Q_NULLPTR));
        file_path_label->setText(QApplication::translate("MainWindow", "TestFile path:", Q_NULLPTR));
        textEdit_file_path->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Test_Data.txt</p></body></html>", Q_NULLPTR));
        pushButton_Load_Test_File->setText(QApplication::translate("MainWindow", "Load file", Q_NULLPTR));
        pushButton_Test_File_Data->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
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
        label_4->setText(QApplication::translate("MainWindow", " A", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "D", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "E", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "F", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "G", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Sum of Squared Error:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "% of Good Classification:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Test Pattern", Q_NULLPTR));
        pushButton_Classify_Test_Pattern->setText(QApplication::translate("MainWindow", "Classify Test Pattern", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Classification:", Q_NULLPTR));
        label_Classification->setText(QApplication::translate("MainWindow", "- - - - - - - - - ", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "H", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "I", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "J", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "K", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "L", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "M", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "N", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "O", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "P", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "Q", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "R", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "S", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "T", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "U", Q_NULLPTR));
        label_44->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_45->setText(QApplication::translate("MainWindow", "W", Q_NULLPTR));
        label_46->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_47->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        label_48->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        label_activation_function->setText(QApplication::translate("MainWindow", "activation function:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
