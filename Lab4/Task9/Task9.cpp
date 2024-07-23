#include <iostream> 

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
    std::cout << "Дан трехмерный динамический массив размером n^3 целых неотрицательных чисел. Необходимо определить\n"
        "диагональ с наибольшей суммой чисел.\n";
    std::cout << "Выполнил Станишевский Александр Дмитриевич (группа 253505)\n";
    int k = 1;
    while (k == 1)
    {
    std::cout << "\nВведите размер трехмерного массива :\n";
    
        long size, d1 = 0, d2 = 0, d3 = 0, d4 = 0;
        bool g;
        g = true;
        while (g)
        {
            g = false;
            std::cin >> size;
            if (std::cin.fail() || std::cin.peek() != '\n' || size < 1)
            {
                g = true;
                std::cout << "Неверный ввод, попробуйте еще раз: \n";
                std::cin.clear();
                std::cin.ignore(9000, '\n');
            }
        }

        long*** arr = NULL;
        arr = (long***)malloc(size * sizeof(long**));
        for (int i = 0; i < size; i++)
            arr[i] = (long**)malloc(size * sizeof(long*));
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                arr[i][j] = (long*)malloc(size * sizeof(long));
        std::cout << "\nПоследовательно вводите члены матрицы(нажимая Enter после каждого введенного числа):\n";

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                for (int k = 0; k < size; k++)
                {

                    g = true;
                    while (g)
                    {
                        g = false;
                        std::cin >> arr[i][j][k];
                        if (std::cin.fail() || std::cin.peek() != '\n')
                        {
                            g = true;
                            std::cout << "Неверный ввод, попробуйте еще раз: \n";
                            std::cin.clear();
                            std::cin.ignore(9000, '\n');
                        }
                    }
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            d1 += arr[i][i][i];
            d2 += arr[i][i][size - i - 1];
            d3 += arr[i][size - i - 1][i];
            d4 += arr[size - i - 1][i][i];
        }
        long result, x, y;
        x = d1 > d2 ? d1 : d2;
        y = x > d3 ? x : d3;
        result = y > d4 ? y : d4;
        std::cout << "Диагонали: \n" << d1 << "\n" << d2 << "\n" << d3 << "\n" << d4 << std::endl;
        std::cout << "Наибольшая диагональ равна " << result << std::endl;



        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                free(arr[i][j]);
        for (int i = 0; i < size; i++)
            free(arr[i]);
        free(arr);

        k = repeat();
    }
}