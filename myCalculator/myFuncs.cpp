#include "pch.h"
#include "myFuncs.h"
#include "myMath.h"
#include<string>

using namespace std;



string funcs::factorial(string num)
{
	MyMath math;
	num = math.get(num);
	if (num.find(".") != -1 || num[0] == '-')
	{
		return "Syntaxt Error";
	}
	string res = "1";
	while(num != "0")
	{
		res = math.get(res + "*" + num);
		num = math.get(num + "-" + "1");
	}
	return res;
}

string funcs::myAbs(string num)
{
	MyMath math;
	num = math.get(num);
	if (num[0] == '-')
	{
		num.erase(0, 1);
	}
	return num;
}
