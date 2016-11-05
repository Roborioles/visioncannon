// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "DriveBot.h"

DriveBot::DriveBot() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::mover);
}

// Called just before this Command runs the first time
void DriveBot::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void DriveBot::Execute() {
	Joystick* stick = Robot::oi->getGamePad();
	
	if (Robot::teleop) {

		if(Robot::mover->speedSwitch->Get()){

			Robot::mover->rightMotor0->Set(stick->GetThrottle()*-0.75);
			Robot::mover->rightMotor1->Set(stick->GetThrottle()*-0.75);

			Robot::mover->leftMotor2->Set(stick->GetY()*0.75);
			Robot::mover->leftMotor3->Set(stick->GetY()*0.75);
		}else{
			Robot::mover->rightMotor0->Set(stick->GetThrottle()*-0.25);
			Robot::mover->rightMotor1->Set(stick->GetThrottle()*-0.25);

			Robot::mover->leftMotor2->Set(stick->GetY()*0.25);
			Robot::mover->leftMotor3->Set(stick->GetY()*0.25);
		}
		printf("camera voltage = %f\n", Robot::mover->camera->GetVoltage());
	}
}

// Make this return true when this Command no longer needs to run execute()
bool DriveBot::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveBot::End() {
	Robot::mover->rightMotor0->Set(0);
	Robot::mover->rightMotor1->Set(0);

	Robot::mover->leftMotor2->Set(0);
	Robot::mover->leftMotor3->Set(0);

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveBot::Interrupted() {
	End();
}
