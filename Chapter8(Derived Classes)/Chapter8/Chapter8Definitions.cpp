#pragma once
#include "stdafx.h"
#include "Chapter8.h"
#include <iostream>
#include <string.h>

using namespace std;


Dog::Dog() :name("Aldo"), age(0), breed("Beagle")
{
	
}

Dog::~Dog()
{

}

void Dog::Bark()
{
	cout << "Bark" << endl;
}



Wolf::Wolf()
{
	age = 2;
}

void Wolf::Bark()
{
	cout << "Howl"<<endl;
}

int Wolf::GiveAge()
{
	return age;
}


Robot::Robot()
{

}



