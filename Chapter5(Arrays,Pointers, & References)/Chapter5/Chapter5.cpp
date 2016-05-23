// Chapter5.cpp : Defines the entry point for the console application.
//
//Arrays, Pointers, and References
//Array is a list of objects called elements, all the same type
//Each element is identified by an index, the number of elements is its dimension

//Pointers are addresses of objects in memory
//To obtain an object through a pointer is called dereferencing
//Creates dynamic objects which are stored on the heap instead of the stack.
//This means the Programmer controls the scope of the object instead of it being handled by the computer

//References are a symbolic name or alias for an object
//Helps get direct access to objects through pointers

#include "stdafx.h"
#include <iostream>

using namespace std;

//new keyword 
//Allocates a block of memory for a type as an argument

void Foo(void) //Here when Foo returns, str is destroyed, but the memory block isn't
{
	char* str = new char[10]; 
	//... 
	delete str;//The delete keyword destroys the allocated block
}



int _tmain(int argc, _TCHAR* argv[])
{
	//Array
	//Name of Array is nums, has 3 elements of type int
	int nums[3];
	nums[0] = 5;
	nums[1] = 10;
	nums[2] = 15;

	int num[] = { 5, 10, 15 }; //Same as above

	int Grid1[3][4] =
	{ 
		{ 26, 34, 22, 17 },
		{ 24, 32, 19, 13 }, 
		{ 28, 38, 25, 20 } 
	};//Multidimensional array, 3 rows, 4 columns

	int Grid2[][4] =
	{
		{ 26, 34, 22, 17 },
		{ 24, 32, 19, 13 },
		{ 28, 38, 25, 20 }
	};//You can omit the first dimension, but just the first.

	//Pointers
	//Pointers holds the address of an object

	int* ptr1; // pointer to an int 
	char* ptr2; // pointer to a char

	int number = 5;
	ptr1 = &number; //sets the address of number as the value of ptr1
	//& is the address operator

	// the * is the dereferencing operator. It obtains the contents of whatever address it points to
	int sample = *ptr1; //Here it is giving the value of what ptr1 is pointing to (number) and copying it to sample

	cout << ptr1 << endl; //This prints out the address
	cout << *ptr1 << endl; //This prints out the value of the object its pointing to
	cout << sample << endl; //This is the int that was givin value by dereferencing the pointer ptr1

	*ptr1 = 0; //Setting a pointer to 0 makes it a null pointer, good for initializing pointers
	//and marking the end of pointer-based data structures (linked lists)
	//Memory Management
	//Global Variables and Stack frames for function calls are stored on the Stack (Static Memory)
	//Dynamically allocated memory is stored on heap (Dynamic Memory)
	
	//Ponter Funtions
	int(*Compare)(const char*, const char*); //Creates a pointer function called Compare, and takes two char pointer arguments
	//int strcmp(const char*, const char*); //This is a library function with the same format
	Compare = &strcmp;//strcmp can be pointed by Compare

	strcmp("Tom", "Tim"); // direct call
	(*Compare)("Tom", "Tim"); // indirect call
	Compare("Tom", "Tim"); // indirect call (abbreviated)

	//References
	//Makes an alias for an object. It does not make a copy of it, it refers to the same object
	double num1 = 3.14;
	double &num2 = num1; //num2 is a reference to num1;
	num1 = 0.16; //this means num2 is 0.16 as well

	//It's useful to place references as arguments, if the programmer desires to directly change variables
	//within a function instead of a copy of them.

	//Typedef
	//Acts as an alias of a type
	typedef char *String; 
	typedef char Name[12];
	typedef unsigned int uint;

	String str; // is the same as: char *str;
	Name name; // is the same as: char name[12];
	uint n; // is the same as: unsigned int n;


	cin >> sample;


	return 0;
}

