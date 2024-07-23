#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <string>
int check(int x, int min, int max)
{
    while (scanf_s("%d", &x) != 1 || x < min || x >max || getchar() != '\n')
    {
        printf("Ошибка!\n");
        rewind(stdin);
    }
    return x;
}

const int SIZE = 100;
struct employee {
    char last_name[40];
    char first_name[40];
    char patronymic[40];
    int tnumber;
    int hours;
    int moneyhours;
} emptry[SIZE];
void enter(), init_list(), display(), search(), sort();
void update(), input(int i), opred(int n), del(int a);
int menu();


int main()
{
    setlocale(LC_ALL, "Russian");
    printf_s("Информация о сотрудниках фирмы включает ФИО, табельный номер,  количество отработанных часов за месяц, почасовой тариф.Вывести размер заработной платы каждого сотрудника\n");
    printf_s("Выполнил Станишевский Александр (группа 253505)\n");
        
        int choice; int n = 0; int a = 0;
        init_list();
        for (; ;)
        {
           
            choice = menu();
            switch (choice)
            {
            case 1: enter();
                break;
            case 2: display();
                break;
            case 3:

                n = check(n, 1, 100);

                opred(n);
                break;
            case 4: search();
                break;
            case 5:

                a = check(a, 1, 100);

                del(a);
                break;
            case 6: update();
                break;
            case 7: sort();
                break;
            case 8:
                return 0;
            }
        }
       
}
void init_list() //инициализация массива структур
{
    int t;
    for (t = 0; t < SIZE; t++) {
        *emptry[t].last_name = '\0';
    }
}
int menu()
{
    int ch;
    printf_s("\n");
    do {
        printf_s("1. Ввод новой структуры\n");
        printf_s("2. Функция просмотра содержимого динамического массива структур\n"); //display
        printf_s("3. Ввод определенного количества структур \n");
        printf_s("4. Функция поиска и вывода на экран структур с заданным значение элемента\n");
        printf_s("5. Функция удаления элемента массива структур \n");
        printf_s("6. Функция изменения элемента массива структур\n");
        printf_s("7. Функцию упорядочения массива по отработанным часам\n");
        printf_s("8. Выход\n");
        

        scanf_s("%d", &ch); 
        while (getchar() != '\n') { //подчистка буфера
            continue;
        }

    } while (ch > 8 || ch < 0); //цифры/буквы на ввод
    return ch;
}
void enter() {
    int i;
    // Находим первую свободную структуру.
    for (i = 0; i < SIZE; i++)
        if (!*emptry[i].last_name)
            break;
    
    input(i);
}
void input(int i)
{

    printf_s("Фамилия: ");
    fgets(emptry[i].last_name, 40, stdin); 
    while (*emptry[i].last_name == '\n' || *emptry[i].last_name < 'A' || *emptry[i].last_name > 'z')
        fgets(emptry[i].last_name, 40, stdin);
    printf_s("Имя: ");
    fgets(emptry[i].first_name, 40, stdin);
    while (*emptry[i].first_name == '\n' || *emptry[i].first_name < 'A' || *emptry[i].first_name > 'z')
        fgets(emptry[i].first_name, 40, stdin);
    printf_s("Отчество: ");
    fgets(emptry[i].patronymic, 40, stdin);
    while (*emptry[i].patronymic == '\n' || *emptry[i].patronymic < 'A' || *emptry[i].patronymic > 'z')
        fgets(emptry[i].patronymic, 40, stdin);
    printf_s("Табельный номер: ");
    emptry[i].tnumber = check(emptry[i].tnumber, 1, 1000000);
    printf_s("Отработанные часы: ");
    emptry[i].hours = check(emptry[i].hours, 1, 1000000);
    printf_s("Почасовой тариф: ");
    emptry[i].moneyhours = check(emptry[i].moneyhours, 1, 1000000);
}

