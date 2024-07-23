#include <iostream>


int check(int x, int min, int max)
{
    while (scanf_s("%d", &x) != 1 || x < min || x >max || getchar() != '\n')
    {
        printf("Ошибка!\n");
        rewind(stdin);
    }
    return x;
}
void func(int** const arr, int* const arr1,int rows)
{
	
	int j = 0;
	for (int i = 0; i < rows; i++)
	{
		if (arr[i][i] % 2 == 0)
		{
			arr1[j] = arr[i][i];
			j++;
		}
	}
}
int multi(int* const arr1, int count)
{
	int result = 1;
	for (int i = 0; i < count; i++)
	{
		result *= arr1[i];
	}
	return result;
}
int main()
{
    int kk = 1;
    while (kk == 1)
    {
    setlocale(LC_ALL, "Russian");
    std::cout << " Задание 3\n";
    std::cout << "Дан двумерный динамический массив целых чисел А размерностью n * k ";
    std::cout << "Размерность массива ввести с клавиатуры\n";
    std::cout << "Значения элементов массива массива ввести с клавиатуры\n";
    std::cout << "Создать динамический массив из элементов,расположенных на главной диагонали матрицы и имеющих четное значение\n";
    std::cout << "Вычислить произведение элементов динамического массива.Созданный массив и результат произведения вывести на экран\n";
    std::cout << " Выполнил Станишевский Алекандр (группа 253505)\n";
    int rows = 5 , cols = 6, count = 0;
    std::cout << "Введите количество строк: ";
    rows = check(rows, 1, 10000000);
    std::cout << "Введите количество столбцов: ";
    cols = check(cols, 1, 10000000);
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    std::cout << " Введите элементы массива: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = check(arr[i][j], -1000000000, 100000000);

        }

    }

    for (int i = 0; i < rows; i++)
    {
        if (arr[i][i] % 2 == 0)
        {
            count++;
        }
    }

    int* arr1 = new int[count];
    func(arr, arr1,rows);
    std::cout << " Получившийся массив: \n";
    for (int i = 0; i < count; i++)
    {
        std::cout << arr1[i] << " ";
    }

    std::cout << std::endl;
    std::cout << "Произведение элементов массива: ";
    std::cout << multi(arr1, count) << "\n";

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] arr1;
    std::cout << " Хотите запустить программу еще раз? \n";
    std::cout << "  1 - да; 2 - нет\n";
    kk = check(kk, 1, 2);
}
}

