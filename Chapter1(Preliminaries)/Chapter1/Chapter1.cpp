// Chapter1.cpp : Defines the entry point for the console application.
//

//High Level languages such as C++ are translated into an assembly language by something called the compiler,
//This assembly language is more abstract and is then translated again but into into machine language by something called the assembler
//The final result is object code that is more readable to your computer and is considered to be executable;

//Compiler
//First, Preprocessor  reads the code for preprocessor directives like #include
//Next, the compiler tranlates the code to Machine code directly or by translating to C,
//then a C compiler translates it into machine code.
//Finally a linker connects the object code to any library modules it refers and creating an executable file




#include "stdafx.h"
#include <iostream>
//#include is a preprocessor directive 
//iostream is a header file containing definitions for input and output.

//In RAM(Random Access Memory) space is taken in bits eaching storing a binary digit(1 or 0)
//8 bits is known as a byte. Each bit or byte has a uniques memory address



using namespace std;//Standard Template Library

//All C++ programs have one main function, program exeuctions always start at main.
int _tmain(int argc, _TCHAR* argv[]) 
{
	//Variable
	//symbolic name for a memory location, can be stored or recalled.
	//Must have a Type, Name, and possibly a value.

	//Integer Variables
	//short : 2 bytes , int: 2 bytes, long: 4 bytes;
	int num; //Creating an instance of a variable is called Instantiating
	short num2;
	long num3;
	//As of now, num, num2, and num3 are undefined for they have no values

	unsigned int num4; //unsigned means it doesn't have a positive or negative sign

	//Real Variables
	//Can have decimal places, good for accurate measurements
	//float: 4 bytes, double: 8 bytes
	float num5 = 1.6;
	double num6= 1.23325252;

	num = 0; //Giving a variable value is called an Assignment or Initailization(for variables that WAS empty).

	//Character
	//contains a letter, Uses 1 byte
	char letter = 'a';

	//Literal Characters
	/*
	'\n' // new line 
	'\r' // carriage return 
	'\t' // horizontal tab 
	'\v' // vertical tab 
	'\b' // backspace 
	'\f' // formfeed
	*/

	//String
	//An array of characters. Technically a char pointer, holds address of first character
	string word = "Hello";


	//cin>> is for input, and cout>> is for output
	cin >> num;
	cout << "Hello World\n";
	cout << num;
	cin >> num;
	return 0;
}

