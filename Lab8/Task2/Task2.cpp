#include <algorithm>
#include <iterator>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <climits>
using namespace std;

struct student {
	std::string lastname;
	std::string firstname;
	std::string patronumic;
	std::string address;
	int math = 0;
	int russian = 0;
	double mid = 0;
};
void check_name(student* information, int index, bool search)
{
	while (true)
	{
		bool check = 1, space_in_a_row = 0;
		int times = 0;
		std::string name_of;

		if (!search)
		{
			std::cout << "Введите фамилию " <<  "\n";
			std::getline(std::cin, information[index].lastname);
		}
		else
		{
			std::cout << "Введите фамилию " <<  "\n";
			std::getline(std::cin, information[index].lastname);
		}

		long long dlina = information[index].lastname.length();
		name_of = information[index].lastname;

		while (times < dlina)
		{
			space_in_a_row = 0;

			if (name_of[times] == ' ' && times == 0)
			{
				check = 0;
				break;
			}

			if (!isalnum(name_of[times]) && name_of[times] != ' ')
			{
				check = 0;
				break;
			}

			if (name_of[times] == ' ' && name_of[times + 1] == ' ')
			{
				check = 0;
				space_in_a_row = 1;
				break;
			}

			if (space_in_a_row)
			{
				break;
			}

			times++;
		}
		if (check)
		{
			break;
		}

		printf_s("Некорректный ввод, попробуйте снова:\a\n");
		information[index].lastname.erase(0, dlina);

		rewind(stdin);
	}
}
void check_fname(student* information, int index, bool search)
{
	while (true)
	{
		bool check = 1, space_in_a_row = 0;
		int times = 0;
		std::string name_of;

		if (!search)
		{
			std::cout << "Введите имя " <<  "\n";
			std::getline(std::cin, information[index].firstname);
		}
		else
		{
			std::cout << "Введите измененное имя " <<  "\n";
			std::getline(std::cin, information[index].firstname);
		}

		long long dlina = information[index].firstname.length();
		name_of = information[index].firstname;

		while (times < dlina)
		{
			space_in_a_row = 0;

			if (name_of[times] == ' ' && times == 0)
			{
				check = 0;
				break;
			}

			if (!isalnum(name_of[times]) && name_of[times] != ' ')
			{
				check = 0;
				break;
			}

			if (name_of[times] == ' ' && name_of[times + 1] == ' ')
			{
				check = 0;
				space_in_a_row = 1;
				break;
			}

			if (space_in_a_row)
			{
				break;
			}

			times++;
		}
		if (check)
		{
			break;
		}

		printf_s("Некорректный ввод, попробуйте снова:\a\n");
		information[index].firstname.erase(0, dlina);

		rewind(stdin);
	}
}
void check_pname(student* information, int index, bool search)
{
	while (true)
	{
		bool check = 1, space_in_a_row = 0;
		int times = 0;
		std::string name_of;

		if (!search)
		{
			std::cout << "Введите отчество " << "\n";
			std::getline(std::cin, information[index].patronumic);
		}
		else
		{
			std::cout << "Введите измененное отчество " <<  "\n";
			std::getline(std::cin, information[index].patronumic);
		}

		long long dlina = information[index].patronumic.length();
		name_of = information[index].patronumic;

		while (times < dlina)
		{
			space_in_a_row = 0;

			if (name_of[times] == ' ' && times == 0)
			{
				check = 0;
				break;
			}

			if (!isalnum(name_of[times]) && name_of[times] != ' ')
			{
				check = 0;
				break;
			}

			if (name_of[times] == ' ' && name_of[times + 1] == ' ')
			{
				check = 0;
				space_in_a_row = 1;
				break;
			}

			if (space_in_a_row)
			{
				break;
			}

			times++;
		}
		if (check)
		{
			break;
		}

		printf_s("Некорректный ввод, попробуйте снова:\a\n");
		information[index].patronumic.erase(0, dlina);

		rewind(stdin);
	}
}
void check_address(student* information, int index, bool search)
{
	while (true)
	{
		bool check = 1, space_in_a_row = 0;
		int times = 0;
		std::string name_of;

		if (!search)
		{
			std::cout << "Введите адрес" <<  "\n";
			std::getline(std::cin, information[index].address);
		}
		else
		{
			std::cout << "Введите измененный адрес "  << "\n";
			std::getline(std::cin, information[index].address);
		}

		long long dlina = information[index].address.length();
		name_of = information[index].address;

		while (times < dlina)
		{
			space_in_a_row = 0;

			if (name_of[times] == ' ' && times == 0)
			{
				check = 0;
				break;
			}

			if (!isalnum(name_of[times]) && name_of[times] != ' ')
			{
				check = 0;
				break;
			}

			if (name_of[times] == ' ' && name_of[times + 1] == ' ')
			{
				check = 0;
				space_in_a_row = 1;
				break;
			}

			if (space_in_a_row)
			{
				break;
			}

			times++;
		}
		if (check)
		{
			break;
		}

		printf_s("Некорректный ввод, попробуйте снова:\a\n");
		information[index].address.erase(0, dlina);

		rewind(stdin);
	}
}
void check_math(student* information, int index, bool search)
{
	int amount;
	if (!search)
	{
		printf_s("Введите балл за математику:\n");
	}
	if (search)
	{
		printf_s("Введите измененный балл за математику:\n");
	}

	while (!(scanf_s("%d", &amount)) || amount < 0 || amount > 10 || getchar() != '\n')
	{
		printf_s("\nОшибка, попробуйте снова, балл не может быть отрицательно, не может быть дробным числом и не может содержать буквы и символы\n\a");
		while (getchar() != '\n');
		{
			std::rewind(stdin);
			printf_s("Введите балл за математику:\n\a");
		}
	}

	information[index].math = amount;
}
void check_russian(student* information, int index, bool search)
{
	int amount;
	if (!search)
	{
		printf_s("Введите балл за русский язык:\n");
	}
	if (search)
	{
		printf_s("Введите измененный балл за русский язык:\n");
	}

	while (!(scanf_s("%d", &amount)) || amount < 0 || amount > 10 || getchar() != '\n')
	{
		printf_s("\nОшибка, попробуйте снова, балл не может быть отрицательно, не может быть дробным числом и не может содержать буквы и символы\n\a");
		while (getchar() != '\n');
		{
			std::rewind(stdin);
			printf_s("Введите балл за русский язык:\n\a");
		}
	}

	information[index].math = amount;
}
student* file_enter(int& size, student* information)
{
	
	std::ifstream file_start;
	file_start.open("file_start.txt", std::ios::in);

	std::string string;
	int num_of_files = 0;

	while (!file_start.eof())
	{
		std::getline(file_start, string);
		if (string != "\0")
		{
			num_of_files++;
		}
	}

	file_start.close();
	file_start.open("file_start.txt", std::ios::in);

	num_of_files /= 4;
	size = num_of_files;

	delete[] information;
	information = new student[num_of_files];

	for (int i = 0; i < size; i++)
	{
		getline(file_start, information[i].lastname);
		getline(file_start, information[i].firstname);
		getline(file_start, information[i].patronumic);
		getline(file_start, information[i].address);
		file_start >> information[i].math;
		file_start >> information[i].russian;
		information[i].mid = (static_cast<double>(information[i].math) + information[i].russian)/2;

		int l = file_start.tellg();
		if (file_start.peek() == ' ' || file_start.peek() == '\0' || file_start.peek() == '\n')
		{
			l += 4;
		}
		file_start.seekg(l, std::ios_base::beg);
	}

	file_start.close();
	return information;
}
void showing_up(student* information, int& size)
{
	if (size == 0)
	{
		printf_s("\nСписок пуст.\n");
		return;
	}

	std::cout << std::setw(12) << std::left << "Порядковый номер" << "\t" << std::setw(20) << std::left << "Фамилия:" << std::setw(20) << std::left << "Имя:" << std::setw(20) << std::left << "Отчество: " << std::setw(20) << std::left << "Адрес: " << std::setw(20) << std::left << "Балл по математике: " << std::setw(20) << std::left << "Балл по русскому языку: " << std::setw(25) << std::left << "Средний балл: " << '\n';

	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(20) << std::left << i + 1 << "\t" << std::setw(20) << std::left << information[i].lastname << std::setw(20) << std::left << information[i].firstname << std::setw(20) << std::left << information[i].patronumic << std::setw(20) << std::left << information[i].address << std::setw(20) << std::left << information[i].math << std::setw(24) << std::left << information[i].russian << std::setw(1) << std::left << information[i].mid << '\n';
	}
}
void sort_alfabet(student* information, int size, bool menu_show = 1)
{
	if (size == 0)
	{
		printf_s("\nНечего сортировать\n");
		return;
	}


	for (int start = 0; start < size; ++start)
	{
		int smallestIndex = start;
		for (int currentIndex = start + 1; currentIndex < size; ++currentIndex)
		{
			if (information[currentIndex].lastname < information[smallestIndex].lastname)
			{
				smallestIndex = currentIndex;
			}
		}
		std::swap(information[smallestIndex], information[start]);
	}
	printf_s("\nСортировка прошла успешно.\n");
	if (menu_show)
	{
		showing_up(information, size);
	}
}

