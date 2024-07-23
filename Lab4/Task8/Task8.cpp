#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int k = 0;
    int rows1, rows2;
    cin >> rows1;
    int** arr1 = new int* [rows1];
    for (int i = 0; i < rows1; i++)
    {
        arr1[i] = new int[rows1];
    }
    for (int i = 0; i < rows1; i++)
    {
        for (int q = 0; q < rows1; q++)
        {
            cin >> arr1[i][q];
        }
    }
    cin >> rows2;
    int** arr2 = new int* [rows2];
    for (int i = 0; i < rows2; i++)
    {
        arr2[i] = new int[rows2];
    }
    for (int i = 0; i < rows2; i++)
    {
        for (int q = 0; q < rows2; q++)
        {
            cin >> arr2[i][q];
        }
    }

    int** arr3 = new int* [rows1];
    for (int i = 0; i < rows1; i++)
    {

        arr3[i] = new int[rows2];
        for (int j = 0; j < rows2; j++)
        {

            arr3[i][j] = 0;
            for (int k = 0; k < rows1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }


    for (int i = 0; i < rows1; i++)
    {
        for (int q = 0; q < rows2; q++)
        {
            cout << arr3[i][q];
            if (q != rows2 - 1) cout << " ";
        }
        cout << endl;
    }


}