#include <iostream>
#include <limits>

using namespace std;

int main()
{
		//First problem
//	int num;
//	cin >> num;
//
//	if (num >= 5 && num <= 20)
//	{
//		switch (num % 2)
//		{
//			case 0: cout << "The number is even!" << endl; break;
//			ca*/se 1: cout << "The number is odd!" << endl; break;
//			default: break;
//		}
//	}
//	else cout << "Not a valid number!" << endl;

		//Second problem
	//int a, b, c;
	//cin >> a >> b >> c;

	//if (a + b > c && a + c > b && b + c > a)
	//{
	//	cout << "exist, ";
	//	if (a == b && b == c)
	//	{
	//		cout << "equilateral" << endl;
	//	}
	//	else if (a == b || a == c || b == c)
	//	{
	//		cout << "isosceles" << endl;
	//	}
	//	else
	//		cout << "scalene" << endl;
	//}
	//else cout << "The triangle doesn't exist!" << endl;

		//Third problem
	//int number;
	//cin >> number;
	//int res; //promenliva za ostatuka
	//int prod = 1;
	//int sum = 0;

	//if (number > 99 && number < 1000)
	//{
	//	while (number)
	//	{
	//		res = number % 10;
	//		number /= 10;
	//		prod *= res;
	//		sum += res;
	//	}
	//	
	//	if (prod > 99 && prod < 1000)
	//	{
	//		cout << "Yes, " << (prod - sum) << endl;
	//	}
	//	else cout << "No, " << prod << endl;
	//}
	//else cout << "The number must have three digits!" << endl;

		//Fourth problem
	//int n;
	//cin >> n;
	//int num;
	//int maxOfmin = numeric_limits<int>::min();

	//for (int i = 1; i <= n; i++)
	//{
	//	cin >> num;
	//	if (num < 0 && num > maxOfmin)
	//	{
	//		maxOfmin = num;
	//	}
	//}
	//cout << maxOfmin << endl;

		//Fifth problem
	//int n;
	//cin >> n;
	//int nFact = 1;

	//for (int i = 1; i <= n; i++)
	//{
	//	nFact *= i;
	//}
	//cout << nFact << endl;

		//Sixth problem
	//int n;
	//cin >> n;
	//int ai;

	//for (int i = 1; i <= n; i++)
	//{
	//	ai = i * i + 3 * i;
	//	cout << "a[" << i << "]=" << ai << "  ";
	//	if (i % 3 == 0)
	//	{
	//		cout << endl;
	//	}
	//}

		//Seventh problem
	//int n;
	//cin >> n;
	//char sym1 = 'a', sym2 = 'b';

	//for (int i = 1; i <= (n-1); i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << sym1;
	//	}
	//	for (int k = (i + 1); k <= n; k++)
	//	{
	//		cout << sym2;
	//	}
	//	cout << endl;
	//}

		//Bonus problem
	int n;
	cin >> n;
	int fib0 = 0, fib1 = 1;
	int fib; //promenliva kudeto da zapazvame sledvashtoto chislo na fibonacci
	//cout << fib0 << " " << fib1 << " ";
	for (int i = 1; i <= n; i++)
	{
		fib = fib0 + fib1;
		fib0 = fib1;
		fib1 = fib;
		if (i == n)
		{
			cout << fib << endl;
		}
		//cout << fib << " ";
	}
	//cout << endl;


	system("pause");
	return 0;
}