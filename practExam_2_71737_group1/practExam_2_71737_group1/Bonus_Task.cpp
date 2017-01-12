// practExam_2_71737_group1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int prodOfTwoNumbers(int number, int number2)
{
	if (number2 <= 0)
	{
		return 0;
	}

	return number + prodOfTwoNumbers(number, number2 - 1);
}


//int main()
//{
//
//	int number1, number2;
//
//	cout << "Input the first number. " << '\n' << "You input: ";
//	
//	cin >> number1;
//
//	cout << endl;
//
//	cout << "Input the second number. " << '\n' << "You input: ";
//	
//	cin >> number2;
//
//	cout << endl;
//
//	cout <<"The production is: " << number1 << " * " << number2 << " = " 
//		<< prodOfTwoNumbers(number1, number2) << endl;
//
//	system("pause");
//    return 0;
//}

