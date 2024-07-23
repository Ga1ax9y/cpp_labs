
#include <string>
#include <iostream>
using namespace std;
int check(int x, int min, int max)
{
	while (scanf_s("%d", &x) != 1 || x < min || x >max || getchar() != '\n')
	{
		printf("Ошибка!\n");
		rewind(stdin);
	}
	return x;
}
void skip(char* const arr,int n, char c)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] == c)
			continue;
		std::cout << arr[i];
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int kk = 1;
	while (kk == 1)
	{
		std::cout << "Задание 2\n";
		std::cout << " В тексте удалить указанный символ везде, где он встречается.\n";
		std::cout << "Выполнил Станишевский Александр (группа 253505)\n";
		int i = 0, n = 0; char c;
		int size = 255;
		
		char* arr = new char[size];
		
		std::cout << "Введите стоку: \n";
		while (arr[i] != '\n')
		{
			arr[i] = getchar();

			n++;
			if (arr[i] == '\n')
				continue;
			i++;
		}
		
		std::cout << "Введите символ,который хотите удлить: ";
		std::cin >> c;
		skip(arr, n, c);
		std::cout << std::endl;



		delete[] arr;
		std::cout << "Хотите перезапустить программу?\n";
		std::cout << " 1 - Да, 2 - Нет\n";
		kk = check(kk, 1, 2);
		
	}
}

