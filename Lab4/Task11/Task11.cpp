#include <iostream>

int Enter() {
	int a;
	while (!(std::cin >> a) || (std::cin.peek() != '\n') || a <= 1)
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "Неверный ввод, повторите еще раз:\n";
	}
	return a;
}

int repeat() {
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
	std::cout << "Задача 11\n" << " На вход подается поле для игры в сапер размером NxM символов, где символ '.' означает пустое место, а символ '*' - бомбу.\n Требуется дополнить это поле числами, как в оригинальной игре\n" << " Выполнил Станишевский Александр Дмитриевич (группа 253505)\n";
	int kk = 1; bool g;
	int  count = 0, f = 49;
	while (kk)
	{
		std::cout << " Введите количество строк: ";
		int rows = Enter();
		std::cout << " Введите количество столбцов: ";
		int cols = Enter();
		 char** arr = ( char**)malloc((rows+2) * sizeof( char*));
		for (int i = 0; i < rows+2; i++)
		{
			arr[i] = ( char*)malloc((cols+2) * sizeof( char));
		}

		std::cout << "Введите * (бомба) или .(пустое место): \n";
		for (int i = 1; i < rows + 1; i++)
		{
			for (int j = 1; j < cols + 1; j++)
			{
				arr[0][j] = 36;
				arr[i][0] = 36;
				arr[rows + 1][j] = 36;
				arr[i][cols + 1] = 36;
				
				g = true;
				while (g)
				{
					std::cout << "Введите элемент " << i << " строки и " << j << " столбца: ";
					g = false;
					std::cin >> arr[i][j];
					if (arr[i][j] != '.' && arr[i][j] != '*' || std::cin.peek() != '\n')
					{
						g = true;
						std::cout << "Неверный ввод, повторите попытку!\n";

						std::cin.clear();
						std::cin.ignore(9000, '\n');
					}
				} 

				
			}
		}
		////////////////////////////////////////////////////////////////////////
		for (int i = 0; i < rows + 1; i++)
		{
			for (int j = 0; j < cols + 1; j++)
			{
				if (arr[i][j] == '.')
				{
					if (arr[i + 1][j] == '*')
						count++;
					if (arr[i - 1][j] == '*')
						count++;
					if (arr[i][j + 1] == '*')
						count++;
					if (arr[i][j - 1] == '*')
						count++;
					if (arr[i - 1][j - 1] == '*')
						count++;
					if (arr[i + 1][j + 1] == '*')
						count++;
					if (arr[i - 1][j + 1] == '*')
						count++;
					if (arr[i + 1][j - 1] == '*')
						count++;
				}

				if (arr[i][j] != '*')
					if (count != 0)
						arr[i][j] = count + 48;

				count = 0;

			}

		}


		//////////////////////////////////////////////////////////////////////////////
		for (int i = 1; i < rows + 1; i++)
		{
			for (int j = 1; j < cols + 1; j++)
			{
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl;
		}

		for (int i = 0; i < rows+2; i++)
			free(arr[i]);
		free(arr);

		
		kk = repeat();
	}
	
}


