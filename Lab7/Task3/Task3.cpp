#include<iostream>
#include<string> 

int check123(int x, int min, int max)
{
	while (scanf_s("%d", &x) != 1 || x < min || x >max || getchar() != '\n') //O(n)
	{
		printf("Ошибка!\n");
		rewind(stdin);
	}
	return x;
}
std::string str_sum(std::string str1, std::string str2, std::string base_str, int base) {
	std::string result = "0";
	int ostatok = 0, num;

	while (str1.size() < str2.size())// O(n)
	{
		str1 = '0' + str1;
	}
	while (str2.size() < str1.size())// O(n)
	{
		str2 = '0' + str2;
	}
	while (result.size() < str1.size())// O(n)
	{
		result = '0' + result;
	}
	for (int i = result.size() - 1; i >= 0; i--)// O(n)
	{
		num = (base_str.find(str1[i]) + base_str.find(str2[i]) + ostatok);
		ostatok = num / base;
		result[i] = base_str[num % base];
	}
	if (ostatok == 1)
		result.insert(0, 1, base_str[ostatok]);
	return result;
}

std::string str_sub(std::string str1, std::string str2, std::string base_str, int base) {
	std::string res_str = "0", temp;
	int ost = 0, num;
	bool flag = 0;
	if (str1.size() < str2.size())
	{
		while (str1.size() < str2.size())  //0(n)
		{
			str1 = '0' + str1;
		}
	}
	if (str2.size() < str1.size())
	{
		while (str2.size() < str1.size()) //O(n)
		{
			str2 = '0' + str2;
		}
	}
	if (str2 > str1)
	{
		temp = str1;
		str1 = str2;
		str2 = temp;
		flag = 1;
	}
	// O(n) 
	while (res_str.size() < str1.size())
	{
		res_str = '0' + res_str;
	}
	// O(n) 
	for (int i = res_str.size() - 1; i >= 0; i--)
	{
		num = base_str.find(str1[i]) - base_str.find(str2[i]) + ost;
		if (num < 0)
		{
			num += base;
			ost = -1;
		}
		else
		{
			ost = 0;
		}
		res_str[i] = base_str[num];
	}
	// O(n) 
	while (res_str[0] == '0' && res_str.size() > 1)
		res_str.erase(0, 1);
	if (flag)
		res_str = '-' + res_str;
	return res_str;
}

int check() {
	std::string s;
	while (true) {
		std::cin >> s;
		if (s == "37" || s == "38" || s == "39") {
			std::cout << "Ошибка!\n";
			continue;
		}
		if (s.size() == 1) {
			if (s[0] > '0' && s[0] <= '9') {
				return stoi(s);
			}
			else {
				std::cout << "Ошибка!\n";
				continue;
			}
		}
		else if (s.size() == 2) {
			if (s[0] >= '1' && s[0] <= '3' && s[1] >= '0' && s[1] <= '9') {
				return stoi(s);
			}
			else {
				std::cout << "Ошибка!\n";
				continue;
			}
		}
		else {
			std::cout << "Ошибка!\n";
			continue;
		}
	}
}

std::string check2(int base) {
	std::string base_str = { "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	std::string prob;
	while (true) {
		std::cin >> prob;

		if (prob[0] != '-') {
			if (prob.size() > 30) {
				std::cout << "Ошибка!\n";
				continue;
			}
			int kol = 0;
			int lol = 0;
			for (int i = 0; i < prob.size(); i++) { //O(n)
				for (int q = 0; q < base; q++) { //O(n)
					if (prob[i] == base_str[q]) {
						kol++;
						break;
					}
				}
				if (kol == 0) {
					continue;
				}
				else {
					kol = 0;
					lol++;
				}
			}
			if (lol == prob.size()) {
				return prob;
			}
			else {
				std::cout << "Ошибка!\n";
			}
		}
		else {
			if (prob.size() > 30) {
				std::cout << "Ошибка!\n";
				continue;
			}
			int kol = 0;
			int sc = 0;
			for (int i = 1; i < prob.size(); i++) { //O(n)
				for (int q = 0; q < base; q++) {//O(n)
					if (prob[i] == base_str[q]) {
						kol++;
						break;
					}
				}
				if (kol == 0) {
					continue;
				}
				else {
					sc++;
				}
			}
			if (sc == prob.size() - 1) {
				return prob;
			}
			else {
				std::cout << "Ошибка!\n";
			}
		}

	}



}

int main() {
	setlocale(LC_ALL, "Russian");
	int kk = 1;
	while (kk == 1)
	{
		int base;
		std::string str1, str2, base_str = { "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ" }, sum_str, sub_str;
		std::cout << "Задание 3\n";
		std::cout << "Осуществить сложение и вычитание чисел в заданной системе счисления\n";
		std::cout << "Выполнил Станишевский Александр (группа 253505)\n";

		std::cout << "Введите основание системы счисления:\n";

		base = check();
		std::cout << "\nВведите два числа:\n";
		str1 = check2(base);
		str2 = check2(base);
		if (str1[0] != '-' && str2[0] != '-')
		{
			sum_str = str_sum(str1, str2, base_str, base);
			std::cout << "\nСумма:\n" << sum_str;
			sub_str = str_sub(str1, str2, base_str, base);
			std::cout << "\nРазность:\n" << sub_str;
		}


		if (str1[0] == '-' && str2[0] != '-')
		{
			str1.erase(0, 1);
			sum_str = str_sub(str2, str1, base_str, base);
			std::cout << "\nСумма:\n" << sum_str;
			sub_str = str_sum(str1, str2, base_str, base);
			std::cout << "\nРазность:\n" << '-' + sub_str;
		}

		if (str1[0] != '-' && str2[0] == '-')
		{
			str2.erase(0, 1);
			sum_str = str_sub(str1, str2, base_str, base);
			std::cout << "\nСумма:\n" << sum_str;
			sub_str = str_sum(str1, str2, base_str, base);
			std::cout << "\nРазность:\n" << sub_str;
		}


		if (str1[0] == '-' && str2[0] == '-')
		{
			str1.erase(0, 1);
			str2.erase(0, 1);
			sum_str = str_sum(str1, str2, base_str, base);
			std::cout << "\nСумма:\n" << '-' + sum_str;
			sub_str = str_sub(str1, str2, base_str, base);
			if (sub_str[0] == '-')
				sub_str.erase(0, 1);
			else
				sub_str = '-' + sub_str;
			if (sub_str[1] == '0')
				sub_str = '0';
			std::cout << "\nРазность:\n" << sub_str;
		}
		std::cout << "\nВы хотите перезапустить программу?\n";
		std::cout << "\n1 - да, 2 - нет\n";
		kk = check123(kk, 1, 2);
	}
}
