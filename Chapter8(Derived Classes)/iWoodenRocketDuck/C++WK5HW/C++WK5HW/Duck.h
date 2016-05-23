#pragma once
#include <string>

class Duck
{
protected:
	std::string m_QuackSound;
	int m_FlyDistance;
	int m_SwimDistance;

public:
	Duck();
	~Duck();

	virtual void Fly();
	virtual void Swim();
	virtual std::string Quack();

	int virtual getTotalDistance();
	int virtual getFlyDistance();
	int getSwimDistance();
};