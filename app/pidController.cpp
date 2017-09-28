/**
 * @file pidController.cpp
 *
 * @brief PID controller implementation
 *
 * @author Yi-ting Lei
 * @Created on: Sep 26, 2017
 */


#include <pidController.hpp>
#include <iostream>



/**

 *   @brief  Constructor function of
 *           PIDController
 *
 *   @param  none
 *   @return none
 */
pidController::pidController(void) {
}

/**

 *   @brief  Destructor function of
 *           PIDController
 *
 *   @param  none
 *   @return none
 */

pidController::~pidController(void) {
}

/**
 @brief 	 The function takes sets the gain values of the PID controller.

 @param     &p Proportional gain.
 @param     &i Integral gain.
 @param     &d Differential gain.

 @return Function is of type Void.
 */
void pidController::setPidGain(double p, double i, double d) {
	Kp = p;
	Ki = i;
	Kd = d;
	pre_error = 0;
	integral = 0;
	max = 100;
	min = -100;
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
double pidController::calResult(double setVal, double currentVal, double dt) {

	// Calculate error
	    double error = setVal - currentVal;
	    std::cout<<"Error"<<error<<"\n";
	    // Proportional term
	    double Pout = Kp * error;
	    std::cout<<"Pout"<<Pout<<"\n";

	    // Integral term
	    integral += error * dt;
	    double Iout = Ki * integral;
	    std::cout<<"Iout"<<Iout<<"\n";

	    // Derivative term
	    double derivative = (error - pre_error) / dt;
	    double Dout = Kd * derivative;
	    std::cout<<"Dout"<<Dout<<"\n";
	    // Calculate total output
	    double output = Pout + Iout + Dout;

	    // Restrict to max/min
	    if( output > max )
	        output = max;
	    else if( output < min )
	        output = min;

	    // Save error to previous error
	    pre_error = error;
	    std::cout<<"----Output----"<<output<<"\n";


	    return output;
}

/**
 *   @brief  return Kd value
 *
 *   @param  none
 *
 *   @return Kd
 */
double pidController::getKd() {
	return Kd;
}
/**
 *   @brief  return Kp value
 *
 *   @param  none
 *
 *   @return Kp
 */
double pidController::getKp() {
	return Kp;
}
/**
 *   @brief  return Ki value
 *
 *   @param  none
 *
 *   @return Ki
 */
double pidController::getKi() {
	return Ki;
}

