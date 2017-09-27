/*
 * @file pidController.hpp
 *
 * @brief PID controller header file
 *
 * @Created on: Sep 26, 2017
 * @Author: Yiting Lei
 */

#ifndef PIDCONTROLLER_HPP_
#define PIDCONTROLLER_HPP_

/**

 *   @brief  Class definition of
 *           PIDController
 *
 *
 */

class pidController {
private:
	double Kd;
	double Ki;
	double Kp;
public:
	pidController();
	~pidController();
	void setPidGain(double &p, double &i, double &d);
	double calResult(double &setVal, double &currentVal, double &dt);
	double getKd();
	double getKp();
	double getKi();
};

#endif /* PIDCONTROLLER_HPP_ */