void show_sorted_staff(student* information, int size)
{

	sort_alfabet(information, size, 0);


	if (size == 0)
	{
		printf_s("\nСписок пуст.\n");
		return;
	}
	printf_s("\nСтуденты, средний балл которых больше 4.5:\n\n");
	std::cout << std::setw(12) << std::left << "Порядковый номер" << "\t" << std::setw(20) << std::left << "Фамилия:" << std::setw(20) << std::left << "Имя:" << std::setw(20) << std::left << "Отчество: " << std::setw(20) << std::left << "Адрес: " << std::setw(20) << std::left << "Балл по математике: " << std::setw(20) << std::left << "Балл по русскому языку: " << std::setw(25) << std::left << "Средний балл: " << '\n';

	int index = 1;
	bool date_to_int = 1;

	for (int i = 0; i < size; i++)
	{
		
		if (information[i].mid > 4.5 )
		{
			std::cout << std::setw(20) << std::left << i + 1 << "\t" << std::setw(20) << std::left << information[i].lastname << std::setw(20) << std::left << information[i].firstname << std::setw(20) << std::left << information[i].patronumic << std::setw(20) << std::left << information[i].address << std::setw(20) << std::left << information[i].math << std::setw(24) << std::left << information[i].russian << std::setw(1) << std::left << information[i].mid << '\n';
			index++;
		}
	}
}
student* addi(student* information, int& size)
{
	bool exit = 0;
	int add;
	rewind(stdin);

	printf_s("\nВведите сколько элементов вы хотите добавить:");
	while (!(scanf_s("%d", &add)) || add < 0 || add > INT_MAX || getchar() != '\n')
	{
		printf_s("\nОшибка, попробуйте снова, если вам надо что-то удалить, то в меню следует выбрать другой пункт\a");
		while (getchar() != '\n');
		{
			std::rewind(stdin);
			printf_s("\nВведите сколько элементов вы хотите добавить:");
		}
	}
	rewind(stdin);

	student* safe_goods = new student[size + add];
	for (int i = 0; i <= size; i++)
	{
		if (i == size)
		{
			for (int j = size; j < size + add; j++)
			{
				check_name(safe_goods, j, 0);
				check_fname(safe_goods, j, 0);
				check_pname(safe_goods, j, 0);
				check_address(safe_goods, j, 0);
				check_math(safe_goods, j, 0);
				check_russian(safe_goods, j, 0);
				safe_goods[j].mid = (static_cast<double>(safe_goods[j].math) + safe_goods[j].russian) / 2;
			}
			break;
		}
		safe_goods[i] = information[i];
	}
	delete[] information;
	size += add;

	information = new student[size];
	for (int i = 0; i < size; i++)
	{
		information[i] = safe_goods[i];
	}

	return information;
}
student* delet(student* information, int& size)
{
	printf_s("\nВведите номер который хотите убрать:");

	bool exit = 0;
	int ignore = 0;

	while (!(scanf_s("%d", &ignore)) || ignore <= 0 || ignore > size || getchar() != '\n')
	{
		printf_s("\nОшибка, попробуйте снова, нельзя удалить из структуру то, чего нет\n");
		while (getchar() != '\n');
		{
			std::rewind(stdin);
			printf_s("\nВведите номер который хотите убрать:");
		}
	}

	printf_s("Удален:\n");
	std::cout << information[ignore - 1].lastname;
	printf_s("\n");
	size--;

	student* storage = new student[size];
	int save_from_error = 0;

	for (int i = 0; i <= size; i++)
	{
		if (i != ignore - 1 && i <= size)
		{
			storage[i + save_from_error] = information[i];
		}
		else
		{
			save_from_error = -1;
		}
	}

	delete[] information;
	information = new student[size];

	for (int i = 0; i < size; i++)
	{
		information[i] = storage[i];
	}

	delete[]storage;
	return information;

}
void swap(student* information, int& size)
{
	printf_s("\n");
	showing_up(information, size);
	int order = 0;

	printf_s("Какой элемент вы хотите изменить:\n");
	while (!(scanf_s("%d", &order)) || order <= 0 || order > size || getchar() != '\n')
	{
		printf_s("\nОшибка, попробуйте снова, такого элемента не существует\n\a");
		while (getchar() != '\n');
		{
			std::rewind(stdin);
			printf_s("Какой элемент вы хотите изменить:\n");
		}
	}
	int feature = 0;
	int again = 0;

	while (again == 0)
	{
		printf_s("\nКакой признак вы хотите изменить у этого элемента:");
		printf_s("\n1. Фамилия");
		printf_s("\n2. Имя");
		printf_s("\n3. Отчество");
		printf_s("\n4. Балл за математику");
		printf_s("\n5. Балл за русский\n");

		printf_s("Введите признак структуры:");
		while (!(scanf_s("%d", &feature)) || feature <= 0 || feature > 5 || getchar() != '\n')
		{
			printf_s("\nОшибка, попробуйте снова, всего существует 5 признаков структуры\n\a");
			while (getchar() != '\n');
			{
				std::rewind(stdin);
				printf_s("Введите признак структуры:");
			}
		}

		if (feature == 1)
		{
			check_name(information, order - 1, 1);
		}
		else if (feature == 2)
		{
			check_fname(information, order - 1, 1);
		}
		else if (feature == 3)
		{
			check_pname(information, order - 1, 1);
		}
		else if (feature == 4)
		{
			check_math(information, order - 1, 1);
		}
		else if (feature == 4)
		{
			check_russian(information, order - 1, 1);
		}

		printf_s("\nХотите изменить что-то еще?(1 - нет, 0 - да):\n");

		while (!(scanf_s("%d", &again)) || again < 0 || again > 1 || getchar() != '\n')
		{
			printf_s("\nЭрор, попробуйте снова!\n");
			while (getchar() != '\n');
			{
				std::rewind(stdin);
				printf_s("Хотите изменить что-то еще?(1 - да, 0 - нет):\n");
			}
		}
	}
}
int checking_menu()
{
	int point;
	printf_s("Выберете нужный вам пункт:\n");

	while (!(scanf_s("%ld", &point)) || point < 0 || point > 7 || getchar() != '\n')
	{
		printf_s("\nОшибка, попробуйте снова, вам доступны значения только те, которые прописаны в меню\n");
		while (getchar() != '\n');
		{
			std::rewind(stdin);
			printf_s("Выберете нужный вам пункт:\n");
		}
	}
	return point;
}
void in_end_file(student* information, int& size)
{
	printf_s("\nКонец програмы\n");

	std::ofstream EndFile;
	EndFile.open("file_end.txt", std::ios::out);

	for (int i = 0; i < size; i++)
	{
		EndFile << information[i].lastname << '\n';
		EndFile << information[i].firstname << '\n';
		EndFile << information[i].patronumic << '\n';
		EndFile << information[i].mid << '\n';
		EndFile << '\n';
	}
}

