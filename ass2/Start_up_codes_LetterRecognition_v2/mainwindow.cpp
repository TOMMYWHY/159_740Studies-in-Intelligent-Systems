#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globalVariables.h"
#include<typeinfo>


// #include <iostream>
// #include <string>
// #include <fstream>
#include <QFile>
#include <QFileInfo>
#include<QFileDialog>
#include <algorithm>
#include <ctime>
#include <vector>


//--------------------------------------

LetterStructure letters[20001];
LetterStructure testPattern;
LetterStructure testPattern_file[4001];

bool patternsLoadedFromFile;
int MAX_EPOCHS;
double LEARNING_RATE;
int Activate_fun;
//QString Absolute_path;// = "/Users/Tommy/Desktop/studyInMassey/159_740Studies in Intelligent Systems/ass2/";

//QString File_path;
  QString File_test_path ;

///////////////////////////////////////////////////////

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //---------------------------------------
    //initialisation of global variables
    //
    LEARNING_RATE=0.2;
    patternsLoadedFromFile = false;
    MAX_EPOCHS = 50;
    Activate_fun = 0;

    bp = new Backpropagation;

    //---------------------------------------
    //initialise widgets

    ui->spinBox_training_Epochs->setValue(MAX_EPOCHS);
    ui->horizScrollBar_LearningRate->setValue(int(LEARNING_RATE*100));
}

MainWindow::~MainWindow()
{
    delete ui;
}




/*load test file on_pushButton_Load_Test_File_clicked*/
void MainWindow::on_pushButton_Load_Test_File_clicked(){
    qDebug() << "\nReading complete data file...";

     File_test_path = ui->textEdit_file_path->toPlainText();
      qDebug() << "File_test_path:"<<File_test_path;
//      QFile file(File_trian_path);

}
/*test test_dataset file */

