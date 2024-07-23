
#include <iostream>

using namespace std;
int main()
{
	int rows, cols, count = 0;
	cin >> rows >> cols;
	int** arr = new int* [rows + 2];
	for (int i = 0; i < rows + 2; i++)
	{
		arr[i] = new int[cols + 2];
	}
	for (int i = 1; i < rows + 1; i++)
	{
		for (int j = 1; j < cols + 1; j++)
		{
			arr[0][j] = 100000;
			arr[i][0] = 100000;
			arr[i][cols + 1] = 100000;
			arr[rows + 1][j] = 100000;
			cin >> arr[i][j];

		}

	}
	for (int i = 1; i < rows + 1; i++)
	{
		for (int j = 1; j < cols + 1; j++)
		{
			if (arr[i][j] < arr[i + 1][j] && arr[i][j] < arr[i - 1][j])
			{
				if (arr[i][j] < arr[i][j + 1] && arr[i][j] < arr[i][j - 1])
				{
					count++;
				}
			}

		}

	}
	cout << count;
	delete[] arr;
}