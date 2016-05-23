#pragma once
#include <string>
#include "Duck.h"

class Rocket
{
public:
	Rocket();
	~Rocket();
protected:
	int FlyDistance;
	int FuelAmount;
	bool isStarted;
	int Speed;
public:
	void Fly();
	void Launch();
	int getTotalDistance();
	int getFlyDistance();
};