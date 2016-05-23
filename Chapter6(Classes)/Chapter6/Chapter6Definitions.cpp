#include "stdafx.h"
#include "Chapter6.h" //This will allow the cpp to see the class headers in the Chapter6.h Header File
//The functions of the Point class are declared in the Header file are defined here in the cpp
#include <cmath>

void Point::SetPt(int x, int y) 
{ xVal = x; yVal = y; }
void Point::OffsetPt(int x, int y)
{ xVal += x; yVal += y; }

Point::Point(int x, int y) //Definition of Constructor, Allows user to set members  when instantiating an object
{
	xVal = x;
	yVal = y;
}

Point::Point(double len, double angle)
{
	xVal = (int)(len*cos(angle));
	yVal = (int)(len*sin(angle));

}

Point::Point(void)
{
	xVal = yVal = 0;
}
Point::~Point()
{

}

void Point::OffsetPt2(int x, int y) //Using this allows you to refer to an implicit argument(such as pt1)
//In other wordsd its a pointer to pt1 members explicitly. Good in overloading (chapter 7)
{
	this->xVal += x;
	this->yVal += y;
}