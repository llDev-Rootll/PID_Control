/*Copyright 2021 Arunava Basu, Shon Byron Cortes, Anubhav Paras & Charu Sharma */
#include <iostream>
#include <cmath>


using std::cout;
using std::cin;
class PID{ 
    public:
        double calculate(double target_voltage, double present_voltage);
        PID(double Kp, double Ki, double Kd, double dt, double max_voltage, double min_voltage);
    private:
        double _Kp;
        double _Ki;
        double _Kd;
        double _dt;
        double _previous_error;
        double _integral;
        double _max_voltage;
        double _min_voltage;

};

PID::PID(double Kp, double Ki, double Kd, double dt, double max_voltage, double min_voltage){ 
    /*******************************************************************************
 * A constructor which intializes the global Kp, Ki, Kd, dt, max and minimum voltage to the passed values respectively and previous error and integral to 0
 * minimum voltage output is set to -12V and maximum to 12V
 ******************************************************************************/

;

}






double PID::calculate( double target_voltage, double present_voltage){ 
    /*******************************************************************************
 * A function which computes the PID controller output value.
 * target_voltage is used to store the setpoint
 * present_voltage is used to store the present voltage value
 Steps to calculate output :
 1) error is the difference between the target and the present voltage
 2) The proportional term is Kp times the error
 3) The error is multiplied with the time step dt and added to the integral variable
 4) The integral term is Ki times the integral variable
 5) The derivate term is Kd times the differnce in present error and previous error divided by the time step
 6) Total output is the bounded (withing min and max) sum of the proportional, integral, and derivate term
 ******************************************************************************/



    return 999;


}

