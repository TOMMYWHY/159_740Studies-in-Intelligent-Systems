#ifndef BACKPROPAGATION_H
#define BACKPROPAGATION_H


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include <QDebug>

//-----------------------
//file manipulation
#include <QFile>
#include <QTextStream>
#include <QDataStream>
//-----------------------

#include "globalVariables.h"

using namespace std;

class Backpropagation
{
public:
    Backpropagation();
    void initialise();
    void saveWeights(QString fileName);
    void loadWeights(QString fileName);
    void feedForward( );
    void backPropagate();
    double sigmoid( double val );
    double sigmoidDerivative( double val );
    double ReLU( double val );
    double ReLUDerivative( double val );
    double Tanh( double val );
    double TanhDerivative( double val );
    void softmax();
    double* softmaxDerivative();
    void assignRandomWeights( void );
    double trainNetwork();
    double getError_SSE();
    int action( double *vector );
    double* testNetwork(LetterStructure testPattern,double &err);
    double RAND_WEIGHT();

private:

    /* Weight Structures */

    /* Input to Hidden Weights (with Biases) */
    double wih[INPUT_NEURONS+1][HIDDEN_NEURONS];

    double whh_2[HIDDEN_NEURONS+1][HIDDEN_NEURONS_2];

    /* Hidden to Output Weights (with Biases) */
    double who[HIDDEN_NEURONS_2+1][OUTPUT_NEURONS];
    // double wh_2o[HIDDEN_NEURONS_2+1][OUTPUT_NEURONS];

    /* Activations */
    double inputs[INPUT_NEURONS];//16
    double hidden[HIDDEN_NEURONS]; //64
    double hidden_2[HIDDEN_NEURONS_2]; //128
    double target[OUTPUT_NEURONS];//output
    double actual[OUTPUT_NEURONS];//label

    /* Unit Errors */
    double erro[OUTPUT_NEURONS];
    double errh[HIDDEN_NEURONS];

    double errh_2[HIDDEN_NEURONS_2];

    //-----------------------------------------
    double SSE;
    int i, sample, iterations;
    int sum;
};

#endif // BACKPROPAGATION_H
