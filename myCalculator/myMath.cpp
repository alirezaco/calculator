#include "pch.h"
#include "myMath.h"
#include <string>
#include <vector>

using namespace std;

//for plus this privat
int MyMath::myPlus(int num1, int num2, int ten)
{
	return num1 + num2 + ten;
}

//for plus this privat
string MyMath::getNumber(string num1, string num2)
{
	string res = "";
	int tavan = 1;
	for (int i = num1.length() - 1, j = num2.length() - 1; i > -1 && j > -1; i--, j--, tavan++)
	{
		res = to_string(myPlus(int(num1[i]) - 48, int(num2[j]) - 48, (res.length() >= tavan) ? int(res[0]) - 48 : 0)) + ((res.length() >= tavan) ? res.substr(1, res.length()) : res.substr(0, res.length()));
	}
	int diffrentLength = ((num1.length() > num2.length()) ? num1.length() - num2.length() : num2.length() - num1.length()) - 1;
	string MoreLength = (num1.length() > num2.length()) ? num1 : num2;
	for (int i = diffrentLength; i > -1; i--, tavan++)
	{
		res = to_string(myPlus(int(MoreLength[i]) - 48, (res.length() >= tavan) ? int(res[0]) - 48 : 0, 0)) + ((res.length() >= tavan) ? res.substr(1, res.length()) : res.substr(0, res.length()));
	}

	return checkZero(res);
}

//----------------------------------------------------------------------------------

//for minus this privat
int MyMath::myMinus(int num1, int num2, int ten)
{
	return num1 - num2 - ten;
}

//for minus
string MyMath::checkZero(string num)
{
	while (num[0] == '0' && num.length() > 1)
	{
		num = num.substr(1, num.length());
	}
	return num;
}

//for minus
string MyMath::getnum(string num1, string num2)
{
	string negative = "";
	if ((int(num1[0]) < int(num2[0]) && num1.length() == num2.length()) || num1.length() < num2.length())
	{
		string change = num1;
		num1 = num2;
		num2 = change;
		negative = "-";
	}
	string res = "";
	int ten = 0;
	for (int i = num1.length() - 1, j = num2.length() - 1; i > -1 && j > -1; i--, j--)
	{
		int resNumber = myMinus(int(num1[i]) - 48, int(num2[j]) - 48, ten);
		if (resNumber < 0)
		{
			resNumber += 10;
			ten = 1;
		}
		else
		{
			ten = 0;
		}
		res = to_string(resNumber) + res;
	}
	int diffrentLength = ((num1.length() > num2.length()) ? num1.length() - num2.length() : num2.length() - num1.length()) - 1;
	string moreLength = (num1.length() > num2.length()) ? num1 : num2;
	for (int i = diffrentLength; i > -1; i--)
	{
		if (ten == 0)
		{
			res = moreLength.substr(0, i + 1) + res;
			break;
		}
		else
		{
			int resNumber = myMinus(int(moreLength[i]) - 48, 0, ten);
			if (resNumber < 0)
			{
				resNumber += 10;
				ten = 1;
			}
			else
			{
				ten = 0;
			}
			res = to_string(resNumber) + res;
		}
	}

	return negative + checkZero(res);
}

//--------------------------------------------------------------------------------------------------------

//for multy
string	MyMath::myMulty(string num1, string num2)
{
	string res = "0";
	num2 = getnum(num2, "1");
	while (num2[0] != '-')
	{
		res = getNumber(num1, res);
		num2 = getnum(num2, "1");
	}
	return res;
}

//add zero to string
string MyMath::zero(int a)
{
	string res = "";
	for (int i = 0; i < a; i++)
	{
		res += "0";
	}
	return res;
}

//for multy
string MyMath::multy(string num1, string num2)
{
	if (num1.length() < num2.length())
	{
		string change = num1;
		num1 = num2;
		num2 = change;
	}
	int tavan = 0;
	string res = "0";
	for (int i = num2.length() - 1; i > -1; i--, tavan++)
	{
		string countZero = zero(tavan);
		res = getNumber(myMulty(num1, string{ num2[i] }) + countZero, res);
	}

	return res;
}

