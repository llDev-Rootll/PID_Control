#include <gtest/gtest.h>
#include "Motor.h"

Motor m;

TEST(Motor, test1) { 
	EXPECT_EQ(9,m.drive(9,0));
}