#include <iostream>

using namespace std;

int main()
{
		//First problem
   //int num;
   //cin >> num;
   //int sum = 0;

   //for (int i = num; i >= 1;i--)
   //{
   //	cout << i << " + ";
   //	sum += i;
   //}
   //cout << "0 = "<< sum << endl;

	   //Second problem
   //int a, b;
   //cin >> a >> b;
   //int prod = 1;

   //if (a < b)
   //{
   //	for (int i = a;i <= b;i++)
   //	{
   //		prod *= i;
   //	}
   //}
   //else
   //{
   //	for (int i = b;i <= a;i++)
   //	{
   //		prod *= i;
   //	}
   //}
   //cout << "The product of the numbers between [a, b] is: " << prod << endl;


	   //Third problem
   //int num;
   //cin >> num;

   //if (num > 0 && num < 10)
   //{
   //	for (int i = num;i <= 100;i++)
   //	{
   //		if (i % 2 == 0 && i % 3 == 0)
   //		{
   //			cout << i << " ";
   //		}
   //	}
   //}
   //cout << endl;

	   //Fourth problem
   //int num;
   //cin >> num;
   //bool isPrime = true;

   //if (num > 0)
   //{
   //	for (int i = 2; i * i <= num; i++)
   //	{
   //		if (num%i == 0)
   //		{
   //			isPrime = false;
   //			cout << "The number is not prime! Blacks!" << endl;
   //		}
   //	}
   //}

   //if (isPrime)
   //{
   //	cout << "The number is prime! Yeeeey!" << endl;
   //}

	   //Fifth problem
   //int p, q;
   //cin >> p >> q;

   //if (p < q)
   //{
   //	for (int i = p;i <= q; i++)
   //	{
   //		bool isPrime = true;
   //		if (i > 1)
   //		{
   //			for (int j = 2; j * j <= i; j++)
   //			{
   //				if (i%j == 0)
   //				{
   //					isPrime = false;
   //				}
   //			}
   //		}
   //		if (isPrime)
   //		{
   //			cout << i << " ";
   //		}
   //	}
   //	cout << endl;
   //}

	   //Sixth problem
   //int rows;
   //cin >> rows;
   //int n = 1;

   //for (int i = 1;i <= rows;i++)
   //{
   //	for (int j = 1;j <= i ; j++)
   //	{
   //		cout << n;
   //		n++;
   //	}
   //	cout << endl;
   //}
	

		//Seventh problem
	//int number;
	//cin >> number;
	//int bin = 0;
	//int residue;

	//if (number > 0 && number < 1000)
	//{
	//	while (number)
	//	{
	//		residue = number % 2;
	//		number /= 2;
	//		bin *= 10;
	//		bin += residue;
	//	}
	//}
	//cout << bin << endl;

		//Bonus problem
	int r; //Rows
	cin >> r;
	int firstNum = 1;

	for (int i = 0; i <= r; i++)
	{
		for (int s = 1; s <= (r - i); s++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << firstNum << " ";
			firstNum = firstNum*(i - j) / (j + 1);
			if (firstNum == 0) firstNum++;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}