

#include <iostream>
#include <string>
void func(char* const arr,int* const probel,int* const first,int a)
{
	int n = 0,j = 0;
	char temp = 0;
	for (int i = 0; i < a; i++)
	{
		if (arr[i] == ' ')
		{
			probel[j] = i;
			j++;
		}
	}
	for (int i = 1; i < j + 1; i++)
	{
		first[0] = 0;
		if( j %2 !=0 || j == 0)
		first[i] = probel[i] + 1;
	}
	int i = 0;

	for (int p = 0; p < j;) {
		while ((arr[probel[p] + i+1 ]) != ' ' && arr[probel[p] + i+1 ] != '\0')
		{
			

				temp = arr[first[n] + i];
			arr[first[n] + i] = arr[probel[p] + 1 + i];
			arr[probel[p] + 1 + i] = temp;
			i++;

		}

		i = 0;
		n++;
		p += 2;

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
	setlocale(LC_ALL, "Russian");
	int kk = 1;
	while (kk == 1)
	{
		std::cout << "Задание 3\n";
		std::cout << " Ввести строку символов, содержащую два или более слов, разделенных пробелами.Написать функцию, меняющую местами все четные и нечетные слова в строке \n";
		std::cout << "Выполнил Станишевский Александр (группа 253505)\n";
		char* arr = new char[255];
		int  a = 0;

		int* probel = new int[20];
		int* first = new int[20];
		std::cout << "Введите строку: ";
		std::cin.getline(arr, 255);
		a = strlen(arr);
		func(arr, probel, first, a);
		std::cout << "Результат: ";
		std::cout << arr << std::endl;


		delete[] arr;
		std::cout << "Хотите перезапустить программу?\n";
		std::cout << " 1 - Да, 2 - Нет\n";
		kk = check(kk, 1, 2);
		
	}
}

