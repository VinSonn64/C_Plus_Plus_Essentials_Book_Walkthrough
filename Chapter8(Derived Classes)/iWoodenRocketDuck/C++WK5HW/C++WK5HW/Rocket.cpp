#pragma once
#include "stdafx.h"
#include "Rocket.h"
Rocket::Rocket() : FlyDistance(0), isStarted(false), Speed(5), FuelAmount(20)
{

}
Rocket::~Rocket()
{
	
}
void Rocket::Fly()
{
	if (!isStarted) return;
	while (FuelAmount > 0)
	{

if (FuelAmount > Speed)
	{
		FlyDistance += Speed;
		FuelAmount -=Speed;
	}
	else
	{
		FlyDistance += FuelAmount;
		FuelAmount = 0;
	}	
	}
}
void Rocket::Launch()
{
	isStarted = true;

}
int Rocket::getTotalDistance()
{
	return this->getFlyDistance();
}
int Rocket::getFlyDistance()
{
	return this->FlyDistance;
}