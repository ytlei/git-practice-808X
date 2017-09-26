/**
 * @file pidController.cpp
 *
 * @brief PID controller implementation
 *
 * @author Yi-ting Lei
 * @Created on: Sep 26, 2017
 */
#include <iostream>
#include <pidController.hpp>


/**

 *   @brief  Constructor function of
 *           PIDController
 *
 *   @param  none
 *   @return none
 */
pidController::pidController(void) {}


/**

 *   @brief  Destructor function of
 *           PIDController
 *
 *   @param  none
 *   @return none
 */

pidController::~pidController(void) {}


/**
   @brief 	 The function takes sets the gain values of the PID controller.

   @param     &p Proportional gain.
   @param     &i Integral gain.
   @param     &d Differential gain.

   @return Function is of type Void.
 */
void pidController::setPidGain(double &p, double &i, double &d) {
    pidController::Kp = p;
    pidController::Ki = i;
    pidController::Kd = d;
}

/**

 *   @brief  calculate the controlled velocity
 *           PIDController
 *
 *   @param  setVal desired velocity
 *   @param  currentVal Current velocity
 *   @param	 dt Delta time
 *
 *   @return none
 */
double calResult(double &setVal,double &currentVal, double &dt){

}

/**
 *   @brief  return Kd value
 *
 *   @param  none
 *
 *   @return Kd
 */
double getKd(){
	return pidController::Kd;
}
/**
 *   @brief  return Kp value
 *
 *   @param  none
 *
 *   @return Kp
 */
double getKp(){
	return pidController::Kp;
}
/**
 *   @brief  return Ki value
 *
 *   @param  none
 *
 *   @return Ki
 */
double getKi(){
	return pidController::Ki;
}


