/*Copyright 2021 Arunava Basu, Shon Byron Cortes, Anubhav Paras & Charu Sharma */
#include <iostream>
#ifndef PID_H
#define PID_H
#endif
using std::cout;
using std::cin;
class Motor{ 
    public:
        double drive(double target_voltage, double present_voltage);
        double target_velocity;
        double present_velocity;
        double target_voltage;
        double present_voltage;
        double margin_of_error;
};

double Motor::drive(double target_velocity, double present_velocity){ 
    /*******************************************************************************
 * A function which maps the velocity to the motor voltage and calls the compute function
 * Velocity = L * Voltage where L is a constant of 10
 * The compute function of the PID class is called until the output is within a certain margin of error
 * Returns the final velocity
 ******************************************************************************/
;
return 888;
}

    
