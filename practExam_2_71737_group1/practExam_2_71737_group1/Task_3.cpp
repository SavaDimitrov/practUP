#include "stdafx.h"
#include <iostream>

using namespace std;

void pyramidOfNumbers(int number, int rowsOfPyramid)
{
	for (int i = number; i > rowsOfPyramid; i--)
	{
		cout << i << " ";
	}
	cout << endl;

	if (rowsOfPyramid <= 0)
	{
		return;
	}

	pyramidOfNumbers(number, rowsOfPyramid - 1);

}



int main()
{
	int number;
	cout << "Input the number which will form the pyramid: ";
	cin >> number;

	int rows = 0;
	rows = number;

	cout << "The formed pyramid is: " << endl;
	pyramidOfNumbers(number, rows);



	system("pause");
	return 0;
}