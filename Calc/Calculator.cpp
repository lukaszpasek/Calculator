#pragma once
#include <iostream>
#include "Calculator.h"

	double calculator::ADD()
	{
		return number1 + number2;
	}
	double calculator::SUBTRACT()
	{
		return number1 - number2;
	}
	double calculator::MULTIPLY()
	{
		return number1 * number2;
	}
	double calculator::DIVIDE()
	{
		if (number2 == 0)
		{
			std::cout << "Nieprawidlowa operacja!Nie mozna dzielic przez 0! Error!\n";
			return -1;
		}
		return number1 / number2;
	}
	double calculator::MODULO()
	{
		if ((int)number2 == 0)
		{
			std::cout << "Nieprawidlowa operacja!Nie mozna dzielic przez 0! Error!\n";
			return -1;
		}
		return (int)number1 % (int)number2;
	}
	double calculator::SQRT()
	{
		if (number1 <0)
		{
			std::cout << "Nieprawidlowa operacja!Nie ma pierwiastka kwadratowego liczby ujemnej! Error!\n";
			return -1;
		}
		return sqrt(number1);
	}


	calculator::calculator()
	{
		number1 = 0;
		number2 = 0;
		operation = 'd';
	}
	void calculator::CLEAR()
	{
		number1 = 0;
		number2 = 0;
		operation = 'd';
	}
	void calculator::do_command()
	{
		double value = -1;
		switch (operation)
		{
		case '+':
			value = ADD();
			break;
		case '-':
			value = SUBTRACT();
			break;
		case '*':
			value = MULTIPLY();
			break;
		case '/':
			value = DIVIDE();
			break;
		case '%':
			value = MODULO();
			break;
		case 's':
			value = SQRT();
			break;
		default:
			std::cout << "Nieprawidlowa operacja!\n";
			break;
		}
		this->number1 = value;
	}



