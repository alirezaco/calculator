#pragma once
#include<string>
using namespace std;

class checkOperator
{
private:

	int findClose(string numbers, int index);

	string checkOpera(string numbers);

public:

	string getNumber(string numbers);
};

