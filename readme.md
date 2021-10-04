[![Build Status](https://app.travis-ci.com/llDev-Rootll/PID_Control.svg?branch=master)](https://app.travis-ci.com/llDev-Rootll/PID_Control)
[![Coverage Status](https://coveralls.io/repos/github/llDev-Rootll/PID_Control/badge.png?branch=master)](https://coveralls.io/github/llDev-Rootll/PID_Control?branch=master)
---


# Week 5: Test-Driven Development Assignment - ENPM 808X

## Overview

This repository pertains to the test driven development exercise. The group members of which are :

- Arunava Basu
- Shon Cortes
- Anubhav Paras
- Charu Sharma

## Part 1 
The members of the first pair for Part 1 of this repository are :
 - Arunava Basu (Driver)
 - Shon Cortes (Navigator)

 ## Part 2 
The members of the first pair for Part 1 of this repository are :
 - Charu Sharma (Driver)
 - Anubhav Paras (Navigator)
 
## Description
The design contains one class, PID. The main function takes the target velocity and present velocity as input and calls the calculate function of the PID class for 100 iterations.
The present voltage is updated with the controller output until it reaches within a margin of the target voltage. The UML class diagram is as follows : 


<img alt="UML" src="assets/UML.jpg" width="200" />
*Fig 1 :  UML class diagram*

The activity diagram is as follows : 


<img alt="Activity" src="assets/Activity.png" width="500" />
*Fig 2 :  Activity diagram*

### Steps to build 
```
    cd ...<path_to_directory>/
    mkdir build
    cd build
    cmake ..
    make
```    
### Steps to run
```
    ...<path_to_directory>/app/shell-app
```

### Steps to run cppcheck and cpplint
Run cppcheck: Results are stored in `./results/cppcheck_process_part2.txt`, `./results/cppcheck_result_part2.txt` 
```
sh run_cppcheck.sh
```

Run cpplint: Results are stored in `./results/cpplint_result_part2.txt`
```
sh run_cpplint.sh
```
