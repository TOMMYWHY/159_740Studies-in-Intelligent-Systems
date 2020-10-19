#include "backpropagation.h"


#define sqr(x)	((x) * (x))

#define getSRand()	((float)rand() / (float)RAND_MAX)
#define getRand(x)      (int)((float)(x)*rand()/(RAND_MAX+1.0))


///////////////////////////////////////////////////////////////////

double Backpropagation::RAND_WEIGHT(){

    return ( (static_cast<double>(rand()) / static_cast<double>(RAND_MAX) - 0.5) );
}

Backpropagation::Backpropagation()
{
   initialise();
}

void Backpropagation::initialise()
{
    SSE = 0;
    sample=0;
    iterations=0;
    sum = 0;

    /* Seed the random number generator */
    srand(static_cast<unsigned int>(123) );

    assignRandomWeights();
}

double Backpropagation::getError_SSE(){
    return SSE;
}



void Backpropagation::saveWeights(QString fileName){
    int out, hid,hid_2, inp;

    QFile file3(fileName);
    file3.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream out3(&file3);

    char tempBuffer3[80];
    QByteArray temp3;

    //----------------------------------------------
    // weights
    //
    qDebug() << "updating weights...";
    qDebug() << "OUTPUT_NEURONS = " << OUTPUT_NEURONS;
    qDebug() << "HIDDEN_NEURONS_2 = " << HIDDEN_NEURONS_2;
    qDebug() << "HIDDEN_NEURONS = " << HIDDEN_NEURONS;
    qDebug() << "INPUT_NEURONS = " << INPUT_NEURONS;

    // Update the weights for the output layer (step 4 for output cell)
    for (out = 0 ; out < OUTPUT_NEURONS ; out++) {
      temp3.clear();
      for (hid_2 = 0 ; hid_2 < HIDDEN_NEURONS_2 ; hid_2++) {
          //---save------------------------------------
            ::sprintf(tempBuffer3,"%f,",who[hid_2][out]);
            qDebug() << tempBuffer3;
            temp3.append(tempBuffer3);
          //---------------------------------------
      }
      // Update the Bias
      //---save------------------------------------
        ::sprintf(tempBuffer3,"%f",who[HIDDEN_NEURONS_2][out]);
        temp3.append(tempBuffer3);
        temp3.append("\n");
        qDebug() << tempBuffer3 << endl;
        out3 << temp3;
      //---------------------------------------

    }

    // Update the weights for the hidden2 layer (step 4 for hidden cell)
    for (hid_2 = 0 ; hid_2 < HIDDEN_NEURONS_2 ; hid_2++) {
        temp3.clear();
        for (hid = 0 ; hid < HIDDEN_NEURONS ; hid++) {

          //---save------------------------------------
            ::sprintf(tempBuffer3,"%f,",whh_2[hid][hid_2]);
            temp3.append(tempBuffer3);
            qDebug() << tempBuffer3;
          //---------------------------------------
        }

        // Update the Bias
        //---save------------------------------------
          ::sprintf(tempBuffer3,"%f",whh_2[INPUT_NEURONS][hid_2]);
          temp3.append(tempBuffer3);
          temp3.append("\n");
          qDebug() << tempBuffer3 << endl;
          out3 << temp3;
        //---------------------------------------

      }


    // Update the weights for the hidden layer (step 4 for hidden cell)
    for (hid = 0 ; hid < HIDDEN_NEURONS ; hid++) {
      temp3.clear();
      for (inp = 0 ; inp < INPUT_NEURONS ; inp++) {

        //---save------------------------------------
          ::sprintf(tempBuffer3,"%f,",wih[inp][hid]);
          temp3.append(tempBuffer3);
          qDebug() << tempBuffer3;
        //---------------------------------------
      }

      // Update the Bias
      //---save------------------------------------
        ::sprintf(tempBuffer3,"%f",wih[INPUT_NEURONS][hid]);
        temp3.append(tempBuffer3);
        temp3.append("\n");
        qDebug() << tempBuffer3 << endl;
        out3 << temp3;
      //---------------------------------------

    }
    //----------------------------------------------
    file3.close();
    qDebug() << "Weights saved to file.";
}


