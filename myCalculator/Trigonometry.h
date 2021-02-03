#include<string>

#pragma once

using namespace std;

class Trigonometry
{
private:
public: 
	string sin(string num, char type);

	string cos(string num, char type);

	string tan(string num, char type);

	string cot(string num, char type);

	string sinh(string num, char type);

	string cosh(string num, char type);

	string tanh(string num, char type);

	string coth(string num, char type);

	string asin(string num, char type);
	
	string acos(string num, char type);

	string atan();

	string acot();

	string asinh();

	string acosh();

	string atanh();

	string acoth();

};

