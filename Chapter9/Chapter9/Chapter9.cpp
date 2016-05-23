// Chapter9.cpp : Defines the entry point for the console application.
//
//Templates
#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

//Template defines an algorithm, a generic recipe for a task, independent of specific data types
//they are useful for creating generic libraires and reusable code

//Function template named Max. It will return the max of two objects
//T denotes an unspecified (generic) type

template <class T> //Function template starts with keyword template
//type parameters are always in <> and start with class keyword
//Each parameter must be refered in the function prototype

T Max(T val1, T val2)
{ 
	return val1 > val2 ? val1 : val2;
}

char* Max(char *str1, char *str2) // specialization of Max 
{ return strcmp(str1, str2) > 0 ? str1 : str2; }

//User can also make a template Class
template <class Type> 
class Stack {
public:
	Stack(int max) : stack(new Type[max]), top(-1), maxSize(max) {} 
	~Stack(void) { delete[] stack; }
	
	void Push(Type &val); 
	void Pop(void) { if (top >= 0) --top; }
	Type& Top(void) { return stack[top]; }
	friend ostream& operator << (ostream&, Stack&);
private: Type *stack; // stack array 
		 int top; // index of top stack entry 
		 const int maxSize; // max size of stack
};

//From a template class, you can use specializations, 
//constants, references, static members, and derived classes like regular classes



int _tmain(int argc, _TCHAR* argv[])
{
	cout << Max(19, 5) << ' ' << Max(10.5, 20.3) << ' ' << Max('a', 'b') << '\n';
	//In the template T is bound to the type of parameters used
	//So T Max(T Val1, T Val2) is the same as int Max(int Val1, int Val2) for Max(19,5)

	//Note: Compilier will not implicitly convert parameters of different types like float to int
	//Must use explicit type conversion 
	Max((int)1.5, 5);

	Max("Day", "Night");//Uses the Specialization

	Stack<int>  s1(10); // stack of integers 
	Stack<double> s2(10); // stack of doubles 
	//Stack<Point>  s3(10); // stack of points

	cin.get();
	return 0;
}

