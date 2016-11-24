#include <iostream>

using namespace std;

int const MAX_SIZE = 100;

int main()
{
		//First problem
/*
	int n, m;
	cin >> n >> m;
	int matr[MAX_SIZE][MAX_SIZE];

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cin >> matr[i][j];
		}
	}
	system("cls");

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << matr[i][j] * 10 << " ";
		}
		cout << endl;
	}
*/
	
		//Second problem
/*
	int n, m;
	cin >> n >> m;
	int matr[MAX_SIZE][MAX_SIZE];
	int min = 0, max = 0;


	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cin >> matr[i][j];
		}
	}
	system("cls");

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (i == 0 && j == 0)
			{
				min = matr[i][j];
				max = matr[i][j];
			}
			if (min > matr[i][j])
			{
				min = matr[i][j];
			}
			if (max < matr[i][j])
			{
				max = matr[i][j];
			}
		}
	}
	cout << endl << min << " " << max << endl;
*/

		//Third problem
	int n;
	cin >> n;
	int matr[MAX_SIZE][MAX_SIZE];
	int sumRow = 0, sumColumn = 0, sumD = 0, sumD2 = 0;;


	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cin >> matr[i][j];
		}
	}
	system("cls");

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

		//1), 2), 3), 6)
	for (int i = 0;i < n;i++)
	{
		sumRow = 0;
		sumColumn = 0;
		for (int j = 0;j < n;j++)
		{
			sumRow += matr[i][j];
			sumColumn += matr[j][i];
			if (i == j)
			{
				sumD += matr[i][j];
			}
			if (i + j == (n-1))
			{
				sumD2 += matr[i][j];
			}
		}
		cout << sumRow << " " << sumColumn << endl;
	}
	cout << endl << "The sum of the diagonal is: " << sumD << " " 
		<< "The sum of the second diagonal is: " << sumD2 << endl << endl;

		//4), 5)
	int sumOverD = 0, sumUnderD = 0;

	for (int i = 0; i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (i != j)
			{
				if (i < j)
				{
					sumOverD += matr[i][j];
				}
				else if (j < i) 
				{
					sumUnderD += matr[i][j];
				}
			}
		}
	}
	cout << "The sum over the diagonal is: " << sumOverD << endl 
		<< "The sum under the diagonal is: " << sumUnderD << endl;








	system("pause");
	return 0;
}