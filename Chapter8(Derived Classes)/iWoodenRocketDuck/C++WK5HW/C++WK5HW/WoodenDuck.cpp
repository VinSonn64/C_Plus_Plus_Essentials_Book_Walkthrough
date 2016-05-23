#pragma once
#include "stdafx.h"
#include "WoodenDuck.h"
#include <iostream>

WoodenDuck::WoodenDuck()
{

}

WoodenDuck::~WoodenDuck()
{

}
void WoodenDuck :: Fly()
{
	std::cout << "WoodenDucks don't fly!" << std::endl;
}
void WoodenDuck::Swim()
{
	std::cout << "WoodenDucks don't swim!" << std::endl;
}