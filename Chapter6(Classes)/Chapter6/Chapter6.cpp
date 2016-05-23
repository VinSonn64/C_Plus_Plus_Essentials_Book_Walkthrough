// Chapter6.cpp : Defines the entry point for the console application.
//
//Classes
//Check Chapter6.h Header File to find Class Initialization

//Classes are user created data types
//Made of a representation of objects of the type and a set of operations for mainpulating objects
//It like creating a blueprint of something with unique characteristics and functions 
#include "stdafx.h"
#include <iostream>

#include "Chapter6.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Point pt; //pt is an object of class Point
	pt.SetPt(10, 20); //pt is set to (10,20)
	pt.OffsetPt(2, 2); //pt beomes (12,22)

	//pt.xVal = 10; // illegal the member is private and can't be accesed directly by the user

	Point pt1(10, 10);
	Point pt2(60.3, 3.14); //Constructor with Polar Coordinates
	Point pt3; //Constructor with void
	//makes 3 different objects of the type or class Point
	//Each has their own xVal and yVal members and functions
	//It is also using the constructor so the user can instantiate object AND set their member values
	pt.OffsetPt2(2, 2);

	
	return 0;
}

