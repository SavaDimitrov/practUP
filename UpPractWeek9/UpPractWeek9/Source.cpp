#include <iostream>

using namespace std;

int const MAX_SIZE = 10;

int absNum(int number)
{
	if (number < 0)
	{
		return number * (-1);
	}
	else return number;
}

double powNums(double realNum, int num)
{
	double temp = realNum;
	for (int i = 1;i <= num;i++)
	{
		realNum *= temp;
	}

	return realNum;
}

double minNum(double realNum, double realNum1)
{
	return realNum < realNum1 ? realNum : realNum1;
}

double maxNum(double realNum, double realNum1)
{
	return realNum > realNum1 ? realNum : realNum1;
}

double minOf3(double realNum, double realNum1 , double realNum2)
{
	return minNum(minNum(realNum, realNum1), realNum2);
}

double maxOf3(double realNum, double realNum1, double realNum2)
{
	return maxNum(maxNum(realNum, realNum1), realNum2);
}

bool isAlpha(char sym)
{
	if (sym >= 'A' && sym <= 'Z' || sym >= 'a' && sym <= 'z')
	{
		return true;
	}
	else return false;
}

bool isDigit(char sym)
{
	if (sym >= '0' && sym <= '9')
		return true;
	else return false;
}

bool isPrime(int number)
{
	bool check = false;
	for (int i = 2;i*i < number;i++)
	{
		if (number%i != 0)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}
	}
	return check;
}

bool linkedPrimes(int num1, int num2)
{
	if (isPrime && num1 + 2 == num2)
	{
		return true;
	}
	else return false;
}

void matrix(int n, int m)
{
	if (n == m)
	{
		int matr[MAX_SIZE][MAX_SIZE];
		for (int i = 0; i < n;i++)
		{
			for (int j = 0;i < m;j++)
			{
				if (i == j)
				{
					matr[i][j] = i;
				}
				if (j > i)
				{
					matr[i][j] = j - i;
				}
				if (i > j)
				{
					matr[i][j] = j * i;
				}
			}
		}

		for (int i = 0; i < n;i++)
		{
			for (int j = 0;i < m;j++)
			{
				cout << matr[i][j];
			}
		}
	}
}



int main()
{

	system("pause");
	return 0;
}