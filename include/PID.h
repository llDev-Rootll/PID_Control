/*Copyright 2021 Arunava Basu, Shon Byron Cortes, 
 Anubhav Paras & Charu Sharma */
#pragma once
#include <iostream>

using std::cout;
using std::cin;

class PID {
 public:
  /**
   * @brief Construct a new PID object
   *
   * @param Kp Proportional gain
   * @param Ki Integral gain
   * @param Kd Derivitive gain
   */
  PID(double Kp, double Ki, double Kd);

  double calculate(double target_velocity, double present_velocity);

 private:
  double _Kp;
  double _Ki;
  double _Kd;
  double _dt;
  double _previous_error;
  double _integral;
  double _max_velocity;
  double _min_velocity;
};
