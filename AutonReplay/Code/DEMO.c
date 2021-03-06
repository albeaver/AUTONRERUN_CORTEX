#pragma config(Sensor, dgtl2,  leftENC,        sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  rightENC,       sensorQuadEncoder)
#pragma config(Motor,  port2,           rightBack,     tmotorVex393_MC29, openLoop, reversed, driveRight, encoderPort, dgtl5)
#pragma config(Motor,  port3,           rightFront,    tmotorVex393_MC29, openLoop, reversed, driveRight, encoderPort, dgtl5)
#pragma config(Motor,  port8,           leftBack,      tmotorVex393_MC29, openLoop, driveLeft, encoderPort, dgtl2)
#pragma config(Motor,  port9,           leftFront,     tmotorVex393_MC29, openLoop, driveLeft, encoderPort, dgtl2)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*-------------------------------------------------------------*/
/*                                                             */
/*        Description: Competition template for VEX EDR        */
/*                                                             */
/*-------------------------------------------------------------*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

#include "Library/AutonReplay.c"
#pragma systemFile

////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                //
// THIS IS DEMO CODE FOR COUNTING THE WHEEL ROTATIONS. OUR SETUP HAS FOUR WHEELS w/ TWO ENCODERS. //
//                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
	// Set bStopTasksBetweenModes to false if you want to keep user created tasks
	// running between Autonomous and Driver controlled modes. You will need to
	// manage all user created tasks if set to false.
	bStopTasksBetweenModes = true;

	// Set bDisplayCompetitionStatusOnLcd to false if you don't want the LCD
	// used by the competition include file, for example, you might want
	// to display your team name on the LCD in this function.
	// bDisplayCompetitionStatusOnLcd = false;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task autonomous()
{
// This is the generated code on a test robot
// Delete below the following line to the end of autonomous and paste your generated code
///////////////////////////
wait1Msec(730);
motor[port8] = 19;
motor[port9] = 19;
wait1Msec(130);
motor[port2] = 20;
motor[port3] = 20;
motor[port8] = 38;
motor[port9] = 38;
wait1Msec(130);
motor[port2] = 37;
motor[port3] = 37;
motor[port8] = 55;
motor[port9] = 55;
wait1Msec(370);
motor[port2] = 0;
motor[port3] = 0;
motor[port8] = 18;
motor[port9] = 18;
wait1Msec(1330);
motor[port8] = -29;
motor[port9] = -29;
wait1Msec(170);
motor[port8] = -45;
motor[port9] = -45;
wait1Msec(1290);
motor[port8] = 0;
motor[port9] = 0;
wait1Msec(850);
motor[port2] = 17;
motor[port3] = 17;
motor[port8] = 17;
motor[port9] = 17;
wait1Msec(290);
motor[port2] = 36;
motor[port3] = 36;
motor[port8] = 36;
motor[port9] = 36;
wait1Msec(610);
motor[port2] = 54;
motor[port3] = 54;
motor[port8] = 54;
motor[port9] = 54;
wait1Msec(1170);
motor[port2] = 0;
motor[port3] = 0;
motor[port8] = 0;
motor[port9] = 0;
wait1Msec(1410);
motor[port2] = 23;
motor[port3] = 23;
motor[port8] = -55;
motor[port9] = -55;
wait1Msec(90);
motor[port8] = -77;
motor[port9] = -77;
wait1Msec(810);
motor[port2] = 0;
motor[port3] = 0;
motor[port8] = 0;
motor[port9] = 0;
wait1Msec(890);
motor[port2] = 23;
motor[port3] = 23;
motor[port8] = 23;
motor[port9] = 23;
wait1Msec(330);
motor[port2] = 42;
motor[port3] = 42;
motor[port8] = 42;
motor[port9] = 42;
wait1Msec(1450);
motor[port2] = 0;
motor[port3] = 0;
motor[port8] = 0;
motor[port9] = 0;
wait1Msec(1290);
motor[port8] = 21;
motor[port9] = 21;
wait1Msec(450);
motor[port2] = -17;
motor[port3] = -17;
wait1Msec(850);
motor[port2] = -35;
motor[port3] = -35;
wait1Msec(250);
motor[port2] = -51;
motor[port3] = -51;
wait1Msec(330);
motor[port2] = -10;
motor[port3] = -10;
wait1Msec(1770);
motor[port2] = 15;
motor[port3] = 15;
wait1Msec(170);
motor[port2] = 43;
motor[port3] = 43;
wait1Msec(250);
motor[port2] = 66;
motor[port3] = 66;
wait1Msec(650);
motor[port8] = 41;
motor[port9] = 41;
wait1Msec(130);
motor[port2] = 48;
motor[port3] = 48;
wait1Msec(370);
motor[port2] = 31;
motor[port3] = 31;
wait1Msec(90);
motor[port2] = 0;
motor[port3] = 0;
motor[port8] = 15;
motor[port9] = 15;

}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

// STATIC VARIABLES FOR THE DRIVING. //

#define MAX_POWER 127
#define DEADBAND 10

task usercontrol()
{
	clearDebugStream(); //Start your code over fresh
	// User control code here, inside the loop
	int leftpower;
	int rightpower;

	while (true)
	{
		AR_BEGINSegment(); //Does the correct initialization at the start of the loop
		// ARCADE DRIVE (https://renegaderobotics.org/robotc-chassis-programming/)
		
		// Learn about setting motor power once at https://renegaderobotics.org/set-motor-power-just/
		leftpower = (vexRT[Ch3] + vexRT[Ch4]);
		rightpower = (vexRT[Ch3] - vexRT[Ch4]);

		if(abs(rightpower) > MAX_POWER){
			rightpower = sgn(rightpower) * MAX_POWER;
		}

		if(abs(leftpower) > MAX_POWER){
			leftpower = sgn(leftpower) * MAX_POWER;
		}

		if(abs(leftpower) < DEADBAND) leftpower = 0;
		if(abs(rightpower) < DEADBAND) rightpower = 0;

		// SET MOTORS TO RIGHT POWER AND LEFT POWER HERE
		motor[leftBack]=leftpower;
		AR_GenerateMotorPower(leftBack,leftpower); // Adds motor power to queue
		motor[leftFront] = leftpower;
		AR_GenerateMotorPower(leftFront,leftpower);
		motor[rightBack] = rightpower;
		AR_GenerateMotorPower(rightBack,rightpower);
		motor[rightFront] = rightpower;
		AR_GenerateMotorPower(rightFront, rightpower);

		AR_ENDSegment(); // Calculations at end of the loop
	}
}
