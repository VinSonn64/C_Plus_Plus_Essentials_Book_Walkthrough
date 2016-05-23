// C++WK5HW.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "iWoodenRocketDuck.h"
#include "WoodenDuck.h"
#include "Duck.h"
#include "RocketDuck.h"

int _tmain(int argc, _TCHAR* argv[])
{
	/*iWoodenRocketDuck * daffy = new iWoodenRocketDuck();
	daffy->Launch();
	daffy->Rocket::Fly();

	std::cout << "Daffy->getTotalDistance()=" << daffy->Rocket::getTotalDistance();
	daffy->Siri::Speak();

	delete daffy;*/
	Duck * Bob = new Duck();
	WoodenDuck * Steve = new WoodenDuck();
	RocketDuck * Larry = new RocketDuck();

	Bob->Swim();
	std::cout << " Bob's swim distance is "<< Bob->getSwimDistance()<< "\n";

	Steve->Swim();
	 
	Larry->Duck::Fly();
	std::cout<<Larry->Duck::getFlyDistance();

	std::cin.get();
	return 0;
}