void Backpropagation::loadWeights(QString fileName){
    int out, hid,hid_2, inp;
     qDebug() <<fileName;
    QFile file3(fileName);
    file3.open(QIODevice::ReadOnly | QIODevice::Text);

    if(!file3.exists()){
        qDebug() << "Backpropagation::loadWeights-file does not exist!";
        return;
    }

    QTextStream in(&file3);

    char tChar;
    QByteArray temp3;

    //----------------------------------------------
    // weights
    //

    QString strLine;

    qDebug() << "loading weights...";
    qDebug() << "OUTPUT_NEURONS = " << OUTPUT_NEURONS;
    qDebug() << "HIDDEN_NEURONS_2 = " << HIDDEN_NEURONS_2;
    qDebug() << "HIDDEN_NEURONS = " << HIDDEN_NEURONS;
    qDebug() << "INPUT_NEURONS = " << INPUT_NEURONS;

    qDebug() << fixed << qSetRealNumberPrecision(12);

    // Update the weights for the output layer (step 4 for output cell)
    for (out = 0 ; out < OUTPUT_NEURONS ; out++) {
      strLine = in.readLine();
      QTextStream streamLine(&strLine);

      streamLine.setRealNumberPrecision(12);
      qDebug() << "strLine = " << strLine << endl;
      for (hid_2 = 0 ; hid_2 <= HIDDEN_NEURONS_2 ; hid_2++) {
          //---load------------------------------------

            if(hid_2 != HIDDEN_NEURONS_2){
               streamLine >> who[hid_2][out] >> tChar;
               qDebug() << who[hid_2][out];
            } else {
               streamLine >> who[hid_2][out];
               qDebug() << who[hid_2][out];
            }
          //---------------------------------------
      }

    }
    // Update the weights for the hidden2 layer (step 4 for hidden cell)
    for (hid_2 = 0 ; hid_2 < HIDDEN_NEURONS_2 ; hid_2++) {
      // strLine = in.readLine();
      // QTextStream streamLine(&strLine);

      // streamLine.setRealNumberPrecision(12);
      // qDebug() << "strLine = " << strLine << endl;
      for (hid = 0 ; hid <= HIDDEN_NEURONS ; hid++) {
          //---load------------------------------------

            if(hid != HIDDEN_NEURONS){
              //  streamLine >> whh_2[hid][hid_2] >> tChar;
               in >> whh_2[hid][hid_2] >> tChar;
               qDebug() << whh_2[hid][hid_2];
            } else {
              //  streamLine >> whh_2[hid][hid_2];
               in >> whh_2[hid][hid_2];
               qDebug() << whh_2[hid][hid_2];
            }
          //---------------------------------------
      }

    }
    // Update the weights for the hidden layer (step 4 for hidden cell)
    for (hid = 0 ; hid < HIDDEN_NEURONS ; hid++) {
      for (inp = 0 ; inp < INPUT_NEURONS ; inp++) {

        //---load------------------------------------
          if(hid != INPUT_NEURONS-1){
             in >> wih[inp][hid] >> tChar;
             qDebug() << wih[inp][hid] ;
          } else {
             in >> wih[inp][hid];
             qDebug() << wih[inp][hid];
          }
        //---------------------------------------
      }

      // Update the Bias
      //---load------------------------------------
        in >> wih[INPUT_NEURONS][hid] >> tChar;
        qDebug() << wih[INPUT_NEURONS][hid] << endl;
      //---------------------------------------

    }

    //----------------------------------------------
    file3.close();
    qDebug() << "Weights loaded.";
}


int Backpropagation::action( double *vector )
{
  int index, sel;
  double max;

  sel = 0;
  max = vector[sel];

  for (index = 1 ; index < OUTPUT_NEURONS ; index++) {
    if (vector[index] > max) {
      max = vector[index]; sel = index;
    }
  }

  return( sel );
}

