// This program takes two values from the user and then swaos them
// before printing the values. The user will be promted to enter.
// both numbers.

// Christian Morgan

#include <iostream>
using namespace std;

int main ()

{
	cout<<"----------------------"<<endl;
	cout<<"Christian Morgan"<<endl;
  	cout<<"Computer Science 1"<<endl;
  	cout << "Orange County Community College" << endl;
  	cout<<"lab1"<< endl;
  	cout<<"January 20, 2023"<<endl;
  	cout<<"----------------------"<<endl;

	float firstNumber;
	float secondNumber;
	
	
	// Prompt user to enter the first number.
	
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;
	
	// Prompt user to enter the second number.
	
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;
	
	// Echo print the input.
	
	cout << endl << "You input the numbers as " << firstNumber
	     << " and " << secondNumber << endl;
	     
	  // Now we will swap the values.
	
	firstNumber = secondNumber;
	secondNumber = firstNumber;
	
	// Output the values.
	
	cout << "After swapping, the values of the two numbers are "
	     << firstNumber << "and" << secondNumber << endl;
	
	return 0;
	
}
