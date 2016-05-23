// Chapter7.cpp : Defines the entry point for the console application.
//
//Overloading
//allows the user to create functions of the same name and process but with different datatypes
//also  alternate interfaces to the same functions
#include "stdafx.h"
#include <iostream>

using namespace std;

class Point{
public:
	Point(int x, int y) {
		Point::x = x;
		Point::y = y;
	}
	//Operator Overloading
	Point operator + (Point &p)
	{
		return Point(x + p.x, y + p.y);
	}

	Point operator - (Point &p)
	{
		return Point(x - p.x, y - p.y);
	}
private:
	int x, y;
};

int _tmain(int argc, _TCHAR* argv[])
{
	//Here we have to functions of the same name but has different arguments
	long GetTime(void); // seconds from midnight 
	void GetTime (int &hours, int &minutes, int &seconds);

	//The compiler will know which one to overload according the unique arguments
	int h, m, s;
	long t = GetTime();
	GetTime(h, m, s);

	//Operator Overloading
	Point pt1(10,20), pt2(10,20);
	Point pt3 = pt1 + pt2; //This is the overloaded +
	Point pt4 = pt1 - pt2;//This is the overloaded -
	return 0;
}

