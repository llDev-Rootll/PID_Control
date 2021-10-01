#pragma once
#include <gtest/gtest.h>
#include "PID.h"

PID pid(0.1,0.01,0.5,0.1,12.0,-12.0);

TEST(PID, test1) {
  EXPECT_EQ(51.01,  pid.calculate(10,0));
}

