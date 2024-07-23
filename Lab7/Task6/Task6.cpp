#include <iostream>
int check(int x, long long min, long long max)
{
    while (scanf_s("%d", &x) != 1 || x < min || x >max || getchar() != '\n') //O(n)
    {
        printf("Ошибка!\n");
        rewind(stdin);
    }
    return x;
}
bool del7(int n) {
    int m = n;
    int k = n & 1;
    if (k) {
        n >>= 1;
        n += 4;
    }
    else {
        n >>= 1;
    }
    if (n > m) {
        return false;
    }
    else if (n == m) {
        return true;
    }
    else {
        return del7(n);
    }
}

bool del23(int n) {
    int m = n;
    int k = n & 1;
    if (k) {
        n >>= 1;
        n += 12;
    }
    else {
        n >>= 1;
    }
    if (n > m) {
        return false;
    }
    else if (n == m) {
        return true;
    }
    else {
        return del23(n);
    }
}

bool del197(int n) {
    int m = n;
    int k = n & 1;
    if (k) {
        n >>= 1;
        n += 99;
    }
    else {
        n >>= 1;
    }
    if (n > m) {
        return false;
    }
    else if (n == m) {
        return true;
    }
    else {
        return  del197(n);
    }
}
int main() {
    int kk = 1;
    setlocale(LC_ALL, "Russian");
    while (kk == 1)
    {
        std::cout << "Задание 6\n";
        std::cout << "Определить, делится ли заданное число на 7, 23, 197\n";
        std::cout << "Выполнил Станишевский Алекснадр (группа 253505)\n";

        int n = 0, a, b, c;
        std::cout << "Введите целое число: ";
        n = check(n, -1000000, 1000000);
        if (n < 0)
            n = n * (-1);


        b = del7(n);
        if (b == true)
        {
            std::cout << "Заданное число делится на 7\n";
        }
        else  std::cout << "Заданное число не делится на 7\n";
        c = del23(n);
        if (c == true)
        {
            std::cout << "Заданное число делится на 23\n";
        }
        else  std::cout << "Заданное число не делится на 23\n";
        a = del197(n);
        if (a == true)
        {
            std::cout << "Заданное число делится на 197\n";
        }
        else  std::cout << "Заданное число не делится на 197\n";
        std::cout << "\nВы хотите перезапустить программу?\n";
        std::cout << "1 - да, 2 - нет\n";
        kk = check(kk, 1, 2);
    }
}