void update()
{
    int i;
    char name[80]; 
    printf_s("Введите фамилию человека, информацию о котором нужно изменить:  "); 
    fgets(name, 80, stdin);
    for ( i = 0;i < SIZE; i++)
        if (!strcmp(name, emptry[i].last_name)) break;
    if (i == SIZE) {
        printf_s( "Человека с такой фамилией нет в списке\n");
        return;
    }
    printf_s( "Введите новую информацию.\n");
    input(i);

}
void display()
{
    int t;
    for (t = 0; t < SIZE; t++) {
        if (*emptry[t].last_name) {
            printf_s("Фамилия: "); 
            printf_s(emptry[t].last_name);
            printf_s("\n");
            printf_s("Имя: ");
            printf_s(emptry[t].first_name);
            printf_s("\n");
            printf_s("Отчество: ");
            printf_s(emptry[t].patronymic);
            printf_s("\n");
            printf_s("Табельный номер: ");
            printf_s("%d",emptry[t].tnumber);
            printf_s("\n");
            printf_s("Отработанные часы: ");
            printf_s("%d",emptry[t].hours);
            printf_s("\n");
            printf_s("Почасовой тариф: ");
            printf_s("%d",emptry[t].moneyhours);
            printf_s("\n");
            printf_s("\n");
           
           
        }
    }
}
void search()
{
    int se,t;
    for (t = 0; t < SIZE; t++)
    {
        if (!*emptry[t].last_name)
            break;
        
            se = emptry[t].hours * emptry[t].moneyhours;
            printf_s("Фамилия: ");
            printf_s(emptry[t].last_name);
            printf_s("Имя: ");
            printf_s(emptry[t].first_name);
            printf_s("Отчество: ");
            printf_s(emptry[t].patronymic);
            printf_s("Табельный номер: "); 
            printf_s("%d",emptry[t].tnumber);
            printf_s("\n");
            printf_s("Зароботная плата равна ");
            printf_s("%d", se);
            printf_s("\n");
        
    }
}
void sort()
{
    int t;

    for (t = 0; t < SIZE; t++)
    {
        for (int j = 0; j < SIZE - t; j++)
        {
            if (emptry[j].hours > emptry[j+1].hours)
            {
                if (emptry[j].hours != 0 && emptry[j + 1].hours != 0)
                {
                    std::swap(emptry[j], emptry[j + 1]);
                    
                }
            }
            
        }
    }
    printf_s("Сортировка выполнена!\n");
    printf_s("Нажмите 2, чтобы посмотреть\n");
}
void opred(int n)
{
    int i;
  
    for (i = 0; i < n; i++)
        {
        printf_s("Фамилия: ");
       
        fgets(emptry[i].last_name, 40, stdin);
        while (*emptry[i].last_name == '\n' || *emptry[i].last_name < 'A' || *emptry[i].last_name > 'z')
            fgets(emptry[i].last_name, 40, stdin);
        printf_s("Имя: ");
        
        fgets(emptry[i].first_name, 40, stdin);
        while (*emptry[i].first_name == '\n' || *emptry[i].first_name < 'A' || *emptry[i].first_name > 'z')
            fgets(emptry[i].first_name, 40, stdin);
        printf_s("Отчество: ");
        fgets(emptry[i].patronymic, 40, stdin);
        while (*emptry[i].patronymic == '\n' || *emptry[i].patronymic < 'A' || *emptry[i].patronymic > 'z')
            fgets(emptry[i].patronymic, 40, stdin);
        printf_s("Табельный номер: ");
        emptry[i].tnumber = check(emptry[i].tnumber, 1, 1000000);
        printf_s("Отработанные часы: ");
        emptry[i].hours = check(emptry[i].hours, 1, 1000000);
        printf_s("Почасовой тариф: ");
        emptry[i].moneyhours = check(emptry[i].moneyhours, 1, 1000000);
        while (getchar() != '\n') { //подчистка буфера
            continue;
        }

    }
    

    
}
void del(int a)
{

    for (int i = (a-1); i < SIZE - 1; i++)
    {
        emptry[i] = emptry[i + 1];
    }
}
