

#include <iostream>
void del(int** const arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
void fun(int** const arr, int* const arr1, int rows, int cols)
{
	int k = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (j % 2 == 0)
			{
				if (arr[i][j] % 2 != 0)
				{
					arr1[k] = arr[i][j];
					k++;
				}
			}
		}
	}
}
double sum(int* const arr1,int count)
{
	double result = 0;
	for (int i = 0; i < count; i++)
	{
		result += arr1[i];

	}
	return (result / 2);
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
int sum(int a, int b)
{
	return a + b;
}
int main()
{
	int kk = 1;
	while (kk == 1)
	{
		setlocale(LC_ALL, "Russian");
		std::cout << "Задание 5\n";
		std::cout << "Дан двумерный динамический массив целых чисел. Значения элементов данного массива ввести с клавиатуры.\n";
		std::cout << "Создать динамический массив из элементов, расположенных в четных столбцах данного массива и имеющих нечетное значение.\n";
		std::cout << "Вычислить среднее арифметическое элементов динамического массива.Вывести результат на экран.\n";
		std::cout << "Выполнил Станишевский Александр (группа 253505)\n";
		int rows = 0, cols = 0, count = 0;
		std::cout << "Введите количество строк: \n";
		rows =check(rows,1, 100000000);
		std::cout << "Введите количество столбцов: \n";
		cols =check(cols, 1, 100000000); 
		int** arr = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
		}
		std::cout << "Введите элементы массива: \n";
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = check(arr[i][j], -1000000000, 100000000);
			}
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (j % 2 == 0)
				{
					if (arr[i][j] % 2 != 0)
					{
						count++;
					}
				}
			}
		}
		int k = 0;
		int* arr1 = new int[count];
		fun(arr, arr1, rows, cols);
		double result = 0;
		std::cout << "Полученный массив: ";
		for (int i = 0; i < count; i++)
		{
			std::cout << arr1[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Среднее арифметическое элементов массива: ";
		std::cout << sum(arr1,count) << "\n";
		del(arr, rows);
		delete[] arr1;
		int(*f[100])(int a, int b) = { sum };
		std::cout << f[0](2, 3);
		std::cout << " Хотите запустить программу еще раз? \n";
		std::cout << "  1 - да; 2 - нет\n";
		kk = check(kk, 1, 2);
		

	}
}

