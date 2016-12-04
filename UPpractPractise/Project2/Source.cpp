#include <iostream>

using namespace std;

int const MAX_SIZE = 100;

void arrInput(int arr[], int size)
{
	cout << "Input numbers only between [-100,100]." << endl << endl;
	for (int i = 0;i < size;i++)
	{
		if (i == 1)
		{
			cout << "Input the 1st number: " << "arr[" << i << "]= ";
			cin >> arr[i];
			cout << endl;
		}
		else if (i == 2)
		{
			cout << "Input the 2nd number: " << "arr[" << i << "]= ";
			cin >> arr[i];
			cout << endl;
		}
		else if (i == 3)
		{
			cout << "Input the 3rd number: " << "arr[" << i << "]= ";
			cin >> arr[i];
			cout << endl;
		}
		else
		{
			cout << "Input the " << i << "th number: " << "arr[" << i << "]= ";
			cin >> arr[i];
			cout << endl;
		}
	}
	//system("cls");
}

void arrOutput(int arr[], int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";
	}
}

void BubbleSort(int bubble[], int size)
{
	for (int i = 0;i < size - 1;i++)
	{
		for (int j = 0;j < size - i - 1;j++)
		{
			if (bubble[j] > bubble[j + 1])
			{
				int temp = bubble[j];
				bubble[j] = bubble[j + 1];
				bubble[j + 1] = temp;
			}
		}
	}
}

bool isPrime(int number);

int sumOfPrimes(int number);

void arrOutputReverse(int arr[], int size);


int main()
{
		//first problem
	//int bubble[MAX_SIZE];
	//int n;
	//cout << "Input the size of the matrix: ";
	//cin >> n;

	//if (n > 0 && n < 100)
	//{
	//	arrInput(bubble, n);
	//	BubbleSort(bubble, n);
	//}
	//else
	//{
	//	cout << "n must be between [0,100]!" << endl;
	//}

	//arrOutput(bubble, n);

		//second problem
	//int number;
	//
	//cin >> number;

	//cout << sumOfPrimes(number) << endl;

	int rev[MAX_SIZE];

	int size;

	cin >> size;

	arrInput(rev, size);
	arrOutput(rev, size);
	cout << endl;

	arrOutputReverse(rev, size);

	system("pause");
	return 0;
}


bool isPrime(int number)
{
	for (int i = 2;i <= number / 2;i++)
	{
		if (number%i == 0)
		{
			return false;
		}
	}

	return true;
}

int sumOfPrimes(int number)
{
	int primeSum = 0;

	for (int i = number;i > 1;i--)
	{
		if (isPrime(i))
		{
			primeSum += i;
		}
	}

	return primeSum;
}

void arrOutputReverse(int arr[], int size)
{
	for (int i = (size - 1);i >= 0;i--)
	{
		cout << arr[i] << " ";
	}
}

