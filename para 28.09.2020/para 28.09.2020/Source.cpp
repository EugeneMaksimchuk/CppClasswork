#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
using namespace std;
void main() 
{
	int rows = 0, cols = 0;
	cout << "Rows-> ";
	cin >> rows;
	cout << "Cols-> ";
	cin >> cols;
	int** arr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	for (size_t i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}