

#include <iostream>
#include < stdio.h >
int ccount(char* const arr, int n)
{
	int count = 0;
	for (int j = 0; j < n - 1; j++)
	{
		if (arr[j] >= '0' && arr[j] <= '9' || arr[j] == '-')
		{
			count++;
		}
	}
	return count;
}
void func(char* const arr,char* const arr1, int count, int n)
{
	int i = 0;
	for (int j = 0; j < n - 1;)
	{
		if (arr[j] >= '0' && arr[j] <= '9' || arr[j] == '.' || arr[j] == '-') {
			if (arr[j] == '.')
			{
				while (arr[j + 1] >= '0' && arr[j + 1] <= '9')
					j++;
				
				j++;
			}
			if (arr[j] >= '0' && arr[j] <= '9' || arr[j] == '-') {
				if (arr[j] == '-' && arr[j] >= '0' && arr[j] <= '9') {
					j++;
					std::cout << '-';
				}
				arr1[i] = arr[j];
				std::cout << arr1[i];

				if (arr[j] >= '0' && arr[j] <= '9' && arr[j + 1] >= 'a' && arr[j + 1] <= 'z')
					std::cout << " ";
			}
			else std::cout << " ";
				i++;
			
		}
		j++;
	}
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
int main()
{
	setlocale(LC_ALL, "ru");
	
	int kk = 1;
	while (kk == 1)
	{
		std::cout << "Задание 1\n ";
		std::cout << "Из строки, состоящей из букв, цифр, запятых, точек, знаков + (плюс) и –(минус), выделить подстроку, которая соответствует записи целого числа\n";
		std::cout << " Выполнили Станишевский Александр (группа 253505)\n";



		int a = 0, n = 0, i = 0, j = 0, count = 0;

		const int size = 80;
		char* arr = new char[size];

		std::cout << "Введите вашу строку: \n";
		while (arr[i] != '\n')
		{
			arr[i] = getchar();

			n++;
			if (arr[i] == '\n')
				continue;
			i++;
		}
		if (n > 80)
		{
			std::cout << " Символов больше, чем 80!";
			kk = 2;
		}
		std::cout << "Результат: ";
		count = ccount(arr, n);
		char* arr1 = new char[count];
		func(arr, arr1, count, n);
		std::cout << std::endl;


		delete[] arr;
		delete[] arr1;
		std::cout << "Хотите перезапустить программу?\n";
		std::cout << " 1 - Да, 2 - Нет\n";
		kk = check(kk, 1, 2);
	}

}
