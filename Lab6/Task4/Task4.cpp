

#include <iostream>
#include <string>
void reform(std::string str, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?')
			continue;
		else if (str[i] == 'c' && str[i + 1] == 'e' || str[i] == 'c' && str[i + 1] == 'i' || str[i] == 'c' && str[i + 1] == 'y')
			str.replace(i, 1, 1, 's');
		else if (str[i] == 'C' && str[i + 1] == 'e' || str[i] == 'C' && str[i + 1] == 'i' || str[i] == 'C' && str[i + 1] == 'y')
			str.replace(i, 1, 1, 'S');
		else if (str[i] == 'c')
			str.replace(i, 1, 1, 'k');
		else if (str[i] == 'C')
			str.replace(i, 1, 1, 'K');
		else if (str[i] == 'q' && str[i + 1] == 'u')
		{
			str.replace(i, 1, 1, 'k');
			str.replace(i + 1, 1, 1, 'v');
		}
		else if (str[i] == 'Q' && str[i+1] == 'U')
		{
			str.replace(i, 1, 1, 'K');
			str.replace(i + 1, 1, 1, 'V');
		}
		else if (str[i] == 'q')
			str.replace(i, 1, 1, 'k');
		else if (str[i] == 'Q')
			str.replace(i, 1, 1, 'K');
		else if (str[i] == 'X')
		{
			str.replace(i, 1, 2, 's');
			str.replace(i, 1, 1, 'K');

		}
		else if (str[i] == 'x')
		{
			str.replace(i, 1, 2, 's');
			str.replace(i, 1, 1, 'k');
			len++;
		}
		else if (str[i] == 'W')
			str.replace(i, 1, 1, 'V');
		else if (str[i] == 'w')
			str.replace(i, 1, 1, 'v');
		else if (str[i] == 'p' && str[i+1] == 'h')
		{
			str.replace(i, 2, 1, 'f');
			len--;
		}
		else if (str[i] == 'p' && str[i+1] == 'H')
		{
			str.replace(i, 2, 1, 'f');
			len--;
		}
		else if (str[i] == 'P' && str[i+1] == 'h')
		{
			str.replace(i, 2, 1, 'F');
			len--;
		}
		else if (str[i] == 'P' && str[i+1] == 'H')
		{
			str.replace(i, 2, 1, 'F');
			len--;
		}
		else if (str[i] == 'o' && str[i+1] == 'o')
		{
			str.replace(i, 2, 1, 'u');
			len--;
		}
		else if (str[i] == 'o' && str[i+1] == 'O')
		{
			str.replace(i, 2, 1, 'u');
			len--;
		}
		else if (str[i] == 'O' && str[i+1] == 'o')
		{
			str.replace(i, 2, 1, 'U');
			len--;
		}
		else if (str[i] == 'O' && str[i+1] == 'O')
		{
			str.replace(i, 2, 1, 'U');
			len--;
		}
		else if (str[i] == 'e' && str[i+1] == 'e')
		{
			str.replace(i, 2, 1, 'i');
			len--;
		}
		else if (str[i] == 'e' && str[i+1] == 'E')
		{
			str.replace(i, 2, 1, 'e');
			len--;
		}
		else if (str[i] == 'E' && str[i+1] == 'e')
		{
			str.replace(i, 2, 1, 'E');
			len--;
		}
		else if (str[i] == 'E' && str[i+1] == 'E')
		{
			str.replace(i, 2, 1, 'E');
			len--;
		}
		else if (str[i] == 't' && str[i+1] == 'h')
		{
			str.replace(i, 2, 1, 'z');
			len--;
		}
		else if (str[i] == 't' && str[i+1] == 'H')
		{
			str.replace(i, 2, 1, 'z');
			len--;
		}
		else if (str[i] == 'T' && str[i+1] == 'h')
		{
			str.replace(i, 2, 1, 'Z');
			len--;
		}
		else if (str[i] == 'T' && str[i+1] == 'H')
		{
			str.replace(i, 2, 1, 'Z');
			len--;
		}
		else if (str[i] == 'Y' && str[i + 1] == 'o' && str[i + 2] == 'u')
		{
			str.replace(i, 3, 1, 'U');
			len -= 2;
			}
		else if (str[i] == 'y' && str[i + 1] == 'o' && str[i + 2] == 'u')
		{
			str.replace(i, 3, 1, 'u');
			len -= 2;
	    }
		else if (str[i] == 'y' && str[i + 1] == 'O' && str[i + 2] == 'U')
		{
			str.replace(i, 3, 1, 'u');
			len -= 2;
		}
		else if (str[i] == 'y' && str[i + 1] == 'o' && str[i + 2] == 'U')
		{
			str.replace(i, 3, 1, 'u');
			len -= 2;
		}
		else if (str[i] == 'y' && str[i + 1] == 'O' && str[i + 2] == 'U')
		{
			str.replace(i, 3, 1, 'u');
			len -= 2;
		}
		else if (str[i] == 'Y' && str[i + 1] == 'O' && str[i + 2] == 'u')
		{
			str.replace(i, 3, 1, 'U');
			len -= 2;
		}
		else if (str[i] == 'Y' && str[i + 1] == 'O' && str[i + 2] == 'U')
		{
			str.replace(i, 3, 1, 'U');
			len -= 2;
		}
		else if (str[i] == 'y' && str[i + 1] == 'O' && str[i + 2] == 'u')
		{
			str.replace(i, 3, 1, 'u');
			len -= 2;
		}
	}
	for (int i = 0; i < len; i++)
	{
		int a = 0, b = i + 1;
		while ((int)str[i] == (int)str[b] || (int)str[i] == (int)str[b] - 32 || (int)str[i] - 32 == (int)str[b])
		{
			a++;
			b++;
		}
		if (a)
		{
			str.replace(i, a + 1, 1, str[i]);
			len -= a;
		}
	}
	std::cout << "Результат: " << str << std::endl;
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
		std::cout << "Задание 4\n";
		std::cout << "Реформа английского языка\n";
		std::cout << "Выполнил Станишеский Александр (группа 253505)\n";
		int len;

		std::string str;
		std::cout << "Введите стороку: \n";
		std::getline(std::cin, str);
		len = str.size();
		reform(str, len);

		std::cout << "Хотите перезапустить программу?\n";
		std::cout << " 1 - Да, 2 - Нет\n";
		kk = check(kk, 1, 2);

	}
}

