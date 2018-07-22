// Chapter2Quiz 20180520.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void intro()
{
	cout << "learncpp.com \nLearn C++ dot com Chapter 2 quiz\n";
	cout << "Create a program that... \n";
	cout << "\tAsks the user for two real numbers(support decimals), \n";
	cout << "\tAsks the user to decide which operation to use by typing \'+\', \'-\'. \'/\', or \'*\'.\n";
	cout << "\tPerforms the operation and provides the answer. Improper operation character results in printing nothing.\n\n";
}

double askNumber()
{
	cout << "Please type in a real number.  Decimals are supported.\n";
	double userNumberChoice{ 0 };
	cin>>userNumberChoice;
	cout << endl;
	return userNumberChoice;
}

double operation(double a, double b)
{
	cout << "Now please indicate which operation you would like to use.\n";
	cout << "Simply type \'+\', \'-\'. \'/\', or \'*\'.\n";
	char operation{ '0' };
	cin >> operation;
	cout << endl;
	double answer{ 0 };
	if (operation == '+') { answer = a + b; cout << a << " + " << b << " = " << answer; }
	else if (operation == '-') { answer = a - b; cout << a << " - " << b << " = " << answer; }
	else if (operation == '/') { answer = a / b; cout << a << " / " << b << " = " << answer; }
	else if (operation == '*') { answer = a * b; cout << a << " x " << b << " = " << answer; }
	else { cout << operation << " is not a valid input for a mathematical operation in this program.\n"; }
	return answer;
}

int main()
{
	intro();
	cout << "First, we'll get a number from you.\n";
	double firstNumber{ askNumber() };
	cout << "The first number you chose is " << firstNumber << ".\n";
	cout << "Next, give us your second number. \n";
	double secondNumber{ askNumber() };
	cout << "The second number you'll be using is " << secondNumber << " then.\n";
	double finalAnswer{ 5.13 };
	finalAnswer = operation(firstNumber, secondNumber);
	cout << "\nThe answer to your math problem is " << finalAnswer << "\n";
    return 0;
}