void MainWindow::on_pushButton_Test_File_Data_clicked()
{
    QFile file(File_test_path);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!file.exists()){
        patternsLoadedFromFile=false;
        qDebug() << "test_dataset file does not exist!";
        return;
    }
    QTextStream in(&file);
    char t;
    char characterSymbol;
    Symbol symbol_test;
    double* classificationResults;
    double* outputs;
    int correctClassifications=0;
    QString line;

    QString lineOfData;
    classificationResults = new double[OUTPUT_NEURONS];
    outputs = new double[OUTPUT_NEURONS];
    double accumulatedErr;
    vector<vector <int> > confusion_matrix(OUTPUT_NEURONS ,vector<int>(OUTPUT_NEURONS,0));

    int i=0;
   for(int i=0; i < NUMBER_OF_TEST_PATTERNS; i++){
        in >> characterSymbol >> t >> testPattern_file[i].f[0] >> t >>  testPattern_file[i].f[1] >> t >>testPattern_file[i].f[2] >> t >>  testPattern_file[i].f[3] >> t >>  testPattern_file[i].f[4] >> t >>testPattern_file[i].f[5] >> t >>  testPattern_file[i].f[6] >> t >>  testPattern_file[i].f[7] >> t >>testPattern_file[i].f[8] >> t >>  testPattern_file[i].f[9] >> t >>  testPattern_file[i].f[10] >> t >>testPattern_file[i].f[11] >> t >> testPattern_file[i].f[12] >> t >> testPattern_file[i].f[13] >> t >>testPattern_file[i].f[14] >> t >> testPattern_file[i].f[15];
        line = in.readLine();
        for (int k = 0; k < OUTPUT_NEURONS; k++)
            {
                testPattern.outputs[k]=0;
            }

        for(int j=0; j < INPUT_NEURONS; j++){
            testPattern.f[j] = testPattern_file[i].f[j];
            // cout << testPattern.f[j] <<" ";
        }
        // cout <<endl;
        if(characterSymbol == 'A'){
        testPattern.symbol = LETTER_A;
        testPattern.outputs[LETTER_A] = 1;
        } else if(characterSymbol == 'B'){
            testPattern.symbol = LETTER_B;
            testPattern.outputs[LETTER_B] = 1;
        }
        else if(characterSymbol == 'C'){
        testPattern.symbol = LETTER_C;
        testPattern.outputs[LETTER_C] = 1;
        }
        else if(characterSymbol == 'D'){
        testPattern.symbol = LETTER_D;
        testPattern.outputs[LETTER_D] = 1;
        }
        else if(characterSymbol == 'E'){
        testPattern.symbol = LETTER_E;
        testPattern.outputs[LETTER_E] = 1;
        }
        else if(characterSymbol == 'F'){
        testPattern.symbol = LETTER_F;
        testPattern.outputs[LETTER_F] = 1;
        }
        else if(characterSymbol == 'G'){
        testPattern.symbol = LETTER_G;
        testPattern.outputs[LETTER_G] = 1;
        }
        else if(characterSymbol == 'H'){
        testPattern.symbol = LETTER_H;
        testPattern.outputs[LETTER_H] = 1;
        }
        else if(characterSymbol == 'I'){
        testPattern.symbol = LETTER_I;
        testPattern.outputs[LETTER_I] = 1;
        }
        else if(characterSymbol == 'J'){
        testPattern.symbol = LETTER_J;
        testPattern.outputs[LETTER_J] = 1;
        }
        else if(characterSymbol == 'K'){
        testPattern.symbol = LETTER_K;
        testPattern.outputs[LETTER_K] = 1;
        }
        else if(characterSymbol == 'L'){
        testPattern.symbol = LETTER_L;
        testPattern.outputs[LETTER_L] = 1;
        }
        else if(characterSymbol == 'M'){
        testPattern.symbol = LETTER_M;
        testPattern.outputs[LETTER_M] = 1;
        }
        else if(characterSymbol == 'N'){
        testPattern.symbol = LETTER_N;
        testPattern.outputs[LETTER_N] = 1;
        }
        else if(characterSymbol == 'O'){
        testPattern.symbol = LETTER_O;
        testPattern.outputs[LETTER_O] = 1;
        }
        else if(characterSymbol == 'P'){
        testPattern.symbol = LETTER_P;
        testPattern.outputs[LETTER_P] = 1;
        }
        else if(characterSymbol == 'Q'){
        testPattern.symbol = LETTER_Q;
        testPattern.outputs[LETTER_Q] = 1;
        }
        else if(characterSymbol == 'R'){
        testPattern.symbol = LETTER_R;
        testPattern.outputs[LETTER_R] = 1;
        }
        else if(characterSymbol == 'S'){
        testPattern.symbol = LETTER_S;
        testPattern.outputs[LETTER_S] = 1;
        }
        else if(characterSymbol == 'T'){
        testPattern.symbol = LETTER_T;
        testPattern.outputs[LETTER_T] = 1;
        }
        else if(characterSymbol == 'U'){
        testPattern.symbol = LETTER_U;
        testPattern.outputs[LETTER_U] = 1;
        }
        else if(characterSymbol == 'V'){
        testPattern.symbol = LETTER_V;
        testPattern.outputs[LETTER_V] = 1;
        }
        else if(characterSymbol == 'W'){
        testPattern.symbol = LETTER_W;
        testPattern.outputs[LETTER_W] = 1;
        }
        else if(characterSymbol == 'X'){
        testPattern.symbol = LETTER_X;
        testPattern.outputs[LETTER_X] = 1;
        }
        else if(characterSymbol == 'Y'){
        testPattern.symbol = LETTER_Y;
        testPattern.outputs[LETTER_Y] = 1;
        }
        else if(characterSymbol == 'Z'){
        testPattern.symbol = LETTER_Z;
        testPattern.outputs[LETTER_Z] = 1;
        }

        double err;
        classificationResults = bp->testNetwork(testPattern,err);
        accumulatedErr = accumulatedErr + err;

        for(int k=0; k < OUTPUT_NEURONS; k++){
            outputs[k] = testPattern.outputs[k];
        //    cout <<outputs[k];
        }
        confusion_matrix[bp->action(outputs)][bp->action(classificationResults)]++;   

        if (bp->action(classificationResults) == bp->action(outputs)) {
            // cout<<bp->action(classificationResults) <<"--"<<bp->action(outputs) <<endl;
                correctClassifications++;
        }
    }

    ui->lcdNumber_percentageOfGoodClassification->display(((float)correctClassifications/NUMBER_OF_TEST_PATTERNS) *100);
    qDebug() << "TEST FILE SET: correctClassifications = " << correctClassifications 
    <<" PGC: "<<  ((float)correctClassifications/NUMBER_OF_TEST_PATTERNS) *100<<
    " MSE: "<< accumulatedErr/NUMBER_OF_TEST_PATTERNS;
    QString msg;

    msg.clear();
    QTextStream(&msg) << "TEST FILE SET: correctClassifications = " << correctClassifications << endl;

    


    QString report_name="report_test_activefun"+QString::number(Activate_fun)
                            +"_epoch"+QString::number(MAX_EPOCHS)
                            + "_lr"+QString::number(LEARNING_RATE)
                            // +"_"+QString::number(HIDDEN_NEURONS)
                            // + "_"+QString::number(HIDDEN_NEURONS_2)
                            // + "_"+QString::number(OUTPUT_NEURONS)
                             +".txt";
    // qDebug() << report_name.toStdString().data();
    QFile file_report (report_name);
    bool isOk =file_report.open(QIODevice::ReadWrite | QIODevice::Append);
    if (isOk){
        QTextStream stream(&file_report);
        stream<<"epoch:"<<(i) <<"; SSE:"<<(accumulatedErr)
        << "; MSE: " <<(accumulatedErr/NUMBER_OF_TEST_PATTERNS) 
        << "; PGC: " <<  ((float)correctClassifications/NUMBER_OF_TEST_PATTERNS) *100 << "\n";
    }
    qDebug() <<"report save as:" <<report_name.toStdString().data();

    file_report.close();

    QString confusion_matrix_name = "confusion_matrix"+report_name;
    // qDebug() << confusion_matrix_name.toStdString().data();
    QFile file_CM (confusion_matrix_name);
    bool isOk_cm =file_CM.open(QIODevice::ReadWrite | QIODevice::Append);
    if (isOk_cm){
        QTextStream stream(&file_CM);
        for (int m = 0; m < OUTPUT_NEURONS; m++)
        {
            for (int n = 0; n < OUTPUT_NEURONS; n++)
            {
                stream<<confusion_matrix[m][n] <<",";
            }
            stream<< "\n";
        }

        qDebug() <<"confusion_matrix save as:" <<confusion_matrix_name.toStdString().data();

    }
    file_CM.close();

    ui->plainTextEdit_results->setPlainText(msg);
    qApp->processEvents();


}