double* Backpropagation::testNetwork(LetterStructure testPattern){
    //retrieve input patterns
    for(int j=0; j < INPUT_NEURONS; j++){
       inputs[j] = testPattern.f[j];
    }

    for(int i=0; i < OUTPUT_NEURONS; i++){
        target[i] = testPattern.outputs[i];
    }

    feedForward();


    return actual;


}

double Backpropagation::trainNetwork()
{
    double err;
    if(!patternsLoadedFromFile) {
        qDebug() << "unable to train network, no training patterns loaded.";
        return -999.99;
    }
    double accumulatedErr=0.0;

    err = 0.0;

    sample=0;
    while (1) {
        //retrieve input patterns
        for(int j=0; j < INPUT_NEURONS; j++){
           inputs[j] = letters[sample].f[j];//features
          //  cout <<"inputs[j]"<<inputs[j] <<endl;
        }

        for(int i=0; i < OUTPUT_NEURONS; i++){
            target[i] = letters[sample].outputs[i];//0-25 one hot code
            //  cout <<"target[i]"<<target[i] <<endl;
        }

        feedForward();

        /* need to iterate through all ... */
        err = 0.0;
        for (int k = 0 ; k < OUTPUT_NEURONS ; k++) {

          err += sqr( (letters[sample].outputs[k] - actual[k]) );
        }

        err = 0.5 * err;

        accumulatedErr = accumulatedErr + err;

        backPropagate();

        if (++sample == NUMBER_OF_TRAINING_PATTERNS) {
            qDebug() << "training used " << sample << " example patterns."  << endl;
            break;
        }

      }
      qDebug() << "1 epoch training complete.";
      return accumulatedErr;
}


/*
 *  assignRandomWeights()
 *
 *  Assign a set of random weights to the network.
 *
 */

void Backpropagation::assignRandomWeights( void )
{
  int hid, hid_2, inp, out;

  for (inp = 0 ; inp < INPUT_NEURONS+1 ; inp++) {
    for (hid = 0 ; hid < HIDDEN_NEURONS ; hid++) {
      wih[inp][hid] = RAND_WEIGHT();
    }
  }

  for (hid = 0 ; hid < HIDDEN_NEURONS+1 ; hid++) {
    for (hid_2 = 0 ; hid_2 < HIDDEN_NEURONS_2 ; hid_2++) {
      whh_2[hid][hid_2] = RAND_WEIGHT();
    }
  }


  for (hid_2 = 0 ; hid_2 < HIDDEN_NEURONS_2+1 ; hid_2++) {
    for (out = 0 ; out < OUTPUT_NEURONS ; out++) {
      who[hid][out] = RAND_WEIGHT();
    }
  }

}


/*
 *  sigmoid()
 *
 *  Calculate and return the sigmoid of the val argument.
 *
 */

double Backpropagation::sigmoid( double val )
{
  return (1.0 / (1.0 + exp(-val)));
}


/*
 *  sigmoidDerivative()
 *
 *  Calculate and return the derivative of the sigmoid for the val argument.
 *
 */

double Backpropagation::sigmoidDerivative( double val )
{
  return ( val * (1.0 - val) );
}


/*
 *  feedForward()
 *
 *  Feedforward the inputs of the neural network to the outputs.
 *
 */

