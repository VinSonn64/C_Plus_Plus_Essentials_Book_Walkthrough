// Chapter4.cpp : Defines the entry point for the console application.
//
//Functions
//Holds a computational formula that can be reused

#include "stdafx.h"
#include <iostream>

using namespace std;
//Functions are made of two parts, the interface and the body
//A function Interface is made of its name, its parameters, and the return type
//The Body holds the statements, which may or may not involve the parameters, and return a value

int Add(int a, int b)//Interface, Return Type: int, Name:Add, Parameters:(int a,int b)
//Add Function Body Starts
{ 
	int c;
	c = a + b;
	return c;
}//Add Function Body Ends

//This function would calculate a number with an exponent
int Power(int base, unsigned int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; ++i)
		result *= base; 
	return result;
}


//Scope
//Variables like int xyz are at a global scope, can be accessed almost anywhere
//At each scope variables are unique so they CAN NOT be redefined.
//In a block, they are in a local scope. Same scope as a function body. Only Visible within that scope

int xyz; //Global Variable
void Foo(int xyz) // xyz is local to the body of Foo
{
	if (xyz > 0)
	{
		double xyz; // xyz is local to this block
	}
}


//Variables exist as long as their scope allows.
//Once a function is exectued, the variables within it are terminated
int error;
void Error(int error)
{
	if (::error != 0)// refers to global error
	{
		cout << "Error is not zero" << endl;
	}
}

void Foo(int num)
{
	num = 0;
	cout << "num = " << num << '\n';
}
//Static
//static keyword is used to limit accessabilty of functions and variables
//Useful for keeping function limited to certain files
//static global variables are only accessible within the file like functions
//making local variables staic allow their value to persist as global, but still only accessible locally
static int FindNextRoute(void) // only accessible in this file 
{ 
	//... 
} //...
int Solve(void) // accessible outside this file 
{
	//... 
}

//Extern
//Tells the compilier that a variable is defined somewhere else or in another file
//Does not allocate storage, DO NOT initialize extern else it will allocate memory
//it may clash with the variable in another file of the same name
extern int size;

//Constant
//Makes the variable read only, value can't be changed 
const int maxSize=365;

//Enumeration
//creates symbolic constants, but does not allocate memory
//automatically valued 0,1,2,3,..
enum{north,south,east, west};
enum { north = 10, south, east = 0, west };//values can be overruled. south = 11, west = 1

//Inline
//Allows the compiler to substitue the function itself instead of generating code to call the function
//Helps with performance. Should be used after reviewing code 
inline int Abs(int n)
{ return n > 0 ? n : -n; }

//Recursive Functions
//A function that calls itself
int Factorial(unsigned int n)
{ return n == 0 ? 1 : n * Factorial(n - 1); }


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Functions" << endl;

	cout << endl << "Add Function" << endl;
	int x = 1, y = 2, z;

	//Using a function is known as 'calling' it
	//Calling a function involves using its name and arguments that will act as its parameters

	z = Add(x, y); //x and y was declared above will be the arguments of the Add Function
	cout << z << endl;

	cout << endl << "Power Function" << endl;
	z = Power(x, y);
	cout << z << endl;

	//Passing by Value or Reference
	//When passing in a variable into a function, it's a copy
	//So any changes to it will not affect the original variable, known as passing-by-value
	//If you want to directly change it, a reference must be used. known as passing-by-reference (Chapter 5)
	cout << endl << "Value Parameters" << endl;
	x = 10;
	Foo(x);
	cout << "x = " << x << '\n';

	//Register
	//Use to place a frequently used variable in a register instead of accessing it through memory
	//Can be placed after reviewing code to increase performance
	int sum;
	int n = 3;
	for (register int i = 0; i < n; ++i) 
		sum += i;

	cin >> z;
	return 0;
}