//-----------------------------------------------------------------------------------------

//for divine
string MyMath::myDiv(string num1, string num2)
{
	num1 = checkZero(num1);
	num2 = checkZero(num2);
	int i;
	for (i = 0; !((int(num1[0]) < int(num2[0]) && num1.length() == num2.length()) || num1.length() < num2.length()); i++)
	{
		num1 = getnum(num1, num2);
	}
	return to_string(i);
}

//for divine
string MyMath::divigen(string num1, string num2)
{
	if (checkZero(num2) == "0")
	{
		return "Syntax Error";
	}

	string res = "0";
	int count = num2.length();
	res = myDiv(num1.substr(0, count), num2);
	string r = getnum(num1.substr(0, count), multy(num2, res));
	for (int i = count; i < num1.length(); i++)
	{
		string resNumber = myDiv(r + num1[i], num2);
		res = getNumber(resNumber, res + "0");
		r = getnum(r + num1[i], multy(num2, resNumber));
	}
	string dot = "";
	for (int i = 0; i < 8 && r[0] != '0'; i++)
	{
		string resNumber = myDiv(r + "0", num2);
		dot = getNumber(resNumber, dot + "0");
		r = getnum(r + "0", multy(num2, resNumber));
	}
	dot = (dot != "") ? "." + dot : "";
	return res + dot;
}

//power
string MyMath::power(string num1, string num2)
{
	long int count = stoi(num2);

	if (!count)
	{
		if (num1[0] == '0')
		{
			return "Syntaxt error";
		}
		else 
		{
			return "1";
		}
	}

	string res = num1;
	for (int i = 2; i <= count; i++)
	{
		res = multy(res, num1);
	}
	return res;
}

//---------------------------------------------------------------------------------------

//get from func
string MyMath::getNumberFromFunc(string num1, string num2, char opera)
{
	switch (opera)
	{
	case '+':
	{
		return getNumber(num1, num2);
	}
	break;
	case '-':
	{
		return getnum(num1, num2);
	}
	break;
	case '/':
	{
		return divigen(num1, num2);
	}
	break;
	case '*':
	{
		return multy(num1, num2);
	}
	break;
	case '^':
	{
		return power(num1, num2);
	}
	break;
	}
}

//check point in number
string MyMath::checkPoint(string num)
{
	while (num[num.length() - 1] == '0')
	{
		num = num.substr(0, num.length() - 1);
	}
	if (num[num.length() - 1] == '.')
	{
		num = num.substr(0, num.length() - 1);
	}
	return num;
}

