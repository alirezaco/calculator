#include "pch.h"
#include "checkOperator.h"
#include "myMath.h"
#include "Trigonometry.h"
#include <string>
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
string checkOperator::checkOpera(string numbers)
{
	if (numbers.find("sin") != -1)
	{
		int end = findClose(numbers, numbers.find("sin"));
		numbers = numbers.substr(0, numbers.find("sin")) + trigon.sin(numbers.substr(numbers.find("sin") + 4, end), 'd') + numbers.substr(numbers.find("sin") + 4 + end + 1, numbers.length());
		return checkOpera(numbers);
	}
	if (numbers.find("cos") != -1)
	{
		int end = findClose(numbers, numbers.find("cos"));
		numbers = numbers.substr(0, numbers.find("cos")) + trigon.cos(numbers.substr(numbers.find("cos") + 4, end), 'd') + numbers.substr(numbers.find("cos") + 4 + end + 1, numbers.length());
		return checkOpera(numbers);
	}
	if (numbers.find("tan") != -1)
	{
		int end = findClose(numbers, numbers.find("tan"));
		numbers = numbers.substr(0, numbers.find("tan")) + trigon.tan(numbers.substr(numbers.find("tan") + 4, end), 'd') + numbers.substr(numbers.find("tan") + 4 + end + 1, numbers.length());
		return checkOpera(numbers);
	}
	if (numbers.find("cot") != -1)
	{
		int end = findClose(numbers, numbers.find("cot"));
		numbers = numbers.substr(0, numbers.find("cot")) + trigon.cot(numbers.substr(numbers.find("cot") + 4, end), 'd') + numbers.substr(numbers.find("cot") + 4 + end + 1, numbers.length());
		return checkOpera(numbers);
	}
	return math.get(numbers);
}

string checkOperator::getNumber(string numbers)
{
	numbers = checkOpera(numbers);
	return numbers;
}
