#include "pch.h"
#include "Trigonometry.h"
#include "myMath.h"
#include <string>

using namespace std;


string Trigonometry::sin(string num, char type)
{
	MyMath math;
	num = math.get(num);

	float number = stof(num);
	number = int(number) % 360;

	if (type == 'd')
	{
		number = 3.14159265358 * number / 180;
	}
	
	float tavan = number;
	float res = number;
	int sign = -1;
	for (int i = 2; i < 10; i += 2)
	{
		tavan *= number * number / (i * (i + 1));
		res += sign * tavan;
		sign *= -1;
	}

	return to_string((int(res*100))/100.0);
}

string Trigonometry::cos(string num, char type)
{
	MyMath math;
	num = math.get(num);

	float number = stof(num);
	number = int(number)%360;

	if (type == 'd')
	{
		number = 3.14159265358 * number / 180;
	}

	float tavan = 1;
	float sign = -1;
	float res = 1;
	for (int i = 1; i < 10; i += 2)
	{
		tavan *= number * number / (i * (i + 1));
		res += sign * tavan;
		sign *= -1;
	}

	return to_string((int(res * 1000)) / 1000.0);
}

string Trigonometry::tan(string num, char type)
{
	MyMath math;
	return math.get(sin(num, type) + "/" + cos(num, type));
}

string Trigonometry::cot(string num, char type)
{
	MyMath math;
	return math.get(cos(num, type) + "/" + sin(num, type));
}

string Trigonometry::sinh(string num, char type)
{
	MyMath math;
	num = math.get(num);
	int sign = 1;
	if (num[0] == '-')
	{
		sign = -1;
	}
	string e = "2.718281^";
	float eTavanX = stof(math.get(e + num  ));
	float eTavan2x = eTavanX * eTavanX;
	return to_string((int)((sign * (eTavan2x - 1) / (2 * eTavanX)) * 1000) / 1000.0);
}
