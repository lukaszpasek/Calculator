#pragma once


class calculator
{
	double ADD();
	double SUBTRACT();
	double MULTIPLY();
	double DIVIDE();
	double MODULO();
	double SQRT();

public:
	calculator();
	char operation;
	double number1;
	double number2;
	void do_command();
	void CLEAR();
};

