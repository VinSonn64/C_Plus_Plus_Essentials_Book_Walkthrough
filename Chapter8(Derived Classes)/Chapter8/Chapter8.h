#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Robot
{
public:
	Robot();
	~Robot();
};

class Dog
{
public: 
	Dog();
	~Dog(); 

	virtual void Bark(); //Dynamic Binding, lets you override a nonstatic function

protected:
	int age;
	string name;
	string breed;

};

class Wolf : public Dog
{
public:
	Wolf(); //When a Wolf constructor is used, it uses a Dog constructor first
	~Wolf();

	void Bark() override; //Here we give the Bark Function a new purpose for Wolf
	int GiveAge();
};