/*read complete dataset file*/
void MainWindow::on_pushButton_Read_File_clicked()
{
    qDebug() << "\nReading file...";
     QFile file("complete_data_set.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    if(!file.exists()){
        patternsLoadedFromFile=false;
        qDebug() << "Data file does not exist!";
        return;
    }

    QTextStream in(&file);


    char t;
    char characterSymbol;
    QString line;

    int counterForLetterA=0;
    int counterForLetterB=0;
    int counterForLetterC=0;
    int counterForLetterD=0;
    int counterForLetterE=0;
    int counterForLetterF=0;
    int counterForLetterG=0;
    int counterForLetterH=0;
    int counterForLetterI=0;
    int counterForLetterJ=0;
    int counterForLetterK=0;
    int counterForLetterL=0;
    int counterForLetterM=0;
    int counterForLetterN=0;
    int counterForLetterO=0;
    int counterForLetterP=0;
    int counterForLetterQ=0;
    int counterForLetterR=0;
    int counterForLetterS=0;
    int counterForLetterT=0;
    int counterForLetterU=0;
    int counterForLetterV=0;
    int counterForLetterW=0;
    int counterForLetterX=0;
    int counterForLetterY=0;
    int counterForLetterZ=0;
    QString lineOfData;
    QString msg;
    int i=0;

    while(i < NUMBER_OF_PATTERNS){

        //e.g. T,2,8,3,5,1,8,13,0,6,6,10,8,0,8,0,8
        in >> characterSymbol >> t >> letters[i].f[0] >> t >>  letters[i].f[1] >> t >>  letters[i].f[2] >> t >>  letters[i].f[3] >> t >>  letters[i].f[4] >> t >>  letters[i].f[5] >> t >>  letters[i].f[6] >> t >>  letters[i].f[7] >> t >>  letters[i].f[8] >> t >>  letters[i].f[9] >> t >>  letters[i].f[10] >> t >>  letters[i].f[11] >> t >> letters[i].f[12] >> t >> letters[i].f[13] >> t >> letters[i].f[14] >> t >> letters[i].f[15];
//        for (int j = 0; j < 15; j++)
//        {
//            cout << letters[i].f[j] <<",";
//        }
//        cout <<endl;

        line = in.readLine();

        if(characterSymbol == 'A'){
            letters[i].symbol = LETTER_A;
            letters[i].outputs[LETTER_A] = 1;
            counterForLetterA++;

        } else if(characterSymbol == 'B'){
            letters[i].symbol = LETTER_B;
            letters[i].outputs[LETTER_B] = 1;
            counterForLetterB++;
        }
        else if(characterSymbol == 'C'){
            letters[i].symbol = LETTER_C;
            letters[i].outputs[LETTER_C] = 1;
            counterForLetterC++;
        }
         else if(characterSymbol == 'D'){
            letters[i].symbol = LETTER_D;
            letters[i].outputs[LETTER_D] = 1;
            counterForLetterD++;
        }
         else if(characterSymbol == 'E'){
            letters[i].symbol = LETTER_E;
            letters[i].outputs[LETTER_E] = 1;
            counterForLetterE++;
        }
         else if(characterSymbol == 'F'){
            letters[i].symbol = LETTER_F;
            letters[i].outputs[LETTER_F] = 1;
            counterForLetterF++;
        }
         else if(characterSymbol == 'G'){
            letters[i].symbol = LETTER_G;
            letters[i].outputs[LETTER_G] = 1;
            counterForLetterG++;
        }
         else if(characterSymbol == 'H'){
          letters[i].symbol = LETTER_H;
           letters[i].outputs[LETTER_H] = 1;
                     counterForLetterH++;
        }
        else if(characterSymbol == 'I'){
         letters[i].symbol = LETTER_I;
          letters[i].outputs[LETTER_I] = 1;
                    counterForLetterI++;
        }
         else if(characterSymbol == 'J'){
          letters[i].symbol = LETTER_J;
           letters[i].outputs[LETTER_J] = 1;
                     counterForLetterJ++;
        }
         else if(characterSymbol == 'K'){
          letters[i].symbol = LETTER_K;
           letters[i].outputs[LETTER_K] = 1;
                     counterForLetterK++;
        }
         else if(characterSymbol == 'L'){
          letters[i].symbol = LETTER_L;
           letters[i].outputs[LETTER_L] = 1;
                     counterForLetterL++;
        }

         else if(characterSymbol == 'M'){
          letters[i].symbol = LETTER_M;
           letters[i].outputs[LETTER_M] = 1;
                     counterForLetterM++;
        }
         else if(characterSymbol == 'N'){
          letters[i].symbol = LETTER_N;
           letters[i].outputs[LETTER_N] = 1;
                     counterForLetterN++;
        }
         else if(characterSymbol == 'O'){
          letters[i].symbol = LETTER_O;
           letters[i].outputs[LETTER_O] = 1;
                     counterForLetterO++;
        }
         else if(characterSymbol == 'P'){
          letters[i].symbol = LETTER_P;
           letters[i].outputs[LETTER_P] = 1;
                     counterForLetterP++;
        }
         else if(characterSymbol == 'Q'){
          letters[i].symbol = LETTER_Q;
           letters[i].outputs[LETTER_Q] = 1;
                     counterForLetterQ++;
        }
         else if(characterSymbol == 'R'){
          letters[i].symbol = LETTER_R;
           letters[i].outputs[LETTER_R] = 1;
                     counterForLetterR++;
        }
         else if(characterSymbol == 'S'){
          letters[i].symbol = LETTER_S;
           letters[i].outputs[LETTER_S] = 1;
                     counterForLetterS++;
        }
         else if(characterSymbol == 'T'){
          letters[i].symbol = LETTER_T;
           letters[i].outputs[LETTER_T] = 1;
                     counterForLetterT++;
        }
         else if(characterSymbol == 'U'){
          letters[i].symbol = LETTER_U;
           letters[i].outputs[LETTER_U] = 1;
                     counterForLetterU++;
        }
         else if(characterSymbol == 'V'){
          letters[i].symbol = LETTER_V;
           letters[i].outputs[LETTER_V] = 1;
                     counterForLetterV++;
        }
         else if(characterSymbol == 'W'){
          letters[i].symbol = LETTER_W;
           letters[i].outputs[LETTER_W] = 1;
                     counterForLetterW++;
        }
         else if(characterSymbol == 'X'){
          letters[i].symbol = LETTER_X;
           letters[i].outputs[LETTER_X] = 1;
                     counterForLetterX++;
        }
         else if(characterSymbol == 'Y'){
          letters[i].symbol = LETTER_Y;
           letters[i].outputs[LETTER_Y] = 1;
                     counterForLetterY++;
        }
         else if(characterSymbol == 'Z'){
          letters[i].symbol = LETTER_Z;
           letters[i].outputs[LETTER_Z] = 1;
                     counterForLetterZ++;
        }

        if( i == (NUMBER_OF_PATTERNS-1)) {
            msg.clear();
            lineOfData.clear();
            QTextStream(&lineOfData) << "number of patterns for Letter A = " << counterForLetterA << endl;


            show_letters_msg(&msg,&lineOfData,'B',counterForLetterB);
            show_letters_msg(&msg,&lineOfData,'C',counterForLetterC);
            show_letters_msg(&msg,&lineOfData,'D',counterForLetterD);
            show_letters_msg(&msg,&lineOfData,'E',counterForLetterE);
            show_letters_msg(&msg,&lineOfData,'F',counterForLetterF);
            show_letters_msg(&msg,&lineOfData,'G',counterForLetterG);
            show_letters_msg(&msg,&lineOfData,'H',counterForLetterH);
            show_letters_msg(&msg,&lineOfData,'I',counterForLetterI);
            show_letters_msg(&msg,&lineOfData,'J',counterForLetterJ);
            show_letters_msg(&msg,&lineOfData,'K',counterForLetterK);
            show_letters_msg(&msg,&lineOfData,'L',counterForLetterL);
            show_letters_msg(&msg,&lineOfData,'M',counterForLetterM);
            show_letters_msg(&msg,&lineOfData,'N',counterForLetterN);
            show_letters_msg(&msg,&lineOfData,'O',counterForLetterO);
            show_letters_msg(&msg,&lineOfData,'P',counterForLetterP);
            show_letters_msg(&msg,&lineOfData,'Q',counterForLetterQ);
            show_letters_msg(&msg,&lineOfData,'R',counterForLetterR);
            show_letters_msg(&msg,&lineOfData,'S',counterForLetterS);
            show_letters_msg(&msg,&lineOfData,'T',counterForLetterT);
            show_letters_msg(&msg,&lineOfData,'U',counterForLetterU);
            show_letters_msg(&msg,&lineOfData,'V',counterForLetterV);
            show_letters_msg(&msg,&lineOfData,'W',counterForLetterW);
            show_letters_msg(&msg,&lineOfData,'X',counterForLetterX);
            show_letters_msg(&msg,&lineOfData,'Y',counterForLetterY);
            show_letters_msg(&msg,&lineOfData,'Z',counterForLetterZ);

            msg.append(lineOfData);

            ui->plainTextEdit_results->setPlainText(msg);
            qApp->processEvents();
        }

        i++;
    }

    /*--------dataset shuffling--------*/
    cout<< "shuffling...."<<endl;

    std::srand ( unsigned ( std::time(0) ) );
    std::random_shuffle ( &letters[0], &letters[NUMBER_OF_PATTERNS] );

    cout <<"shuffle done~！"<<endl;
    msg.append("done.");
    /*--------dataset shuffling done--------*/

    ui->plainTextEdit_results->setPlainText(msg);
    qApp->processEvents();

    patternsLoadedFromFile=true;

}

