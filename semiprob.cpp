// This program demonstrates a compile error.

// Place your name here

#include <iostream>
using namespace std;

int main()

{
	int number;
	float total;
	
	
	cout << "Today is a great day for Lab" << endl; // LOOKS NICER
	cout << "Let's start off by typing a number of your choice" << endl;
	cin  >> number; 
	
	total = number * 2;
	cout << total << " is twice the number you typed" << endl;
	
	return 0;
	
}
