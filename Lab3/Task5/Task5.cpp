#include <iostream>
#include <cmath>
using namespace std;

long double fact(long double x)
{
    long double  sum = 1;
    if (x == 0 || x == 1)
    {
        return sum = 1;
    }
    for (int number = 1; number <= x; number++)
    {
        sum *= number;
    }
    return sum;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    long double n, x, Sx, d, Yx, res = 0, c, k;

    cout << "Введите количество членов ряда: " << "\n";
    cin >> n;
    while (n < 0)
    {
        cout << '\n';
        cout << "Неверное значение! Введите количество членов ряда: " << "\n";
        cin >> n;
    }

    cout << "Введите количество чисел от которых хотите найти значения функции: " << "\n";
    cin >> d;
    while (d < 0)
    {
        cout << '\n';
        cout << "Неверное значение! Введите количество чисел от которых хотите найти значения функции: " << "\n";
        cin >> d;
    }
    for (int j = 1; j <= d; j++)
    {
        cout << '\n';
        cout << "Введите " << j << " значение " << '\n';
        cin >> x;

        while (x > 1 || x < 0.1)
        {
            cout << '\n';
            cout << "x должно принадлежать промежутку от 0.1  до 1" << '\n';
            cout << "Введите значение:" << j << '\n';
            cin >> x;
        }

        k = 0;

        while (k <= n)
        {
            c = fact(2 * k + 1);
            Sx = powl(x, 2 * k + 1) / c;;
            res += Sx;
            k++;
        }
        cout << "S(x)= " << res << endl;


        Yx = (exp(x) - exp(-x)) / 2;;
        cout << "Y(x)= " << Yx << endl;
        res = 0;
    }
    return 0;
}