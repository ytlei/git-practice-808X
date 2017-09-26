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


TEST(parameterTest,equals){
	pidController pid;
		double x = 1.0;
		pid.setPidGain(x,x,x);
		ASSERT_EQ(pid.getKp(), x);
		ASSERT_EQ(pid.getKi(), x);
		ASSERT_EQ(pid.getKd(), x);
}

/**
 *   Test the calculate result velocity function
 *
 *
 *   @param  none
 *   @return none
*/
TEST(controllerTest,equals){
	pidController pid;
	double x = 1.0;
	assert(pid.calResult(x,x,x) == 0);
}


