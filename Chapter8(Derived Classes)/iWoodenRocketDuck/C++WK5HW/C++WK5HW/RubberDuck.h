#pragma once
#include <string>
#include "Duck.h"

class RubberDuck : public Duck
{

public:
	RubberDuck();
	~RubberDuck();

	 void Fly() override;

};