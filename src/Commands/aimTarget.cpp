
#include "aimTarget.h"

aimTarget::aimTarget()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::mover);

}

// Called just before this Command runs the first time
void aimTarget::Initialize()
{
	printf("starter\n");
}

// Called repeatedly when this Command is scheduled to run
void aimTarget::Execute()
{
	if (Robot::mover->camera->GetVoltage() > 1.75) {
		printf("turning left\n");
		Robot::mover->leftMotor2->Set(-.2);
		Robot::mover->leftMotor3->Set(-.2);
		Robot::mover->rightMotor0->Set(-.2);
		Robot::mover->rightMotor1->Set(-.2);
	} else if (Robot::mover->camera->GetVoltage() < 1.55) {
		printf("turning right\n");
		Robot::mover->rightMotor0->Set(.2);
		Robot::mover->rightMotor1->Set(.2);
		Robot::mover->leftMotor2->Set(.2);
		Robot::mover->leftMotor3->Set(.2);
	} else {
		printf("got it\n");
		Robot::mover->rightMotor0->Set(0);
		Robot::mover->rightMotor1->Set(0);
		Robot::mover->leftMotor2->Set(0);
		Robot::mover->leftMotor3->Set(0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool aimTarget::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void aimTarget::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void aimTarget::Interrupted()
{

}
