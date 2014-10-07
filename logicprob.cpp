// This program takes two values from the user and then swaps them
// before printing the values.  The user will be prompted to enter
// both numbers.

// Alexander Kleinhans

#include <iostream>
using namespace std;

int main()

{
	
	float firstNumber;
	float secondNumber;
	
	// Prompt user to enter the first number.
	
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin  >> firstNumber;
	
	// Promt user to enter the second number.
	
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin  >> secondNumber;
	
	// Echo print the input.
	
	cout << endl << "You input the numbers as " << firstNumber
		 << " and " << secondNumber << endl;
	
    // Now we will swap the values.
	
//	firstNumber = secondNumber; 
//  secondNumber = firstNumber;
// THIS WILL NEVER WORK, YOU MUST MAKE A TEMPORARY VARIABLE
    int tmp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = tmp; 
// NOW IT WILL WORK

	// Output the values.
	
	cout << "After swapping, the values of the two numbers are "
	     << firstNumber << " and " << secondNumber << endl;
	
	return 0;
	
}
