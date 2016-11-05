// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Mover.h"
#include "../RobotMap.h"
#include "../Commands/DriveBot.h"
#include "../Commands/aimTarget.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

Mover::Mover() : Subsystem("Mover") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	rightMotor0 = RobotMap::moverRightMotor0;
	rightMotor1 = RobotMap::moverRightMotor1;
	leftMotor2 = RobotMap::moverLeftMotor2;
	leftMotor3 = RobotMap::moverLeftMotor3;
	speedSwitch = RobotMap::moverSpeedSwitch;


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    camera = RobotMap::moverCamera;
}
    
void Mover::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new DriveBot());
	//printf("Random Dance Party %d",rand()%100);
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

