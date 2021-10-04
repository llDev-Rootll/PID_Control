/*Copyright 2021 Arunava Basu, Shon Byron Cortes, 
 Anubhav Paras & Charu Sharma */

#ifndef PID_H_
#define PID_H_

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
#endif  // PID_H_
