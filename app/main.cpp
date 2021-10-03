/*Copyright 2021 Arunava Basu, Shon Byron Cortes, 
 Anubhav Paras & Charu Sharma */

#include <iostream>
#include <memory>
#include <PID.h>

using std::cout;
using std::cin;
using std::endl;

/**
 * @brief Starting point for PID execution. Instantiate a PID object with initial and target velocities.
 * call the function calculate of PID class for 100 iterations
 * 
 * @return int 
 */
int main() {
  // To do pair 2 - Done
  std::unique_ptr<PID> pid_controller(new PID(0.1, 0.01, 0.5));
  double velocity = 10;
  double final_vel = 20;

  std::cout << "Initial velocity= " << velocity << std::endl;
  std::cout << "Final velocity= " << final_vel << std::endl;

  std::cout << "PID Gains- " << std::endl;
  std::cout << "Kp = 0.1" << std::endl;
  std::cout << "Ki = 0.01" << std::endl;
  std::cout << "Kd = 0.5" << std::endl;

  for (int i = 0; i < 100; i++) {
    double output = pid_controller->calculate(final_vel, velocity);
    velocity = velocity + output;
  }

  std::cout << "Velocity after 100 iterations= " << velocity << std::endl;
}
