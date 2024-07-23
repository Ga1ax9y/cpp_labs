

#include <iostream>
void fun(double** const arr, int rows, int cols)
{
	int count = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] == 0)
			{
				count++;
				std::cout << " Индекс нулевого значения: " << i << " " << j << "\n";
			}
		}
	}
	std::cout << "Общее количество нулевых значений: " << count << "\n";
}
int check(int x, int min, int max)
{
	while (scanf_s("%d", &x) != 1 || x < min || x >max || getchar() != '\n')
	{
		printf("Ошибка!\n");
		rewind(stdin);
	}
	return x;
}
void rev(double** const arr, int rows, int cols)
{
	std::cout << "Элементы массива: \n";
	for (int i = rows - 1; i >= 0; i--)
	{
		for (int j = cols - 1; j >= 0; j--)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "Элементы массива: ";
}
int main()
{
	int kk = 1;
	while (kk == 1)
	{
	setlocale(LC_ALL, "Russian");
	std::cout << "Задание 4\n";
	std::cout << "Создать двумерный динамический массив вещественных чисел. Определить, встречаются ли среди них элементы с нулевым значением.\n";
	std::cout << "Если встречаются такие элементы, то определить их индексы и общее количество. Переставить элементы этого массива в обратном порядке и вывести на экран.\n";
	std::cout << "Выполнил Станишевский Александр (группа 253505)\n";
	int count = 0;
	int rows = 0, cols = 0;
	std::cout << "Введите количество строк: ";
	rows = check(rows, 1, 100000000);
	std::cout << "Введите количество столбцов: ";
	cols = check(cols, 1, 100000000);
	double** arr = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new double[cols];
	}
	std::cout << "Введите элементы массива: ";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = check(arr[i][j], -1000000000, 100000000);
		}
	}
	 fun(arr, rows, cols);

	rev(arr, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	std::cout << " Хотите запустить программу еще раз? \n";
	std::cout << "  1 - да; 2 - нет\n";
	kk = check(kk, 1, 2);
}
}