//get number from user
string MyMath::getNumberFromUser(string num1, string num2, char opera)
{

	string neg = "";
	if (num1[0] == '-')
	{
		opera = (opera == '-' || opera == '+') ? (opera == '-') ? '+' : '-' : opera;
		neg = (opera == '/' || opera == '*' || opera == '+') ? "-" : "";
		num1 = num1.erase(0, 1);

		if (opera == '-' && num2[0] != '-')
		{
			string change = num1;
			num1 = num2;
			num2 = change;
		}
	}
	if (num2[0] == '-')
	{

		opera = (opera == '-' || opera == '+') ? (opera == '-') ? '+' : '-' : opera;
		if (neg == "-")
		{
			neg = "";
		}
		else
		{
			neg = (opera == '/' || opera == '*' || opera == '+') ? "-" : "";
		}
		num2 = num2.erase(0, 1);

		if (opera == '-')
		{
			string change = num1;
			num1 = num2;
			num2 = change;
		}
	}

	int pointInNum1 = num1.find(".");
	int pointInNum2 = num2.find(".");
	int maxpoint = 0;

	if (pointInNum1 != -1)
	{
		num1 = num1.erase(pointInNum1, 1);
		pointInNum1 = (num1.length() - pointInNum1);
	}
	else
	{
		pointInNum1 = 0;
	}

	if (pointInNum2 != -1)
	{
		num2 = num2.erase(pointInNum2, 1);
		pointInNum2 = (num2.length() - pointInNum2);
	}
	else
	{
		pointInNum2 = 0;
	}

	if (pointInNum1 != 0 || pointInNum2 != 0)
	{
		int point = (pointInNum1 > pointInNum2) ? pointInNum1 : pointInNum2;
		maxpoint = pointInNum1 - pointInNum2;
		maxpoint *= (maxpoint > 0) ? 1 : -1;
		switch (opera)
		{
		case '+':
		{
			(pointInNum1 < pointInNum2) ? num1 += zero(maxpoint) : num2 += zero(maxpoint);
			string s = getNumberFromFunc(num1, num2, opera);
			return neg + checkPoint(s.substr(0, s.length() - point) + "." + s.substr(s.length() - point, s.length()));
		}
		break;
		case '-':
		{
			(pointInNum1 < pointInNum2) ? num1 += zero(maxpoint) : num2 += zero(maxpoint);
			string s = getNumberFromFunc(num1, num2, opera);
			return neg + checkPoint(s.substr(0, s.length() - point) + "." + s.substr(s.length() - point, s.length()));
		}
		break;
		case '*':
		{
			point = pointInNum1 + pointInNum2;
			string s = getNumberFromFunc(num1, num2, opera);
			return neg + checkPoint(s.substr(0, s.length() - point) + "." + s.substr(s.length() - point, s.length()));
		}
		break;
		case '^':
		{
			point = pointInNum1 * stoi(num2) ;
			string s = getNumberFromFunc(num1, num2, opera);
			return neg + checkPoint(s.substr(0, s.length() - point) + "." + s.substr(s.length() - point, s.length()));
		}
		break;
		case '/':
		{
			point = pointInNum1 - pointInNum2;
			string s = getNumberFromFunc(num1, num2, opera);
			point += (s.find(".") != -1) ? s.length() - s.find(".") - 1 : 0;
			(s.find(".") != -1) ? s.erase(s.find("."), 1) : "";
			if (point < 0)
			{
				return neg + s + zero(-1 * point);
			}
			else
			{
				return neg + checkPoint(s.substr(0, s.length() - point) + "." + s.substr(s.length() - point, s.length()));
			}
		}
		break;
		}
	}

	return neg + getNumberFromFunc(num1, num2, opera);
}

//-------------------------------------------------------------------------------------------------------------------------------------------
//check numbers

