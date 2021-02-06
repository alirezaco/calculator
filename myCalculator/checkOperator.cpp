#include "pch.h"
#include "checkOperator.h"
#include "myMath.h"
#include "Trigonometry.h"
#include <string>
#include "myFuncs.h";
using namespace std;

Trigonometry trigon;
MyMath math;
int checkOperator::findClose(string numbers, int index)
{
	for (int i = index; i < numbers.length(); i++)
	{
		if (numbers[i] == ')')
		{
			return i - index - 4;
		}
	}
	return numbers.length();
}
int checkOperator::findStart(string numbers, int index)
{
	int i;
	for (i = index; i > 0; i--)
	{
		if (numbers[i] == '+' || numbers[i] == '-' || numbers[i] == '*' || numbers[i] == '/' || numbers[i] == '^' || numbers[i] == '(')
		{
			return i;
		}
	}
	return 0;
}


string checkOperator::checkOpera(string numbers)
{
	/***************************************************************************************************/
	//sinh
	if (numbers.find("sinh") != -1)
	{
		int end = findClose(numbers, numbers.find("sinh"));
		numbers = numbers.substr(0, numbers.find("sinh")) + trigon.sinh(numbers.substr(numbers.find("sinh") + 5, end - 1), 'd') + numbers.substr(numbers.find("sinh") +5 + end , numbers.length());
		return checkOpera(numbers);
	}
	//cosh
	if (numbers.find("cosh") != -1)
	{
		int end = findClose(numbers, numbers.find("cosh"));
		numbers = numbers.substr(0, numbers.find("cosh")) + trigon.cosh(numbers.substr(numbers.find("cosh") + 5, end - 1), 'd') + numbers.substr(numbers.find("cosh") + 5 + end , numbers.length());
		return checkOpera(numbers);
	}
	//tanh
	if (numbers.find("tanh") != -1)
	{
		int end = findClose(numbers, numbers.find("tanh"));
		numbers = numbers.substr(0, numbers.find("tanh")) + trigon.tanh(numbers.substr(numbers.find("tanh") + 5, end - 1), 'd') + numbers.substr(numbers.find("tanh") + 5 + end, numbers.length());
		return checkOpera(numbers);
	}
	//coth
	if (numbers.find("coth") != -1)
	{
		int end = findClose(numbers, numbers.find("coth"));
		numbers = numbers.substr(0, numbers.find("coth")) + trigon.coth(numbers.substr(numbers.find("coth") + 5, end - 1), 'd') + numbers.substr(numbers.find("coth") + 5 + end, numbers.length());
		return checkOpera(numbers);
	}
	//******************************************************************************************
	//sin
	if (numbers.find("sin") != -1 )
	{
		int end = findClose(numbers, numbers.find("sin"));
		numbers = numbers.substr(0, numbers.find("sin")) + trigon.sin(numbers.substr(numbers.find("sin") + 4, end), 'd') + numbers.substr(numbers.find("sin") + 4 + end + 1, numbers.length());
		return checkOpera(numbers);
	}
	//cos
	if (numbers.find("cos") != -1)
	{
		int end = findClose(numbers, numbers.find("cos"));
		numbers = numbers.substr(0, numbers.find("cos")) + trigon.cos(numbers.substr(numbers.find("cos") + 4, end), 'd') + numbers.substr(numbers.find("cos") + 4 + end + 1, numbers.length());
		return checkOpera(numbers);
	}
	//tan
	if (numbers.find("tan") != -1)
	{
		int end = findClose(numbers, numbers.find("tan"));
		numbers = numbers.substr(0, numbers.find("tan")) + trigon.tan(numbers.substr(numbers.find("tan") + 4, end), 'd') + numbers.substr(numbers.find("tan") + 4 + end + 1, numbers.length());
		return checkOpera(numbers);
	}
	//cot
	if (numbers.find("cot") != -1)
	{
		int end = findClose(numbers, numbers.find("cot"));
		numbers = numbers.substr(0, numbers.find("cot")) + trigon.cot(numbers.substr(numbers.find("cot") + 4, end), 'd') + numbers.substr(numbers.find("cot") + 4 + end + 1, numbers.length());
		return checkOpera(numbers);
	}
	//***************************************************************************************************************
	//fact
	funcs func;
	if (numbers.find("!") != -1)
	{
		int start = findStart(numbers, numbers.find("!"));
		//string a = numbers.substr(start, numbers.find("!") - start);
		numbers = numbers.substr(0, start) + func.factorial(numbers.substr(start, numbers.find("!") - start )) + numbers.substr(numbers.find("!"), numbers.length());
		numbers.erase(numbers.find("!"), 1);
		return checkOpera(numbers);
	}
	//cot
	if (numbers.find("abs") != -1)
	{
		int end = findClose(numbers, numbers.find("abs"));
		numbers = numbers.substr(0, numbers.find("abs")) + func.myAbs(numbers.substr(numbers.find("abs") + 4, end)) + numbers.substr(numbers.find("abs") + 4 + end + 1, numbers.length());
		return checkOpera(numbers);
	}
	return math.get(numbers);
}

string checkOperator::getNumber(string numbers)
{
	try
	{
		numbers = checkOpera(numbers);
	}
	catch (...)
	{
		return "Syntaxt Error";
	}
	return numbers;
}
