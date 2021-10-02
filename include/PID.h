/*Copyright 2021 Arunava Basu, Shon Byron Cortes, 
Anubhav Paras & Charu Sharma */
#pragma once
#include <iostream>

using std::cout;
using std::cin;

class PID {
 public:
    double calculate(double target_velocity, double present_velocity);

    /**
     * @brief Construct a new PID object
     * 
     * @param Kp Proportional gain
     * @param Ki Integral gain
     * @param Kd Derivitive gain
     */
    PID(double Kp, double Ki, double Kd) {
        /** Initialize kp, ki, kd to their respective values. Time step set to 0.1. 
        previous error, min velocity and integral are 0, max velocity is 100.

        */

        // To do pair 2
        _Kp;
        _Ki;
        _Kd;
}

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
