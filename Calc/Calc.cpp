// Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "Calculator.h"
using namespace std;

bool isNumber(const std::string& s)
{
	try
	{
		std::stod(s);
	}
	catch (...)
	{
		return false;
	}
	return true;
}

int main()
{
    cout << "----Kalkulator prosty ver.1.1----\n";
    calculator testCalculator;
	string input;
	bool isDoubleInput = false;
	while (cin>>input)
	{
		input.erase(std::remove_if(input.begin(), input.end(), ::isspace),input.end());
		if (isNumber(input))
		{
			if (testCalculator.operation != 'd')

			{
				//if (isDoubleInput)
				//{
				//	int wyk = log10(testCalculator.number2) + 1;
				//	testCalculator.number2 += stod(input) / pow(10, wyk);
				//	isDoubleInput = false;
				//}
				//else
				//{
				testCalculator.number2 = stod(input);
				//}
				testCalculator.do_command();
				cout << testCalculator.number1 << "\n";
			}
			else
			{
				 testCalculator.number1 = stod(input);
			}
		}
		else
		{
			char inputOperator = input[0];
			if (inputOperator == 'C')
			{
				testCalculator.CLEAR();
				continue;
			}
			if (inputOperator == 'E') exit(0);
			testCalculator.operation = inputOperator;
			if(testCalculator.operation == 's')
			{
				testCalculator.do_command();
				cout << testCalculator.number1 << "\n";
			}
		}
	}
}

