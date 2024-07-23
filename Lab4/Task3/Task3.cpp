#include <iostream>
int Enter()
{
    int a;
    while (!(std::cin >> a) || (std::cin.peek() != '\n') || a < 1)
    {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::cout << "Неверный ввод, повторите еще раз:\n";
    }
    return a;
}

int repeat()
{
    int v;
    std::cout << "Повторить программу?\n1. Да\n2. Нет\n\n";
    while (!(std::cin >> v) || (std::cin.peek() != '\n') || (v != 1 && v != 2))
    {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::cout << "Неверный ввод, повторите еще раз:\n";
    }
    if (v == 2)
        return 0;
    else
        return 1;
}


int main()
{
    setlocale(LC_ALL, "ru");
    int k = 1;
    std::cout << "Вариант 6\n";
    std::cout << "Необходимо для заданной матрицы NxM напечатать индексы всех седловых точек\n";
    std::cout << "Выполнил Станишевский Александр Дмитриевич (группа 253505)\n";
    while (k == 1)
    {
                int  proof;
                std::cout << "Введите размеры матрицы:" << std::endl;
                std::cout << "N = ";
                int rows = Enter();
                std::cout << "M = ";
                int cols = Enter();
                std::cout << std::endl;
                int* min = new int[rows];
                int* max = new int[cols];
                int** arr = new int* [rows];
                for (int i = 0; i < rows; i++)
                {
                    arr[i] = new int[cols];
                }
                for (int i = 0; i < rows; i++)
                {
                    for (int j = 0; j < cols; j++)
                    {
                        std::cout << " Введите элемент " << i + 1 << " строки, " << j + 1 << " столбца: \n";
                        while (!(std::cin >> arr[i][j]) || (std::cin.peek() != '\n'))
                        {
                            std::cin.clear();
                            while (std::cin.get() != '\n');
                            std::cout << "Неверный ввод, повторите еще раз:\n";
                        }
                        
                        std::cout << std::endl;
                    }
                }
                for (int i = 0; i < rows; i++)
                {
                    min[i] = INT_MAX;
                    for (int j = 0; j < cols; j++)
                    {
                        if (arr[i][j] < min[i])
                        {
                            min[i] = arr[i][j];
                        }
                    }
                }
                for (int j = 0; j < cols; j++)
                {
                    max[j] = INT_MIN;
                    for (int i = 0; i < rows; i++)
                    {
                        if (arr[i][j] > max[j])
                        {
                            max[j] = arr[i][j];
                        }
                    }
                }
                std::cout << "Индексы седловых точек:" << std::endl;
                proof = 0;
                for (int i = 0; i < rows; i++)
                {
                    for (int j = 0; j < cols; j++)
                    {
                        if (min[i] == max[j])
                        {
                            std::cout << i << " " << j << std::endl;
                            proof++;
                        }
                    }
                }
                if (!(proof))
                    std::cout << "Седловых точек нет!" << std::endl;
                for (int i = 0; i < rows; i++)
                {
                    delete[] arr[i];
                }
                delete[] min;
                delete[] max;
               
                k = repeat();
    }


}
