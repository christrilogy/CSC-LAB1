// This program demonstartes a compile error.
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
	
	
	int number;
	float total;
	
	cout << "Today is great day for Lab" << endl;
	cout << "Let's start off by typing a number of your choice" << endl;
	cin >> number;
	
	total = number * 2;
	cout << total << " is twice the number you typed" << endl;
	
	return 0;
	
	}
