// Chapter3.cpp : Defines the entry point for the console application.
//
//Statements
//Statements are a computational step that has a certain side effect, changing something in the program.
//A program's statements are handled in flow control. the currently executed statement is control of the CPU.
//When finished, it flows to the next statement. Good to keep in mind of the direction on the flow.

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	int i=0; // declaration statement 
	i++; // this has a side-effect 
	double d = 10.5; // declaration statement 
	d + 5; // useless statement!
	; //null statement

	//Compound Statement (block)
	//Good for combining statements and creating a new scope
	//Variables within the scope are not defined out the brackets
	{ 
	int min, i = 10, j = 20; 
	min = (i < j ? i : j); 
	cout << min << '\n'; 
	}

	//If and else Statement
	//Can make the execution of a statment or compound statement dependent on conditions
	//If the if condition is satisfied it will execute the following statement
	//Otherwise it will ignore them and flow to else and the statements following 
	cout << endl << "If and Else Statement" << endl;
	bool rule = true;

	if (rule)
	{
		cout << "Allowed" << endl;
	}
	else
	{
		cout << "Not Allowed" << endl;
	}

	//Switch statement
	//Provides a way of choosing between a set of alternatives, based on the value of an expression
	//First the switch tag is evaluated and the outcome is compared to case labels which are constants
	//When a case matches, the following statements will execute till it hits a break statement
	//Switch statements may reach a default case if none match
	cout << endl << "Switch Statement" << endl;
	char letter = 'a';
	switch (letter)
	{
	case 'a':
		cout << "Its the letter a" << endl;
		break;
	case 'b':
		cout << "Its the letter a" << endl;
		break;
	case 'c':
		cout << "Its the letter a" << endl;
		break;
	default:
		cout << "Its not a, b, or c" << endl;
		break;
	}

	//While Loop
	//Used to repeat statements while satisfying a condition
	cout << endl << "While Statement" << endl;
	i = 0;
	while (i < 9)
	{
		cout << i << endl;
		i++;
	}
	//Do Loop
	//Similar to While Loop except the loop body runs first then is looped
	cout << endl << "Do Statement" << endl;
	i = 0;
	do //Remember the code runs FIRST, then loops
	{
		cout << i << endl;
		i++;
	} while (i < 9);

	//For Loop
	//This loop has the first expression evaluated once before the entire loop
	//if the second expression evaluates as true, it wiil run the block of statements
	//The last expression runs after each iteration
	cout << endl << "For Statement" << endl;
	for (int i = 0; i < 9; i++)//Here i is known as the loop variaable
	{
		cout << i << endl;
	}

	//Continue Statement
	//Terminates the current iteration of the loop and moves to the next
	cout << endl << "Continue Statement" << endl;

	//This loop accepts all numbers except negatives
	int num;
	do {
		cin >> num;
		if (num < 0) continue;
		// process num here...
	} 
		while (num != 0);

	//Break Statement
	//Allows you to break out of the loop
	cout << endl << "Break Statement" << endl;
	int attempts = 3;
	int password;
	for (i = 0; i < attempts; ++i) {
		cout << "Please enter your password: "; 
		cin >> password;
		if (password == 0) // check password for correctness
		{
			cout << "Correct!" << endl;
			break; // drop out of the loop
		}
		cout << "Incorrect!\n"; }

	//GoTo Statement
	//Allows you to jump to a label
//Here instead of breaking out, it jumps to the out label
	cout << endl << "goto Statement" << endl;

	for (i = 0; i < attempts; ++i) {
		cout << "Please enter your password: ";
		cin >> password;
		if (password == 0) // check password for correctness
		goto out; // drop out of the loop
		cout << "Incorrect!\n";
	}

out: cout << "Correct!" << endl;

	cin >> letter;

	//Return Statement
	//It allows a function to return a value to its caller
	//Here it returns 0 from int main()
	return 0;
}

