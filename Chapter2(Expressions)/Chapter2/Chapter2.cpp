// Chapter2.cpp : Defines the entry point for the console application.
//

//Expressions
// Expressions are any compution that EVALUATES a value

#include "stdafx.h"
#include <iostream>


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	//Arithmetic Expressions
	//Addition:+ , Subtraction:-, Multiplication:*, Division:/, Remainder:%
	//All except integers and real operands 
	//If one is a real, the result shall be a real(double), if both are integers. result will be an integer
	cout << "Arithmetic Operators" << endl;
	int a = 2;
	int b = 5;
	double c = 6.5;
	int d;

	cout << b / a << endl;//result is 2 because both operands are int. Note: 2.5 rounded down to 2 NOT 3! 

	d = b + c; 
	cout << d << endl; //d stays a int, you can;t change its type;

	cout << b + c << endl;//This evaluates into a double cause one of the operands is a double

	//Values on the left or lvalues is anything that denotes a memory location which can sore a value

	//Relational Operators
	//Equality:==, Inequality:!=, Less Than:<, Greater Than:>, Less Than or Equal To: <=, Greater Than or Equal To >=
	//These Operators check if two quantities are true(1) or false(0);
	
	//Logical Operators
	//Negation:!, And:&&, Or:||


	//Increment/Decrement Operators
	//++ and -- will increase and decrease a quantity by one respectively



	//Conditional Operators
	//operand1 ? operand2 : operand3
	//First Operand1 is evaluated as a logical condition. 
	//If True, Operend2 is evaluated and the value is given
	//Else Operand 3 is evaluated and that value is given
	cout << endl << "Conditional Operator" << endl;
	int m = 1, n = 2; //Comma Operater can combine expressiona
	int min = (m < n ? ++m : ++n);
	cout << min << endl; //In this case min will have the value of 2

	cout << endl << "SIZEOF" << endl;
	//Sizeof Operator can calculate the size of any data item or type
	cout << "char   size = " << sizeof(char) << " bytes\n"; 
	cout << "char*  size = " << sizeof(char*) << " bytes\n"; 
	cout << "short  size = " << sizeof(short) << " bytes\n"; 
	cout << "int    size = " << sizeof(int) << " bytes\n";
	cout << "long   size = " << sizeof(long) << " bytes\n";
	cout << "float  size = " << sizeof(float) << " bytes\n";
	cout << "double size = " << sizeof(double) << " bytes\n";
	cout << "1.55   size = " << sizeof(1.55) << " bytes\n";
	cout << "1.55L  size = " << sizeof(1.55L) << " bytes\n";
	cout << "HELLO  size = " << sizeof("HELLO") << " bytes\n";

	//Explicit Type Conversion, loss of data
	/*
	    (int) 3.14 // converts 3.14 to an int to give 3
		(long) 3.14 // converts 3.14 to a long to give 3L 
		(double) 2 // converts 2 to a double to give 2.0
		(char) 122 // converts 122 to a char whose code is 122 
		(unsigned short) 3.14 // gives 3 as an unsigned short
	*/

	//Implicit Type Conversion
	// This happens when values of different types are mixed in an expression and no loss of data
	double t = 1; // t receives 1.0
	int i = 10.5; // i receives 10
	i = i + t;// means: i = int(double(i) + t

	cin >> d;
	return 0;
}