//this function is checking numbers
bool MyMath::isCurect(string str)
{
	for (int i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*' || str[i] == '(')
		{
			if (str[i + 1] == '*' || str[i + 1] == '/')
			{
				return false;
			}
		}
		if (str[i] == ')')
		{
			if (str[i + 1] != '+' && str[i + 1] != '/' && str[i + 1] != '*' && str[i + 1] != '-' && str[i + 1] != ')' && str[i + 1] != '(')
			{
				return false;
			}
			if (str[i - 1] == '+' || str[i - 1] == '/' || str[i - 1] == '*' || str[i - 1] == '-')
			{
				return false;
			}
		}
		if (str[i] == '(' && i != 0)
		{
			if (str[i - 1] != '+' && str[i - 1] != '/' && str[i - 1] != '*' && str[i - 1] != '-' && str[i - 1] != ')' && str[i - 1] != '(')
			{
				return false;
			}
		}
	}
	if (str[str.length() - 1] == '+' || str[str.length() - 1] == '*' || str[str.length() - 1] == '-' || str[str.length() - 1] == '/')
	{
		return false;
	}

	return true;
}

// this function is checking Brackets
bool MyMath::areBracketsBalanced(string str)
{
	string expr = "";
	for (auto i : str)
	{
		if (i == '(' || i == ')')
		{
			expr += i;
		}
	}
	vector<char> s;
	char x;
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
		{
			s.push_back(expr[i]);
			continue;
		}
		if (s.empty())
			return false;

		switch (expr[i])
		{
		case ')':
			x = s.back();
			s.pop_back();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':
			x = s.back();
			s.pop_back();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':
			x = s.back();
			s.pop_back();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}
	return (s.empty());
}

//************************************************************************************************************************
// public:

// for find index operator
int MyMath::startIndexOPera(int opera, string num)
{
	for (int i = opera - 1; i > 0; i--)
	{
		if (num[i] == '*' || num[i] == '+' || num[i] == '/' || num[i] == '-')
		{
			return i;
		}
	}
	return 0;
}
int MyMath::endIndexOPera(int opera, string num)
{
	for (int i = opera + 2; i < num.length(); i++)
	{
		if (num[i] == '*' || num[i] == '+' || num[i] == '/' || num[i] == '-')
		{
			return i;
		}
	}
	return num.length();
}

// این تابع محاسبه اعداد در عبارت انجام میده
string MyMath::mohas(string numbers)
{
	int pow = numbers.find("^");
	int opp = numbers.find("+");
	int opmi = numbers.find("-");
	int opmu = numbers.find("*");
	int opd = numbers.find("/");

	if (pow != -1)
	{
		int starrt = startIndexOPera(pow, numbers);
		int end = endIndexOPera(pow, numbers);

		starrt += (starrt == 0) ? 0 : 1;
		numbers = numbers.substr(0, starrt) + getNumberFromUser(numbers.substr(starrt, pow - starrt), numbers.substr(pow + 1, end - pow - 1), '^') + numbers.substr(end, numbers.length());
		return mohas(numbers);
	}

	if (opmi == 0)
	{
		opmi = numbers.substr(1, numbers.length()).find("-");
	}

	if (opmu != -1 || opd != -1)
	{
		int opera = (opmu < opd) ? opmu : opd;
		if (opera == -1)
		{
			opera = (opmu != -1) ? opmu : opd;
		}

		int starrt = startIndexOPera(opera, numbers);
		int end = endIndexOPera(opera, numbers);

		starrt += (starrt == 0) ? 0 : 1;
		numbers = numbers.substr(0, starrt) + getNumberFromUser(numbers.substr(starrt, opera - starrt), numbers.substr(opera + 1, end - opera - 1), (opera == opd) ? '/' : '*') + numbers.substr(end, numbers.length());
		return mohas(numbers);
	}
	if (opmi != -1 || opp != -1)
	{
		int opera = (opmi < opp) ? opmi : opp;
		if (opera == -1)
		{
			opera = (opmi != -1) ? opmi : opp;
		}

		int starrt = startIndexOPera(opera, numbers);
		int end = endIndexOPera(opera, numbers);

		starrt += (starrt == 0) ? 0 : 1;
		numbers = numbers.substr(0, starrt) + getNumberFromUser(numbers.substr(starrt, opera - starrt), numbers.substr(opera + 1, end - opera - 1), (opera == opp) ? '+' : '-') + numbers.substr(end, numbers.length());
		return mohas(numbers);
	}
	return numbers;
}

//این تابع عبارت میگیره و پرانتز ها رو تفکیک میکنه
string MyMath::check(string str)
{
	int start;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'p')
		{
			str = str.substr(0, i) + "3.141592654" + str.substr(i + 1, str.length());
		}
		else if (str[i] == 'e')
		{
			str = str.substr(0, i) + "2.718281828" + str.substr(i + 1, str.length());
		}

		if (str[i] == '(')
		{
			start = i + 1;
		}
		else if (str[i] == ')')
		{
			str = str.substr(0, start - 1) + mohas(str.substr(start, i - start)) + str.substr(i + 1, str.length());
			i = -1;
		}
	}
	return mohas(str);
}

//this function for get sentens from user
string MyMath::get(string str)
{
	if (areBracketsBalanced(str) && isCurect(str))
	{
		return check(str);
	}
	else
	{
		return "Syntax Error";
	}
}