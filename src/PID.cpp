/*Copyright 2021 Arunava Basu, Shon Byron Cortes, 
 Anubhav Paras & Charu Sharma */

// #pragma once
#include "PID.h"
#include <algorithm>

PID::PID(double Kp, double Ki, double Kd) {
  /** Initialize kp, ki, kd to their respective values. Time step set to 0.1.
   previous error, min velocity and integral are 0, max velocity is 100.

   */

  // To do pair 2 - Done
  _dt = 0.1;
  _previous_error = 0;
  _integral = 0;
  _min_velocity = 0;
  _max_velocity = 100;

  _Kp = Kp;
  _Ki = Ki;
  _Kd = Kd;
}
/**
 * @brief A function which computes the PID controller output value. target_voltage is used to store the setpoint
 * present_voltage is used to store the present voltage value
 * Steps to calculate output :
 * 1) error is the difference between the target and the present voltage
 * 2) The proportional term is Kp times the error
 * 3) The error is multiplied with the time step dt and added to the integral variable
 * 4) The integral term is Ki times the integral variable
 * 5) The derivate term is Kd times the difference in present error and previous error divided by the time step
 * 6) Total output is the bounded (withing min and max) sum of the proportional, integral, and derivate term 
 * 
 * @param target_velocity Desired final velocity
 * @param present_velocity Current velocity
 * @return double Final velocity calculated by PID controller
 */
double PID::calculate(double target_velocity, double present_velocity) {
  // To do pair 2 - Done

  double error = target_velocity - present_velocity;
  double p_term = _Kp * error;

  _integral = _integral + (error * _dt);
  double i_term = _Ki * _integral;

  double d_term = _Kd * (error - _previous_error) / _dt;

  double output = p_term + i_term + d_term;

  _previous_error = error;

  output = std::max(_min_velocity, std::min(_max_velocity, output));
  return output;
}