void MainWindow::on_horizScrollBar_LearningRate_valueChanged(int value)
{
    ui->lcdNumber_LearningRate->setSegmentStyle(QLCDNumber::Filled);
    ui->lcdNumber_LearningRate->display(value/1000.0);
    LEARNING_RATE = value/1000.0;
}

void MainWindow::on_pushButton_Classify_Test_Pattern_clicked()
{

    char characterSymbol, t;
    QString *q;
    double* classificationResults;

    double* outputs;
    outputs = new double[OUTPUT_NEURONS];

    classificationResults = new double[OUTPUT_NEURONS];

    //QTextStream line;
    q = new QString(ui->plainTextEdit_Input_Pattern->toPlainText());

    QTextStream line(q);

    line >> characterSymbol >> t >> testPattern.f[0] >> t >>  testPattern.f[1] >> t >>  testPattern.f[2] >> t >>  testPattern.f[3] >> t >>  testPattern.f[4] >> t >>  testPattern.f[5] >> t >>  testPattern.f[6] >> t >>  testPattern.f[7] >> t >>  testPattern.f[8] >> t >>  testPattern.f[9] >> t >>  testPattern.f[10] >> t >>  testPattern.f[11] >> t >> testPattern.f[12] >> t >> testPattern.f[13] >> t >> testPattern.f[14] >> t >> testPattern.f[15];

    if(characterSymbol == 'A'){
        testPattern.symbol = LETTER_A;
        testPattern.outputs[LETTER_A] = 1;
    } else if(characterSymbol == 'B'){
        testPattern.symbol = LETTER_B;
         testPattern.outputs[LETTER_B] = 1;
    }
    else if(characterSymbol == 'C'){
    testPattern.symbol = LETTER_C;
     testPattern.outputs[LETTER_C] = 1;
    }
    else if(characterSymbol == 'D'){
    testPattern.symbol = LETTER_D;
     testPattern.outputs[LETTER_D] = 1;
    }
    else if(characterSymbol == 'E'){
    testPattern.symbol = LETTER_E;
     testPattern.outputs[LETTER_E] = 1;
    }
    else if(characterSymbol == 'F'){
    testPattern.symbol = LETTER_F;
     testPattern.outputs[LETTER_F] = 1;
    }
    else if(characterSymbol == 'G'){
    testPattern.symbol = LETTER_G;
     testPattern.outputs[LETTER_G] = 1;
    }
    else if(characterSymbol == 'H'){
    testPattern.symbol = LETTER_H;
     testPattern.outputs[LETTER_H] = 1;
    }
    else if(characterSymbol == 'I'){
    testPattern.symbol = LETTER_I;
     testPattern.outputs[LETTER_I] = 1;
    }
    else if(characterSymbol == 'J'){
    testPattern.symbol = LETTER_J;
     testPattern.outputs[LETTER_J] = 1;
    }
    else if(characterSymbol == 'K'){
    testPattern.symbol = LETTER_K;
     testPattern.outputs[LETTER_K] = 1;
    }
    else if(characterSymbol == 'L'){
    testPattern.symbol = LETTER_L;
     testPattern.outputs[LETTER_L] = 1;
    }
    else if(characterSymbol == 'M'){
    testPattern.symbol = LETTER_M;
     testPattern.outputs[LETTER_M] = 1;
    }
    else if(characterSymbol == 'N'){
    testPattern.symbol = LETTER_N;
     testPattern.outputs[LETTER_N] = 1;
    }
    else if(characterSymbol == 'O'){
    testPattern.symbol = LETTER_O;
     testPattern.outputs[LETTER_O] = 1;
    }
    else if(characterSymbol == 'P'){
    testPattern.symbol = LETTER_P;
     testPattern.outputs[LETTER_P] = 1;
    }
    else if(characterSymbol == 'Q'){
    testPattern.symbol = LETTER_Q;
     testPattern.outputs[LETTER_Q] = 1;
    }
    else if(characterSymbol == 'R'){
    testPattern.symbol = LETTER_R;
     testPattern.outputs[LETTER_R] = 1;
    }
    else if(characterSymbol == 'S'){
    testPattern.symbol = LETTER_S;
     testPattern.outputs[LETTER_S] = 1;
    }
    else if(characterSymbol == 'T'){
    testPattern.symbol = LETTER_T;
     testPattern.outputs[LETTER_T] = 1;
    }
    else if(characterSymbol == 'U'){
    testPattern.symbol = LETTER_U;
     testPattern.outputs[LETTER_U] = 1;
    }
    else if(characterSymbol == 'V'){
    testPattern.symbol = LETTER_V;
     testPattern.outputs[LETTER_V] = 1;
    }
    else if(characterSymbol == 'W'){
    testPattern.symbol = LETTER_W;
     testPattern.outputs[LETTER_W] = 1;
    }
    else if(characterSymbol == 'X'){
    testPattern.symbol = LETTER_X;
     testPattern.outputs[LETTER_X] = 1;
    }
    else if(characterSymbol == 'Y'){
    testPattern.symbol = LETTER_Y;
     testPattern.outputs[LETTER_Y] = 1;
    }
    else if(characterSymbol == 'Z'){
    testPattern.symbol = LETTER_Z;
     testPattern.outputs[LETTER_Z] = 1;
    }




    //---------------------------------
    double err;

    classificationResults = bp->testNetwork(testPattern,err);


    ui->lcdNumber_A->display(classificationResults[0]);
    ui->lcdNumber_B->display(classificationResults[1]);
    ui->lcdNumber_C->display(classificationResults[2]);
    ui->lcdNumber_D->display(classificationResults[3]);
    ui->lcdNumber_E->display(classificationResults[4]);
    ui->lcdNumber_F->display(classificationResults[5]);
    ui->lcdNumber_G->display(classificationResults[6]);
    ui->lcdNumber_H->display(classificationResults[7]);
    ui->lcdNumber_I->display(classificationResults[8]);
    ui->lcdNumber_J->display(classificationResults[9]);
    ui->lcdNumber_K->display(classificationResults[10]);
    ui->lcdNumber_L->display(classificationResults[11]);
    ui->lcdNumber_M->display(classificationResults[12]);
    ui->lcdNumber_N->display(classificationResults[13]);
    ui->lcdNumber_O->display(classificationResults[14]);
    ui->lcdNumber_P->display(classificationResults[15]);
    ui->lcdNumber_Q->display(classificationResults[16]);
    ui->lcdNumber_R->display(classificationResults[17]);
    ui->lcdNumber_S->display(classificationResults[18]);
    ui->lcdNumber_T->display(classificationResults[19]);
    ui->lcdNumber_U->display(classificationResults[20]);
    ui->lcdNumber_V->display(classificationResults[21]);
    ui->lcdNumber_W->display(classificationResults[22]);
    ui->lcdNumber_X->display(classificationResults[23]);
    ui->lcdNumber_Y->display(classificationResults[24]);
    ui->lcdNumber_Z->display(classificationResults[25]);

//    ui->lcdNumber_unknown->display(classificationResults[2]);


    //-----------------------------------------------------------
    cout <<"outputs:";
    for(int k=0; k < OUTPUT_NEURONS; k++){
       outputs[k] = testPattern.outputs[k];
    //    cout << outputs[k];
    }
    // cout <<endl;
    //-----------------------------------------------------------
     QString textClassification;
     switch(bp->action(outputs)){
        case 0:
            textClassification = "letter A";
            break;
        case 1:
            textClassification = "letter B";
            break;
        case 2:
            textClassification = "letter C";
            break;
        case 3:
            textClassification = "letter D";
            break;
        case 4:
            textClassification = "letter E";
            break;
        case 5:
            textClassification = "letter F";
            break;
        case 6:
            textClassification = "letter G";
            break;
        case 7:
            textClassification = "letter H";
            break;
        case 8:
            textClassification = "letter I";
            break;
        case 9:
            textClassification = "letter J";
            break;
        case 10:
            textClassification = "letter K";
            break;
        case 11:
            textClassification = "letter L";
            break;
        case 12:
            textClassification = "letter M";
            break;
        case 13:
            textClassification = "letter N";
            break;
        case 14:
            textClassification = "letter O";
            break;
        case 15:
            textClassification = "letter P";
            break;
        case 16:
            textClassification = "letter Q";
            break;
        case 17:
            textClassification = "letter R";
            break;
        case 18:
            textClassification = "letter S";
            break;
        case 19:
            textClassification = "letter T";
            break;
        case 20:
            textClassification = "letter U";
            break;
        case 21:
            textClassification = "letter V";
            break;
        case 22:
            textClassification = "letter W";
            break;
        case 23:
            textClassification = "letter X";
            break;
        case 24:
            textClassification = "letter Y";
            break;
        case 25:
            textClassification = "letter Z";
            break;

        case 26:
            textClassification = "unknown";
            break;
     };
    cout <<"y_predict:"<< bp->action(classificationResults) <<" --  y:"<< bp->action(outputs) <<endl;
    // cout << "classificationResults:" <<classificationResults<<  endl;
    if (bp->action(classificationResults) == bp->action(outputs)) {
        qDebug() << "correct classification.";
        ui->label_Classification->setText(textClassification + ", - Correct classification!");
    } else {
        qDebug() << "incorrect classification.";
        cout <<"typeof:" <<typeid( bp->action(classificationResults)).name()<<endl;
        // ui->label_Classification->setText(textClassification + ", -"+ (string)(bp->action(classificationResults))  +" - Incorrect classification.");
        ui->label_Classification->setText(textClassification + ", -" +QString::number(bp->action(classificationResults))  +" - Incorrect classification.");
    }

}

