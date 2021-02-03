#pragma once
#include <string>
#include <vector>

/* *********************************************************************************************** */

//                                            Header                                               //

/* *********************************************************************************************** */
using namespace std;
//int myPlus(int num1, int num2, int ten);
//string checkZero(string num);
//bool areBracketsBalanced(string expr);
//bool isCurect(string str);

class MyMath
{
private:

	/* *********************************************************************************************** */

	//                                            for plus                                             //

	/* *********************************************************************************************** */
	int myPlus(int num1, int num2, int ten);


	string getNumber(string num1, string num2);

	/* *********************************************************************************************** */

	//                                            for minus                                            //

	/* *********************************************************************************************** */
	int myMinus(int num1, int num2, int ten);

	string checkZero(string num);

	string getnum(string num1, string num2);

	/* *********************************************************************************************** */

	//                                            for multy                                            //

	/* *********************************************************************************************** */
	string myMulty(string num1, string num2);

	string zero(int a);

	string multy(string num1, string num2);

	/* *********************************************************************************************** */

	//                                             divine                                            //

	/* *********************************************************************************************** */

	string myDiv(string num1, string num2);

	string divigen(string num1, string num2);

	/***************************************************************************************************/

	//                                                Power											   //

	/***************************************************************************************************/

	string power(string num1, string num2);

	/* *********************************************************************************************** */

	//                                    Get Number From User                                         //

	/* *********************************************************************************************** */

	string getNumberFromFunc(string num1, string num2, char opera);

	string checkPoint(string num);

	string getNumberFromUser(string num1, string num2, char opera);

	/* *********************************************************************************************** */

    //                                               check numbers                                     //

    /* *********************************************************************************************** */

    //this function is checking numbers
	bool isCurect(string str);

	// this function is checking Brackets
	bool areBracketsBalanced(string str);
public:
	/* *********************************************************************************************** */

   //                                               Get Sentens                                       //

   /* *********************************************************************************************** */

	int startIndexOPera(int opera, string num);

	int endIndexOPera(int opera, string num);

	// این تابع محاسبه اعداد در عبارت انجام میده
	string mohas(string numbers);

	//این تابع عبارت میگیره و پرانتز ها رو تفکیک میکنه
	string check(string str);

	//this function for get sentens from user
	string get(string str);
};

