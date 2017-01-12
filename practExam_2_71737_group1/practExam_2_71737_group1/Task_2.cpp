#include "stdafx.h"
#include <iostream>

using namespace std;

int const MAX_SIZE = 10;

void InputMatrix(int matr[][MAX_SIZE], int row, int column)
{
	for (int i = 0; i < row;i++)
	{
		for (int j = 0; j < column;j++)
		{
			cin >> matr[i][j];
		}
	}
	system("cls");
}

void OutputMatrix(int matr[][MAX_SIZE], int row, int column)
{
	for (int i = 0; i < row;i++)
	{
		for (int j = 0; j < column;j++)
		{
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}
}

void TransposeMatrix(int matr[][MAX_SIZE], int matrT[][MAX_SIZE], int row, int column)
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < column;j++)
		{
			matrT[j][i] = matr[i][j];
		}
	}
}

//int main()
//{
//	int matrix[MAX_SIZE][MAX_SIZE];
//	int rows;
//	cout << "Input the number of rows you want the matrix to have: ";
//
//	cin >> rows;
//
//	int columns;
//	cout << "Input the number of columns you want the matrix to have: ";
//
//	cin >> columns;
//
//	InputMatrix(matrix, rows, columns);
//	cout << "The entered matrix is: " << endl << endl;
//	OutputMatrix(matrix, rows, columns);
//	
//	int transposedMatrix[MAX_SIZE][MAX_SIZE];
//
//	TransposeMatrix(matrix, transposedMatrix, rows, columns);
//
//	cout << endl;
//	OutputMatrix(transposedMatrix, columns, rows);
//
//	system("pause");
//	return 0;
//}