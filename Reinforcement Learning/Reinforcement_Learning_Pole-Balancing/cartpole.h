
#ifndef __CARTPOLE_H__
#define __CARTPOLE_H__


#include <math.h>
/*---------------------------------------------------------------------- 
cart_pole: Takes an action (0 or 1) and the current values of the four 
state variables and updates their values by estimating the state TAU seconds later.
----------------------------------------------------------------------*/

/*** Parameters for simulation ***/

#define GRAVITY 9.8
#define MASSCART 1.0
#define MASSPOLE 0.1
#define TOTAL_MASS (MASSPOLE + MASSCART)
#define LENGTH 0.5 

/* actually half the pole's length */
#define POLEMASS_LENGTH (MASSPOLE * LENGTH)
#define FORCE_MAG 10.0
#define TAU 0.02 

/* seconds between state updates */
#define FOURTHIRDS 1.3333333333333


void cart_pole(int action,float *x, float *x_dot, float *theta,float *theta_dot);
	
#endif
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

