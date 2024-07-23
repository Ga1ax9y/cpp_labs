#include <iostream>
int Enter() 
{
    int a;
    while (!(std::cin >> a) || (std::cin.peek() != '\n') || a < 1)
    {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::cout << "Неверный ввод, повторите еще раз:\n";
    }
    return a;
}

int repeat() 
{
    int v;
    std::cout << "Повторить программу?\n1. Да\n2. Нет\n\n";
    while (!(std::cin >> v) || (std::cin.peek() != '\n') || (v != 1 && v != 2))
    {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::cout << "Неверный ввод, повторите еще раз:\n";
    }
    if (v == 2)
        return 0;
    else
        return 1;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int k = 1;
    std::cout << " Вариант 6\n";
    std::cout << " Ввести  одномерный статический массив из k чисел\n";
    std::cout << " Необходимо сдвинуть элементы массива циклически на n позиций влево\n";
    std::cout << " Выполнил Станишевский Александр Дмитриевич (группа 253505)\n";
    while (k == 1)
    {
            int arr[1001];
            std::cout << "Введите количество элементов в массиве: \n";
            int n = Enter(); 
            std::cout << " Введите на сколько хотите сдвинуть массив влево: \n";
            int o = Enter();
            while (o > n)
            {
                o = o - n;
            }

            for (int i = 0; i < n; i++)
            {
                int ai = i - o;
                if (ai < 0)
                    ai += n;
                std::cout << " Введите " << i + 1 << " элемент массива: \n";
                while (!(std::cin >> arr[ai]) || (std::cin.peek() != '\n'))
                {
                    std::cin.clear();
                    while (std::cin.get() != '\n');
                    std::cout << "Неверный ввод, повторите еще раз:\n";
                }
               

            }
            std::cout << std::endl;
            std::cout << " Результат: \n";
            for (int i = 0; i < n; i++)
                std::cout << arr[i] << ' ';
        
        std::cout << std::endl;
        k = repeat();
    }
}
