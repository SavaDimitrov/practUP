#include "stdafx.h"
#include <iostream>

using namespace std;

int powOfTwoNumbers(int number, int power)
{
	if (power == 0)
	{
		return 1;
	}

	return number * powOfTwoNumbers(number, power - 1);
}


//int main()
//{
//	int number;
//	cout << "Input the number you want to put on power: ";
//	cin >> number;
//
//	int power;
//	cout << "Input the power: ";
//	cin >> power;
//
//	cout << number << " ^ " << power << " = " <<powOfTwoNumbers(number, power) << endl;
//
//
//	system("pause");
//	return 0;
//}