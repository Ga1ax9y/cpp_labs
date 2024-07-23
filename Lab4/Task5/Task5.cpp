

#include <iostream>
#include <vector>



int main() {
    int rows, cols;
    std::cin >> rows >> cols;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (arr[i][j] < arr[i - 1][j])
            {
                arr[i][j] = arr[i - 1][j];
            }
            if (arr[i][j] < arr[i - 1][j - 1])
            {
                arr[i][j] = arr[i - 1][j - 1];
            }
            if (arr[i][j] < arr[i][j - 1])
            {
                arr[i][j] = arr[i][j - 1];
            }
        }
    }
    for (int i = 1; i < rows; i++)
    {
        if (arr[i][0] < arr[i - 1][0])
        {
            arr[i][0] = arr[i - 1][0];
        }
    }
    for (int i = 1; i < cols; i++)
    {
        if (arr[0][i] < arr[0][i - 1])
        {
            arr[0][i] = arr[0][i - 1];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int q = 0; q < cols; q++)
        {
            std::cout << arr[i][q] << " ";
        }
        std::cout << std::endl;
    }

}
