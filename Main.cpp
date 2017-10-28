// StateMachine sample application. The Motor.h/cpp state machine 
// follows the C/C++ Users Journal article by David Lafreniere "State 
// Machine Design in C++". The StateMachine base class has been updated
// to compile on modern C++ compilers but the article concepts still 
// hold true. 
//
// http://www.drdobbs.com/cpp/state-machine-design-in-c/184401236
#include "stdafx.h"
#include "Motor.h"

int main(void)
{
	Motor motor;

	MotorData* data = new MotorData();
	data->speed = 100;
	motor.SetSpeed(data);

	MotorData* data2 = new MotorData();
	data2->speed = 200;
	motor.SetSpeed(data2);

	motor.Halt();
	motor.Halt();

	return 0;
}