void MainWindow::on_pushButton_Train_Network_Max_Epochs_clicked()
{
    double SSE = 0.0;
    QString msg;

    if(!patternsLoadedFromFile) {
        msg.clear();
        msg.append("\nMissing training patterns.  Load data set first.\n");
        ui->plainTextEdit_results->setPlainText(msg);
        return;
    }

    MAX_EPOCHS = ui->spinBox_training_Epochs->value();
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
    int e=0;
    
    for(int i=0; i < MAX_EPOCHS; i++){
      msg.clear();
      msg.append("\nTraining in progress...\n");

      SSE = bp->trainNetwork(); //trains for 1 epoch
      ui->lcdNumber_SSE->display(SSE);
      
      cout <<"SSE:"<<SSE<< "; MSE: " <<SSE/NUMBER_OF_TRAINING_PATTERNS << endl;

      ui->lcdNumber_percentageOfGoodClassification->display((1-SSE/NUMBER_OF_TRAINING_PATTERNS)*100);
      qApp->processEvents();
      //to save as reoport

QString report_name="report_activefun"+QString::number(Activate_fun)
                            +"_epoch"+QString::number(MAX_EPOCHS)
                            + "_lr"+QString::number(LEARNING_RATE)
                            +".txt";
    qDebug() << report_name.toStdString().data();



      QFile file (report_name);
      bool isOk =file.open(QIODevice::ReadWrite | QIODevice::Append);
      if (isOk){
           QTextStream stream(&file);
           stream<<"epoch:"<<(i) <<"; SSE:"<<(SSE)<< "; MSE: " <<(SSE/NUMBER_OF_TRAINING_PATTERNS) << "\n";
        }
        file.close();

      update();
      e++;
//      qDebug() << "epoch: " << e << ", SSE = " << SSE;
      msg.append("\nEpoch=");
      msg.append(QString::number(e));
      ui->plainTextEdit_results->setPlainText(msg);

      if((i > 0) && ((i % 100) == 0)) {
         bp->saveWeights("./weights/"+ui->plainTextEdit_saveWeightsAs->toPlainText());

         ui->plainTextEdit_results->setPlainText("Weights saved into file.");
         qApp->processEvents();
      }

    }
    QApplication::restoreOverrideCursor();

}

