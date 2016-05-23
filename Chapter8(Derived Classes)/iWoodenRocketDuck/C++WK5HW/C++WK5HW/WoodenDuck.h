#pragma once
#include <string>
#include "Duck.h"

class WoodenDuck : public Duck
{
public:
	WoodenDuck();
	~WoodenDuck();
	void Fly() override;
	void Swim() override;
};