void Backpropagation::feedForward( )
{
  int inp, hid,hid_2, out;
  double sum;
  /* Calculate input to hidden layer */
  for (hid = 0 ; hid < HIDDEN_NEURONS ; hid++) {

    sum = 0.0;
    for (inp = 0 ; inp < INPUT_NEURONS ; inp++) {
      sum += inputs[inp] * wih[inp][hid];
      // cout <<"wih[inp][hid]:"<<wih[inp][hid]<<endl;
    }

    /* Add in Bias */
    sum += wih[INPUT_NEURONS][hid];
      // cout <<"wih[INPUT_NEURONS][hid]:"<<wih[INPUT_NEURONS][hid]<<endl;

    hidden[hid] = sigmoid( sum );

  }
//todo hidden2
  for(hid_2=0;hid_2 < HIDDEN_NEURONS_2;hid_2++){
    sum = 0.0;
    for (hid = 0; hid < HIDDEN_NEURONS; hid++)
    {
      sum += hidden[hid] * whh_2[hid][hid_2];
    }
    sum += whh_2[HIDDEN_NEURONS][hid_2];
    hidden_2[hid_2] = sigmoid( sum );
  }

  /* Calculate the hidden to output layer */
  for (out = 0 ; out < OUTPUT_NEURONS ; out++) {

    sum = 0.0;
    for (hid_2 = 0 ; hid_2 < HIDDEN_NEURONS_2 ; hid_2++) {
      sum += hidden_2[hid_2] * who[hid_2][out];
    }

    /* Add in Bias */
    sum += who[HIDDEN_NEURONS_2][out];

    actual[out] = sigmoid( sum );

  }


}


/*
 *  backPropagate()
 *
 *  Backpropagate the error through the network.
 *
 */

void Backpropagation::backPropagate( void )
{

  int inp, hid,hid_2, out;

  /* Calculate the output layer error (step 3 for output cell) */
  for (out = 0 ; out < OUTPUT_NEURONS ; out++) {
    erro[out] = (target[out] - actual[out]) * sigmoidDerivative( actual[out] );

  }
  /*  the hidden_2 layer  */
  for (hid_2 = 0 ; hid_2 < HIDDEN_NEURONS_2 ; hid_2++) {

    errh_2[hid_2] = 0.0;
    for (out = 0 ; out < OUTPUT_NEURONS ; out++) {
      errh_2[hid_2] += erro[out] * who[hid_2][out];
    }

    errh_2[hid_2] *= sigmoidDerivative( hidden_2[hid_2] );

  }

  /* Calculate the hidden layer error (step 3 for hidden cell) */
  for (hid = 0 ; hid < HIDDEN_NEURONS ; hid++) {

    errh[hid] = 0.0;
    for (hid_2 = 0 ; hid_2 < HIDDEN_NEURONS_2 ; hid_2++) {
      errh[hid] += errh_2[hid_2] * whh_2[hid][hid_2];
    }

    errh[hid] *= sigmoidDerivative( hidden[hid] );

  }

/*========updating===========*/

  /* Update the weights for the output layer (step 4 for output cell) */
  for (out = 0 ; out < OUTPUT_NEURONS ; out++) {

    for (hid_2 = 0 ; hid_2 < HIDDEN_NEURONS_2 ; hid_2++) {
      who[hid_2][out] += (LEARNING_RATE * erro[out] * hidden_2[hid_2]);
    }
    /* Update the Bias */
    who[HIDDEN_NEURONS_2][out] += (LEARNING_RATE * erro[out]);

  }
  
  for (hid_2 = 0 ; hid_2 < HIDDEN_NEURONS_2 ; hid_2++) {

    for (hid = 0 ; hid < HIDDEN_NEURONS ; hid++) {
      whh_2[hid][hid_2] += (LEARNING_RATE * errh_2[hid_2] * hidden[hid]);
    }

    /* Update the Bias */
    whh_2[HIDDEN_NEURONS][hid_2] += (LEARNING_RATE * errh_2[hid_2]);

  }

  /* Update the weights for the hidden layer (step 4 for hidden cell) */
  for (hid = 0 ; hid < HIDDEN_NEURONS ; hid++) {

    for (inp = 0 ; inp < INPUT_NEURONS ; inp++) {
      wih[inp][hid] += (LEARNING_RATE * errh[hid] * inputs[inp]);
    }
    /* Update the Bias */
    wih[INPUT_NEURONS][hid] += (LEARNING_RATE * errh[hid]);

  }

}