void MainWindow::on_pushButton_Initialise_Network_clicked()
{
    bp->initialise();
}

void MainWindow::on_pushButton_Test_All_Patterns_clicked()
{

    char characterSymbol;
    Symbol symbol_test;
    double* classificationResults;
    double* outputs;
    int correctClassifications=0;
    
    classificationResults = new double[OUTPUT_NEURONS];
    outputs = new double[OUTPUT_NEURONS];

//    vector< vector<double>> confusion_matrix;
    vector<vector <int> > confusion_matrix(OUTPUT_NEURONS ,vector<int>(OUTPUT_NEURONS,0));
    double accumulatedErr;
    for(int i=NUMBER_OF_TRAINING_PATTERNS; i < NUMBER_OF_PATTERNS; i++){

        symbol_test = letters[i].symbol;
        for (int k = 0; k < OUTPUT_NEURONS; k++)
        {
            testPattern.outputs[k]=0;
        }

        for(int j=0; j < INPUT_NEURONS; j++){
            testPattern.f[j] = letters[i].f[j];
            // cout <<letters[i].f[j];
        }
        // cout <<endl;

        //This part could be implemented more concisely
        if(symbol_test == LETTER_A){
            testPattern.symbol = LETTER_A;
            testPattern.outputs[0] = 1;
        }
        else if(symbol_test == LETTER_B){
            testPattern.symbol = LETTER_B;
            testPattern.outputs[1] = 1;
        }
        else if(symbol_test == LETTER_C){
        testPattern.symbol = LETTER_C;
        testPattern.outputs[2] = 1;
        }
        else if(symbol_test == LETTER_D){
        testPattern.symbol = LETTER_D;
        testPattern.outputs[3] = 1;
        }
        else if(symbol_test == LETTER_E){
        testPattern.symbol = LETTER_E;
        testPattern.outputs[4] = 1;
        }
        else if(symbol_test == LETTER_F){
        testPattern.symbol = LETTER_F;
        testPattern.outputs[5] = 1;
        }
        else if(symbol_test == LETTER_G){
        testPattern.symbol = LETTER_G;
        testPattern.outputs[6] = 1;
        }
        else if(symbol_test == LETTER_H){
        testPattern.symbol = LETTER_H;
        testPattern.outputs[7] = 1;
        }
        else if(symbol_test == LETTER_I){
        testPattern.symbol = LETTER_I;
        testPattern.outputs[8] = 1;
        }
        else if(symbol_test == LETTER_J){
        testPattern.symbol = LETTER_J;
        testPattern.outputs[9] = 1;
        }
        else if(symbol_test == LETTER_K){
        testPattern.symbol = LETTER_K;
        testPattern.outputs[10] = 1;
        }
        else if(symbol_test == LETTER_L){
        testPattern.symbol = LETTER_L;
        testPattern.outputs[11] = 1;
        }
        else if(symbol_test == LETTER_M){
        testPattern.symbol = LETTER_M;
        testPattern.outputs[12] = 1;
        }
        else if(symbol_test == LETTER_N){
        testPattern.symbol = LETTER_N;
        testPattern.outputs[13] = 1;
        }
        else if(symbol_test == LETTER_O){
        testPattern.symbol = LETTER_O;
        testPattern.outputs[14] = 1;
        }
        else if(symbol_test == LETTER_P){
        testPattern.symbol = LETTER_P;
        testPattern.outputs[15] = 1;
        }
        else if(symbol_test == LETTER_Q){
        testPattern.symbol = LETTER_Q;
        testPattern.outputs[16] = 1;
        }
        else if(symbol_test == LETTER_R){
        testPattern.symbol = LETTER_R;
        testPattern.outputs[17] = 1;
        }
        else if(symbol_test == LETTER_S){
        testPattern.symbol = LETTER_S;
        testPattern.outputs[18] = 1;
        }
        else if(symbol_test == LETTER_T){
        testPattern.symbol = LETTER_T;
        testPattern.outputs[19] = 1;
        }
        else if(symbol_test == LETTER_U){
        testPattern.symbol = LETTER_U;
        testPattern.outputs[20] = 1;
        }
        else if(symbol_test == LETTER_V){
        testPattern.symbol = LETTER_V;
        testPattern.outputs[21] = 1;
        }
        else if(symbol_test == LETTER_W){
        testPattern.symbol = LETTER_W;
        testPattern.outputs[22] = 1;
        }
        else if(symbol_test == LETTER_X){
        testPattern.symbol = LETTER_X;
        testPattern.outputs[23] = 1;
        }
        else if(symbol_test == LETTER_Y){
        testPattern.symbol = LETTER_Y;
        testPattern.outputs[24] = 1;
        }
        else if(symbol_test == LETTER_Z){
        testPattern.symbol = LETTER_Z;
        testPattern.outputs[25] = 1;
        }
            //  else {
            //     testPattern.symbol = UNKNOWN;
            //     testPattern.outputs[0] = 0;
            //     testPattern.outputs[1] = 0;
            //     testPattern.outputs[2] = 1;
            // }

            //---------------------------------
        double err;
        classificationResults = bp->testNetwork(testPattern,err);
        accumulatedErr = accumulatedErr + err;

        for(int k=0; k < OUTPUT_NEURONS; k++){
            outputs[k] = testPattern.outputs[k];
        //    cout <<outputs[k];
        }
        // cout<<bp->action(classificationResults) <<"--"<<bp->action(outputs) <<endl;
        confusion_matrix[bp->action(outputs)][bp->action(classificationResults)]++;   
        // for (int i = 0; i < OUTPUT_NEURONS; i++)
        // {
        //     for (int j = 0; j < OUTPUT_NEURONS; j++)
        //     {
               
        //         // confusion_matrix[20][22]++;
        //         // cout <<"0" <<" ";
        //     }
        //     //   cout << endl;
        // }

        if (bp->action(classificationResults) == bp->action(outputs)) {
            // cout<<bp->action(classificationResults) <<"--"<<bp->action(outputs) <<endl;
                correctClassifications++;
        }
        
    }

    cout <<"confusion_matrix"<< endl;
    for (int m = 0; m < OUTPUT_NEURONS; m++)
    {
        for (int n = 0; n < OUTPUT_NEURONS; n++)
        {
            cout <<confusion_matrix[m][n] <<",";
        }
        cout << endl;
    }

    ui->lcdNumber_percentageOfGoodClassification->display(((float)correctClassifications/NUMBER_OF_TEST_PATTERNS) *100);

      qDebug() << "TEST SET: correctClassifications = " << correctClassifications<<
      " PGC: "<< ((float)correctClassifications/NUMBER_OF_TEST_PATTERNS) *100<<
      " MSE: "<< accumulatedErr/NUMBER_OF_TEST_PATTERNS;

      QString msg;

      msg.clear();
    //   QTextStream(&msg) << "Useless button~! " << endl;


      ui->plainTextEdit_results->setPlainText(msg);
      qApp->processEvents();

}

