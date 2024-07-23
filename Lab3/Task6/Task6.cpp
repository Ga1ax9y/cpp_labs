
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    long double result = 0, n, b = 100;

    cout << " Введите на сколько частей нужно разделить область определения:  ";
    cin >> n;
    while (n <= 0)
    {
        cout << " Введите на сколько частей нужно разделить область определения:  ";
        cin >> n;
    }
    for (double i = 1; i <= 3; i += 2 / n)
    {
        result = acos(exp(-i)) - 2 * sin(i);
        if (fabs(result) < fabs(b))
        {
            b = result;
           
        }
    }
    cout << " Значение минимально по модулю: " << fabs(b) << "\n";
}

