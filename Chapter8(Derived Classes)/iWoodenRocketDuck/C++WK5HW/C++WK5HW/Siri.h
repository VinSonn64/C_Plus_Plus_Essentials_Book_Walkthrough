#pragma once
#include <string>

class Siri
{
public:
	Siri();
	~Siri();
	std::string QuackSound;
	std::string Quack();
	void Speak();
};