void MainWindow::on_pushButton_Save_Weights_clicked()
{
    bp->saveWeights(ui->plainTextEdit_saveWeightsAs->toPlainText());

    QString msg;
    QString lineOfText;

    lineOfText = "weights saved to file: " + ui->plainTextEdit_saveWeightsAs->toPlainText();

    msg.append(lineOfText);

    ui->plainTextEdit_results->setPlainText(msg);

}

void MainWindow::on_pushButton_Load_Weights_clicked()
{
   bp->loadWeights(ui->plainTextEdit_fileNameLoadWeights->toPlainText());
//   qDebug() << ui->plainTextEdit_fileNameLoadWeights->toPlainText();
//   qDebug() <<"QApplication::applicationDirPath():" <<QApplication::applicationDirPath();
   QString msg;

   msg.append("weights loaded.\n");

   ui->plainTextEdit_results->setPlainText(msg);


}

void MainWindow::on_pushButton_testNetOnTrainingSet_clicked()
{
    char characterSymbol;
    Symbol symbol_test;

    double* classificationResults;
    double* outputs;
    int correctClassifications=0;

    classificationResults = new double[OUTPUT_NEURONS];
    outputs = new double[OUTPUT_NEURONS];
    double accumulatedErr;

    for(int i=0; i < NUMBER_OF_TRAINING_PATTERNS; i++){

            symbol_test = letters[i].symbol;
            for (int k = 0; k < OUTPUT_NEURONS; k++)
            {
                testPattern.outputs[k]=0;
            }
            for(int j=0; j < INPUT_NEURONS; j++){
                testPattern.f[j] = letters[i].f[j];
            }

            //This part could be implemented more concisely

             if(symbol_test == LETTER_A){
                testPattern.symbol = LETTER_A;
                testPattern.outputs[0] = 1;
            }
            else if(symbol_test == LETTER_B){
                testPattern.symbol = LETTER_B;
                testPattern.outputs[1] = 1;
            }
            else if(symbol_test == LETTER_C){
            testPattern.symbol = LETTER_C;
            testPattern.outputs[2] = 1;
            }
            else if(symbol_test == LETTER_D){
            testPattern.symbol = LETTER_D;
            testPattern.outputs[3] = 1;
            }
            else if(symbol_test == LETTER_E){
            testPattern.symbol = LETTER_E;
            testPattern.outputs[4] = 1;
            }
            else if(symbol_test == LETTER_F){
            testPattern.symbol = LETTER_F;
            testPattern.outputs[5] = 1;
            }
            else if(symbol_test == LETTER_G){
            testPattern.symbol = LETTER_G;
            testPattern.outputs[6] = 1;
            }
            else if(symbol_test == LETTER_H){
            testPattern.symbol = LETTER_H;
            testPattern.outputs[7] = 1;
            }
            else if(symbol_test == LETTER_I){
            testPattern.symbol = LETTER_I;
            testPattern.outputs[8] = 1;
            }
            else if(symbol_test == LETTER_J){
            testPattern.symbol = LETTER_J;
            testPattern.outputs[9] = 1;
            }
            else if(symbol_test == LETTER_K){
            testPattern.symbol = LETTER_K;
            testPattern.outputs[10] = 1;
            }
            else if(symbol_test == LETTER_L){
            testPattern.symbol = LETTER_L;
            testPattern.outputs[11] = 1;
            }
            else if(symbol_test == LETTER_M){
            testPattern.symbol = LETTER_M;
            testPattern.outputs[12] = 1;
            }
            else if(symbol_test == LETTER_N){
            testPattern.symbol = LETTER_N;
            testPattern.outputs[13] = 1;
            }
            else if(symbol_test == LETTER_O){
            testPattern.symbol = LETTER_O;
            testPattern.outputs[14] = 1;
            }
            else if(symbol_test == LETTER_P){
            testPattern.symbol = LETTER_P;
            testPattern.outputs[15] = 1;
            }
            else if(symbol_test == LETTER_Q){
            testPattern.symbol = LETTER_Q;
            testPattern.outputs[16] = 1;
            }
            else if(symbol_test == LETTER_R){
            testPattern.symbol = LETTER_R;
            testPattern.outputs[17] = 1;
            }
            else if(symbol_test == LETTER_S){
            testPattern.symbol = LETTER_S;
            testPattern.outputs[18] = 1;
            }
            else if(symbol_test == LETTER_T){
            testPattern.symbol = LETTER_T;
            testPattern.outputs[19] = 1;
            }
            else if(symbol_test == LETTER_U){
            testPattern.symbol = LETTER_U;
            testPattern.outputs[20] = 1;
            }
            else if(symbol_test == LETTER_V){
            testPattern.symbol = LETTER_V;
            testPattern.outputs[21] = 1;
            }
            else if(symbol_test == LETTER_W){
            testPattern.symbol = LETTER_W;
            testPattern.outputs[22] = 1;
            }
            else if(symbol_test == LETTER_X){
            testPattern.symbol = LETTER_X;
            testPattern.outputs[23] = 1;
            }
            else if(symbol_test == LETTER_Y){
            testPattern.symbol = LETTER_Y;
            testPattern.outputs[24] = 1;
            }
            else if(symbol_test == LETTER_Z){
            testPattern.symbol = LETTER_Z;
            testPattern.outputs[25] = 1;
            }

            //---------------------------------
             double err;

            classificationResults = bp->testNetwork(testPattern,err);
            accumulatedErr = accumulatedErr + err;

            for(int k=0; k < OUTPUT_NEURONS; k++){
               outputs[k] = testPattern.outputs[k];
            }

            if (bp->action(classificationResults) == bp->action(outputs)) {
                 correctClassifications++;
            }

     }
    ui->lcdNumber_percentageOfGoodClassification->display(((float)correctClassifications/NUMBER_OF_TRAINING_PATTERNS) *100);

     qDebug() << "TRAINING SET: correctClassifications = " << correctClassifications<<
     " PGC: "<<  ((float)correctClassifications/NUMBER_OF_TRAINING_PATTERNS) *100<<
      " MSE: "<< accumulatedErr/NUMBER_OF_TRAINING_PATTERNS;
     QString msg;

     msg.clear();
     QTextStream(&msg) << "TRAINING SET: correctClassifications = " << correctClassifications << endl;


     ui->plainTextEdit_results->setPlainText(msg);
     qApp->processEvents();
}

void MainWindow::on_horizScrollBar_LearningRate_actionTriggered(int action)
{
   if(action == 0){

   }
}



/*----------------------------------*/
void set_letters(){

}

void MainWindow:: show_letters_msg(QString *msg,QString *lineOfData, char characterSymbol, int counterForLetterB){
    msg->append(lineOfData);
    lineOfData->clear();
    QTextStream(lineOfData) << "number of patterns for Letter "<<characterSymbol <<" = "  << counterForLetterB << endl;
}

void MainWindow::on_comboBox_activate_currentIndexChanged(int index)
{
    Activate_fun = index;
    qDebug() << "activate_funciton:" << Activate_fun;


}


