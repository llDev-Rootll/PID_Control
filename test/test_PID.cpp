/*Copyright 2021 Arunava Basu, Shon Byron Cortes, 
Anubhav Paras & Charu Sharma */

#include <gtest/gtest.h>

#include "PID.h"


/**
 * @brief Construct a new TEST object. Test 1 checks for 1 compute cycle of the PID calculate method.
 * 
 */
TEST(PID, test1) {
  PID pid(0.1, 0.01, 0.5);
  EXPECT_EQ(51.1, pid.calculate(10, 0));
}

/**
 * @brief Construct a new TEST object. Test for upper limit boundary condition of PID calculate method.
 * 
 */
TEST(PID, test2) {
  PID pid(0.1, 0.01, 0.5);
  EXPECT_EQ(100, pid.calculate(200, 100));
}

