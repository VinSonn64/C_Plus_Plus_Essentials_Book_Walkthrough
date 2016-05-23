#pragma once
#include "stdafx.h"
#include "Siri.h"
#include <string>
#include <iostream>

Siri::Siri() :QuackSound("Boop")
{

}
Siri::~Siri()
{

}
void Siri::Speak()
{
	std::cout << std::endl << Quack();
}
std::string Siri::Quack()
{
	return this->QuackSound;
}
