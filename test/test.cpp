#include <gtest/gtest.h>

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

TEST(parameterTest,equals) {
	pidController pid;
	double x = 1.0;
	pid.setPidGain(x, x, x);
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
TEST(controllerTest,equals) {
	pidController pid;
	pid.setPidGain(0.05, 0.1, 0.02);

	double setVal = 5.0;
	double val = 4.5;
	double dt = 0.1;


	for( int i=0;i<=1000;i++){
		val = pid.calResult(setVal, val, dt);
//		printf("%f", val);
	}

	ASSERT_TRUE(setVal - val < 0.001);
}

