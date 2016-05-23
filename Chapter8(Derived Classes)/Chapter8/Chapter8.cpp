// Chapter8.cpp : Defines the entry point for the console application.
//
//Classes
//Some classes inherit members and functions of other classes.
//Classes that use inheritance are known as derived or subclasses
//The derive from base or super classes creating a class hierarchy
#include "stdafx.h"
#include "Chapter8.h"
#include "RoboWolf.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Wolf* Aldo = new Wolf();
	Aldo->Bark();
	//Aldo->age = 5; illegal, age is a protected data member of Dog Class
	cout << "This Wolf " << Aldo->GiveAge() << " years old." << endl;

	RoboWolf* Steve = new RoboWolf();
	//Steve->Bark();

	//Aldo->Jump(10);

	cin.get();
	return 0;
}

