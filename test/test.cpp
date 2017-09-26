#include <gtest/gtest.h>
#include <iostream>
#include <pidController.hpp>
#include <test.hpp>
TEST(dummy, should_pass) {
  EXPECT_EQ(1, 1);
}


/**
 *   Test the setPidGain function
 *
 *
 *   @param  none
 *   @return none
*/
void testPIDController::testSetPidGain() {
	pidController pid;
	double x = 1.0;
	pid.setPidGain(x,x,x);
	assert(pid.getKp() == x);
	assert(pid.getKi() == x);
	assert(pid.getKd() == x);
}

/**
 *   Test the calculate result velocity function
 *
 *
 *   @param  none
 *   @return none
*/
void testPIDController::testCalResult() {
	pidController pid;
	double x = 1.0;
	assert(pid.calResult(x,x,x) == 0);
}
