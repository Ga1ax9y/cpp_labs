

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
int modul(int a)
{
	if (a >= 0)
		a = a;
	if (a < 0)
		a = -a;
	return a;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int kk = 1;
	while (kk == 1)
	{
		std::cout << "Задание 2\n";
		std::cout << "Найдите сумму двоичных чисел, заданных в естественной форме.\n ";
		std::cout << "Сложение выполните в дополнительном коде.Ответ выразите в прямом коде. \n";
		std::cout << "Выполнил Станишевский Александр (группа 253505)\n";
		int a=0, b=0, counta = 0, countb = 0, del = 0, c = 0, count = 0, trk = 0, n = 0, k = 0, tempa, tempb, sum = 0;
		const int size = 40;
		bool p = true;
		int ota[size] = {};
		int result[50] = {};
		int fir[size] = { 1 };
		std::cout << "Введите первое число: ";
		 a = check(a,-1000000,1000000);
		tempa = a;
		if (a >= 0) {
			do //o(n)
			{
				ota[counta] = (a % 2);
				counta++;
				a /= 2;
				if (counta > 8)
					n++;

			} while (a != 0);
		}
		if (a < 0)
		{
			do //O(n)
			{
				ota[counta] = (modul(a) % 2);
				counta++;
				a = modul(a) / 2;
				del++;
				if (counta >= 7)
					n++;
			} while (a != 0);


			ota[7 + n] = 1;
			for (int i = 0; i < 7 + n; i++) { //O(n)
				if (ota[i] == 0)
				{

					ota[i] = 1;

				}
				else if (ota[i] == 1)
				{
					ota[i] = 0;

				}


			}
			for (int i = 0; i < 7 + n; i++) //O(n)
			{

				if (ota[i] == 0 && fir[i] == 0) {
					ota[i] = 0 + c; c = 0;
				}
				else if (ota[i] == 0 && fir[i] == 1)
					ota[i] = 1 - c;
				else if (ota[i] == 1 && fir[i] == 0)
					ota[i] = 1 - c;
				else if (ota[i] == 1 && fir[i] == 1) {

					ota[i] = 0 + c;
					c = 1;

				}

			}

		}




		int otb[size] = {};
		std::cout << "Введите второе число: ";
		b = check(b, -1000000, 1000000);
		tempb = b;
		sum = tempa + tempb;
		c = 0;
		if (b >= 0) {
			do //O(n)
			{
				otb[countb] = (b % 2);
				countb++;
				b /= 2;
				if (countb > 8)
					k++;
			} while (b != 0);

		}
		if (b < 0)
		{
			do //O(n)
			{
				otb[countb] = (modul(b) % 2);
				countb++;
				b = modul(b) / 2;
				del++;
				if (countb >= 7)
					k++;
			} while (b != 0);


			otb[7 + k] = 1;
			for (int i = 0; i < 7 + k; i++) { //O(n)
				if (otb[i] == 0)
				{

					otb[i] = 1;

				}
				else if (otb[i] == 1)
				{
					otb[i] = 0;

				}


			}
			for (int i = 0; i < 7 + k; i++) //O(n)
			{

				if (otb[i] == 0 && fir[i] == 0) {
					otb[i] = 0 + c; c = 0;
				}
				else if (otb[i] == 0 && fir[i] == 1)
					otb[i] = 1 - c;
				else if (otb[i] == 1 && fir[i] == 0)
					otb[i] = 1 - c;
				else if (otb[i] == 1 && fir[i] == 1) {

					otb[i] = 0 + c;
					c = 1;

				}

			}

		}

		c = 0;
		for (int i = 0; i < size; i++) //O(n)
		{

			if (ota[i] == 0 && otb[i] == 0) {
				result[i] = 0 + c; c = 0;
			}
			else if (ota[i] == 0 && otb[i] == 1)
				result[i] = 1 - c;
			else if (ota[i] == 1 && otb[i] == 0)
				result[i] = 1 - c;
			else if (ota[i] == 1 && otb[i] == 1)
			{

				result[i] = 0 + c;
				c = 1;

			}

		}
		std::cout << "Результат: ";
		int otasum[40] = {};
		int countsum = 0, f = 0;
		if (tempa == -(tempb))
			std::cout << "00000000";
		else if (sum < 0)
		{
			do //O(n)
			{
				otasum[countsum] = (modul(sum) % 2);
				countsum++;
				sum = modul(sum) / 2;
				del++;
				if (countsum > 7)
					f++;
			} while (sum != 0);


			otasum[7 + f] = 1;
			for (int i = 0; i < 7 + f; i++) { //O(n)
				if (otasum[i] == 0)
				{

					otasum[i] = 1;

				}
				else if (otasum[i] == 1)
				{
					otasum[i] = 0;

				}
			}
			for (int i = 7 + f; i >= 0; i--) //O(n)
				std::cout << otasum[i];
		}






		else if (tempa > 0 && tempb > 0) {
			for (int i = 7 + (n + k); i >= 0; i--) //O(n)
			{

				std::cout << result[i];
			}
		}
		/*else if (tempa < 0 && tempb < 0) {
			for (int i = 7+(n) ; i >= 0; i--)
			{

				std::cout << result[i];
			}
		}*/
		else {
			for (int i = 7; i >= 0; i--) //O(n)
			{

				std::cout << result[i];
			}
		}
		std::cout << std::endl;
		std::cout << "Вы хотите перезапустить программу?\n";
		std::cout << "1 - да, 2 - нет\n";
		kk = check(kk, 1, 2);
	}
}

