#ifndef aimTarget_H
#define aimTarget_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../Robot.h"

class aimTarget: public Command
{
public:
	aimTarget();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
