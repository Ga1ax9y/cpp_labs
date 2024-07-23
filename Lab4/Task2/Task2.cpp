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
	int  k = 1;
	setlocale(LC_ALL, "Russian");
	std::cout << " Вариант 6\n";
	std::cout << " Ввести  одномерный статический массив из k чисел\n";
	std::cout << " Необходимо инициализировать статический двумерный массив целых чисел. Опредилить количество четных чисе на главной и побочной диагоналях\n";
	std::cout << " Выполнил Станишевский Александр Дмитриевич (группа 253505)\n";
	while (k == 1)
	{
			int const rows1 = 50, cols1 = 50;
			int k = 0, s = 0;
			std::cout << " Введите количество строк N: \n ";
			int rows = Enter();
			std::cout << " Введите  количество столбцов M: \n ";
			int cols = Enter();


			int arr[rows1][cols1];
			/*int** arr = new int* [rows];
			for (int i = 0; i < rows; i++)
			{
				arr[i] = new int[cols];
			}*/
			

			for (int i = 0; i < rows; i++)
			{
				
				for (int q = 0; q < cols; q++)
				{
					
					std::cout << " Введите элемент " << i + 1 << " строки " << ", " << q + 1 << " столбца: \n";
					while (!(std::cin >> arr[i][q]) || (std::cin.peek() != '\n'))
					{
						std::cin.clear();
						while (std::cin.get() != '\n');
						std::cout << "Неверный ввод, повторите еще раз:\n";
					}

				}
			}
			for (int i = 1; i < rows + 1; i++)
			{
				for (int q = 1; q < cols + 1; q++)
				{
					if (i + q == cols + 1)
					{
						if (arr[i - 1][q - 1] % 2 == 0 && arr[i - 1][q - 1] != 0)
						{
							k++;
						}
					}
				}
			}
			for (int i = rows; i > 0; i--)
			{
				for (int q = cols; q > 0; q--)
				{
					if (i + q == cols + 1)
					{
						if (arr[i - 1][q - 1] % 2 == 0 && arr[i - 1][q - 1] != 0)
						{
							s++;
						}
					}
				}
			}
			std::cout << " Количество четных элементов на главной диагонали равно " << k << "\n";

			std::cout << " Количество четных элементов на побочной диагонали равно " << s << "\n";
			std::cout << std::endl;
			k = repeat();
		}
	
	}