void menu(student* information, int& size)
{
	bool sort_before = 0;
	while (true)
	{
		int point = 0;

		printf_s("\nВыберете пункт меню:\n");
		printf_s("1. Просмотр содержимого структуры\n");
		printf_s("2. Сортировка по алфавитному порядку(с последующим выводом структуры)\n");
		printf_s("3. Сортировка по алфавитному порядку и вывод только тех, у кого средний балл больше 4.5(с последующим выводом структуры)\n");
		printf_s("4. Удаление структуры\n");
		printf_s("5. Добавление структуры\n");
		printf_s("6. Изменение элемента структуры\n");
		printf_s("7. Ответ на задание (прописано в контекстном меню) и завершение работы\n");

		point = checking_menu();

		if (point == 1)
		{
			showing_up(information, size);
		}
		else if (point == 2)
		{
			sort_alfabet(information, size, 1);
		}
		else if (point == 3)
		{
			show_sorted_staff(information, size);
		}
		else if (point == 4)
		{
			information = delet(information, size);
		}
		else if (point == 5)
		{
			information = addi(information, size);
		}
		else if (point == 6)
		{
			swap(information, size);
		}
		else if (point == 7)
		{
			in_end_file(information, size);
			break;
		}
	}
	return;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	printf_s("Ведомость абитуриентов, сдавших вступительные экзамены в университет, содержит: Ф.И.О., адрес, оценки.Определить количество абитуриентов,проживающих в г.Минске и сдавших экзамены со средним баллом не ниже 4.5,вывести их фамилии в алфавитном порядке.\n");
	printf_s("Выполнил Станишевский Алекснадр (группа 253505)\n");
	int size = 0;
	student* information = new student[size];
	information = file_enter(size, information);
	if (size == 0)
	{
		printf_s("\nФайл пуст\n");
		return 0;
	}
	else
	{
		printf_s("Данные были прочитаны с файла\n");
	}
	menu(information, size);

	return 0;
}

