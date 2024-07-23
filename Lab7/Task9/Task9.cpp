

#include <iostream>
int check(int x, int min, int max)
{
	while (scanf_s("%d", &x) != 1 || x < min || x >max || getchar() != '\n') //O(n)
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
	while (kk == 1) //O(n)
	{
		std::cout << "Задание 9\n";
		std::cout << "Рабы и бочки\n";
			std::cout << "Выполнил Станишевский Александр (группа 253505)\n";
		int a = 0,tempa;
		std::cout << "Введите номер отравленной бочки: ";
		a = check(a, 1, 240);
		std::cout << std::endl;
		tempa = a;
		int troika[5]= {};
		for (int i = 4; i >= 0; i--) //O(n)
		{
			troika[i] = a % 3;
			a /= 3;
		}
		
		for (int i = 0; i < 5; i++) //O(n)
		{
			if (troika[i] == 0)
				std::cout << i+1 << " раб выпил из бочек, но они были не отравлены. Раб выжил\n";
			if (troika[i] == 1)
				std::cout << i+1 << " раб выпил из бочек, и умер в течение первых 24 часа\n";
			if (troika[i] == 2)
				std::cout << i+1 << " раб, выпив из бочек в первые 24 часа  выжил, но в следующие умер \n";
		}
		std::cout << "Оказалось, что отравленная бочка была под номером " << tempa << "\n";
		std::cout << "\nВы хотите перезапустить программу?\n";
		std::cout << "1 - да, 2 - нет\n";
		kk = check(kk, 1, 2);

	}
}


