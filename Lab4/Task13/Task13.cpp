#include <iostream>
#include <cmath>

int Enter() 
{
    int a;
    while (!(std::cin >> a) || (std::cin.peek() != '\n') || a <= 0) 
    {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::cout << "Неверный ввод, попробуйте еще раз: \n";
    }
    return a;
}
int repeat() 
{
    int a;
    std::cout << "Повторить программу?\n1. Да\n2. Нет\n\n";
    while (!(std::cin >> a) || (std::cin.peek() != '\n') || (a != 1 && a != 2)) 
    {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::cout << "Неверный ввод, попробуйте еще раз: \n";
    }
    if (a == 2)
        return 0;
    else
        return 1;
}

int main() 
{
    setlocale(LC_ALL, "russian");
    std::cout << " Задача 13 \n";
    std::cout << "Необходимо заполнить магический квадрат\nВыполнил Станишевский Александр Дмитриевич (группа 253505)\n\n";
    int count = 1;
    while (count)
    {
        std::cout << "Введите размер квадрата: ";
        int n = Enter();
        if (n == 2)
        {
            std::cout << "Магический квадрат такого размера не существует! \n";
            count = repeat();
        }
        else if ((n - 2) % 4 == 0)
        {
            unsigned int** arr = (unsigned int**)malloc(n * sizeof(unsigned int*));
            for (int i = 0; i < n; i++) 
            {
                arr[i] = (unsigned int*)malloc(n * sizeof(unsigned int));
            }
            int k = ((n - 2) / 4), num = 0;
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    arr[i][j] = -2;
            for (int i = 0; i < n; i++)
            {
                arr[i][i] = -1;
                arr[i][n - 1 - i] = -1;
            }
            for (int i = 0; i < 2 * k; i++)
                for (int j = i; j < 2 * k; j++)
                {
                    arr[i][j + 1] = -3;
                    arr[i][n - j - 2] = -3;
                    arr[n - 1 - i][j + 1] = -3;
                    arr[n - 1 - i][n - j - 2] = -3;
                }
            for (int i = 0; i < k + 1; i++)
                for (int j = i; j < 2 * k + 1 - i; j++)
                {
                    arr[k + j][i] = -4;
                    arr[k + j][n - 1 - i] = -4;
                    arr[i][k + j] = -4;
                    arr[n - 1 - i][k + j] = -4;
                }
            for (int i = 0; i < k; i++)
                for (int j = i; j < k; j++)
                {
                    arr[k + 1 + j][i] = -3;
                    arr[n - k - 2 - j][i] = -3;
                    arr[i][k + 1 + j] = -2;
                    arr[i][n - k - 2 - j] = -2;
                }
            for (int i = 0; i < k - 1; i++)
                for (int j = i; j < k - 1; j++)
                {
                    arr[k + 2 + j][n - 1 - i] = -3;
                    arr[n - k - 3 - j][n - 1 - i] = -3;
                    arr[n - 1 - i][k + 2 + j] = -2;
                    arr[n - 1 - i][n - k - 3 - j] = -2;
                }
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                {
                    num++;
                    if (arr[j][i] == -1)
                        arr[j][i] = num;
                    if (arr[n - 1 - j][i] == -2)
                        arr[n - 1 - j][i] = num;
                    if (arr[j][n - 1 - i] == -3)
                        arr[j][n - 1 - i] = num;
                    if (arr[n - 1 - j][n - 1 - i] == -4)
                        arr[n - 1 - j][n - 1 - i] = num;
                }
            std::cout << " Результат: \n";
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++)
                    std::cout << arr[i][j] << '\t';
                std::cout << '\n';
            }
            for (int i = 0; i < n; i++)
                free(arr[i]);
            free(arr);
        }
        else if (n % 2 == 1)
        {
            unsigned int** arr = (unsigned int**)calloc(n, sizeof(unsigned int*));
            for (int i = 0; i < n; i++) {
                arr[i] = (unsigned int*)calloc(n, sizeof(unsigned int));
            }
            unsigned int X = 0, Y = n / 2;
            arr[X][Y] = 1;
            for (unsigned int i = 2; i <= n * n; i++)
            {
                if (X == 0 && Y == n - 1)
                {
                    X += 1;
                }
                else if (X == 0 && Y != n - 1)
                {
                    Y += 1;
                    X = n - 1;
                }
                else if (X != 0 && Y == n - 1)
                {
                    X -= 1;
                    Y = 0;
                }
                else if (arr[X - 1][Y + 1] != 0)
                {
                    X += 1;
                }
                else
                {
                    X -= 1;
                    Y += 1;
                }
                arr[X][Y] = i;
            }

            std::cout << " Результат: \n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    std::cout << arr[i][j] << '\t';
                }
                std::cout << '\n';
            }
            for (int i = 0; i < n; i++)
                free(arr[i]);
            free(arr);
        }
        else if (n % 4 == 0)
        {
            unsigned int** arr = (unsigned int**)malloc(n * sizeof(unsigned int*));
            for (int i = 0; i < n; i++) 
            {
                arr[i] = (unsigned int*)malloc(n * sizeof(unsigned int));
            }
            int k = n / 4, num = 0;
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    arr[i][j] = i * n + j + 1;
            for (int i = 0; i < k; i++)
                for (int j = 0; j < k; j++)
                {
                    for (int g = 0; g < 4; g++)
                    {
                        arr[4 * i + g][(j * 4) + g] = 0;
                        arr[(i + 1) * 4 - g - 1][(j * 4) + g] = 0;
                    }
                }
            for (int i = n - 1; i >= 0; i--)
                for (int j = n - 1; j >= 0; j--)
                {
                    num++;
                    if (arr[i][j] == 0)
                        arr[i][j] = num;
                }
            std::cout << " Результат: \n";
            for (int i = 0; i < n; i++) 
            {
                for (int j = 0; j < n; j++)
                    std::cout << arr[i][j] << '\t';
                std::cout << '\n';
            }
            for (int i = 0; i < n; i++)
                free(arr[i]);
            free(arr);
        }
        count = repeat();
    }
    return 0;
}
