#include <iostream>

using namespace std;

int const MAX_SIZE = 100;

int main()
{
		//first problem
	//cout << "Input numbers from 1 to 100." << endl;
	//int n, min, max;
	//cin >> n;
	//int arr[MAX_SIZE];


	//for (int i = 0;i < n;i++)
	//{
	//	cin >> arr[i];
	//}

	//min = arr[0];
	//max = min;
	//for (int i = 0;i < n;i++)
	//{
	//	if (min > arr[i])
	//	{
	//		min = arr[i];
	//	}

	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//}
	//cout << max << " " << min << endl;

		//second problem
	//int n, min, max;
	//cin >> n;
	//int arr[MAX_SIZE];

	//for (int i = 0;i < n;i++)
	//{
	//	cin >> arr[i];
	//}

	//min = arr[0];
	//max = min;
	//for (int i = 0;i < n;i++)
	//{
	//	if (min > arr[i])
	//	{
	//		min = arr[i];
	//	}

	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//}

		//Third problem
	//int n, count = 0, sum = 0;
	//cin >> n;
	//int arr[MAX_SIZE];


	//for (int i = 0;i < n;i++)
	//{
	//	cin >> arr[i];
	//}

	//for (int i = 0;i < n;i++)
	//{
	//	sum = 0;
	//	while (arr[i] != 0)
	//	{
	//		sum += (arr[i] % 10);
	//		arr[i] /= 10;
	//	}
	//	if (sum > 0 && sum < 10)
	//	{
	//		count++;
	//	}
	//}
	//cout << count << endl;

		//Fourth problem
	int n, sum = 0, firstNonNeg = 0,index = 0;
	cin >> n;
	int arr[MAX_SIZE];

	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}

	for (int i = 0;i < n;i++)
	{
		if (arr[i] == 0 || arr[i] > 0)
		{
			firstNonNeg = arr[i];
			index = i;
		}
		if (firstNonNeg >= 0)
		{
			break;
		}
	}
	if (firstNonNeg >= 0)
	{
		for (int i = index;i < n;i++)
		{
			sum += arr[i];
		}
		cout << firstNonNeg << " " << sum << endl;
	}
	else cout << "There are no non-negative numbers!" << endl;


	system("pause");
	return 0;
}