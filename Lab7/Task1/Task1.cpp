

#include <iostream>
#include <string>
int check(int x, int min, int max)
{
	while (scanf_s("%d", &x) != 1 || x < min || x >max || getchar() != '\n') //O(n)
	{
		printf("Ошибка!\n");
		rewind(stdin);
	}
	return x;
}
bool prov(std::string str)
{
	bool p = false;
	for (int i = 0; i < str.size(); i++) //O(n)
	{
		while (str[i] != '0' && str[i] != '1') { //O(n)
			printf( "Ошибка!\n");
			return 0;
		}
	}
	 p = true;
	return p;
}
int main()
{
	
	setlocale(LC_ALL, "Russian");
	int kk = 1;
	while (kk == 1)
	{
		std::string str;
		bool p = true;


		std::cout << "Задание 1\n";
		std::cout << "Перевести код из прямого в обратный\n";
		std::cout << "Выполнил Станишевский Александр (группа 253505)\n";

		std::cout << "Введите число в прямом коде: ";
		
		std::cin >> str;
		while (prov(str) == false) //O(n)
		{
			
		    std::cin >> str;
			
		}
		for (int i = 1; i < str.size(); i++) //O(n)
		{

			if (str[i] == '1')
				str[i] = '0';
			else if (str[i] == '0')
				str[i] = '1';
		}
		std::cout << "Число в обратном коде: ";
		std::cout << str << std::endl;
		std::cout << "Вы хотите перезапустить программу?\n";
		std::cout << "1 - да, 2 - нет\n";
		kk =check(kk, 1, 2);
	}
	
	
}

