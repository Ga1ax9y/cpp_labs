#include <iostream>
#include <Windows.h>

void Fillarr(double* const arr, const int size) //const!
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
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
	int kk = 1;
	while (kk == 1)
	{
		setlocale(LC_ALL, "Russian");
		double(*recfun)(double* a, int size) = (double(*)(double*, int))GetProcAddress(LoadLibrary(L"C:\\Users\\Alexander\\source\\repos\\dynam\\x64\\Debug\\dynam.dll"), "recfun");
		std::cout << " Задание 2\n";
		std::cout << "Для заданного одномерного массива B из N элементов найти сумму выражений, вычисляемых по формуле sinBi * cosBi\n";
		std::cout << "Рекурсивную функцию применять каждый раз отдельно для каждой из половин массива\n";
		std::cout << "Рекурсивные вызовы заканчивать, когда останется только один элемент\n";
		std::cout << "Выполнил Станишевский Александр (группа 253505)\n";
		int size = 0;
		std::cout << "Введите размер массива: ";
		size = check(size, 1, 100000000);
		double* arr = new double[size];
		std::cout << "Введите элементы массива: ";
		for (int i = 0; i < size; i++)
		{
			
			arr[i] = check(arr[i],-10000000,10000000);
		}
		std::cout << "Сумма выражений равна ";
		std::cout << recfun(arr, size) << "\n";
		delete[] arr;
		std::cout << " Хотите запустить программу еще раз? \n";
		std::cout << "  1 - да; 2 - нет\n";
		kk = check(kk, 1, 2);
	}
	
}