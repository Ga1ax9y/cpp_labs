#include<iostream> 

long double modul(double x) 
{
    if (x >= 0) 
    { 
        x = x; 
    }
    else 
    { 
        x = -x; 
    }
    return x;
}
long double sinus(double x, int n) 
{
    long double s = 0, an;
    an = x;
    for (int i = 1; i <= n; i++) 
    {
        s += an;
        an *= -x * x / ((2 * i) * (2 * i + 1));
    }
    return s;
}

long double cosinus(double x, int n) 
{
    long double s = 0, an;
    an = 1;
    for (int i = 1; i <= n; i++) 
    {
        s += an;
        an *= -x * x / ((2 * i - 1) * (2 * i));
    }
    return s;
}

long double ln(double x, int n) 
{
    long double s = 0, an;
    x = modul(x);
    x = x / (x - 1);
    an = 1 / x;
    for (int i = 1; i <= n; i++) 
    {
        s += an;
        an *= i / (x * (i + 1));
    }
    return s;
}
int main() {
    setlocale(LC_ALL, "Russian");
    long int n = 10000000, i = 0;
    long double x, x1, t, t1, l, k, a, b, pi = 3.141592653589793238462643383279502;
    std::cout << "Введите значение x = ";
    std::cin >> x;
    if (x == 0) 
    { 
        std::cout << "Ошибка!"; 
    }
    else 
    {
        std::cout << "\n";
        t = x;
        t1 = modul(t);
        x1 = modul(x);
        x = fmod(x, pi * 2);
        if (x1 > 3) 



        { 
            while (x1 > 3) 
            { 
                x1 = x1 / 2.718281828459; 
                i++; 
            } 
        }
        if (x1 < 1) 
        { while (x1 < 3) 
        { 
            x1 = x1 * 2.718281828459; 
            i--; 
        } 
        }
        l = ln(x1, n) + i;
        std::cout  << "sin " << t << " = " << sinus(x, n) << "\n";
        std::cout  << "cos " << t << " = " << cosinus(x, n) << "\n";
        std::cout  << "ln " << t << " = " << l << "\n";
        a = sinus(x, n);
        b = cosinus(x, n);
        if (a >= b) 
        {
            if (b >= l)
            {
                std::cout  << "Минимальное значение - ln " << t << " = " << l << "\n";
            }
            else
            {
                std::cout  << "Минимальное значение - cos " << t << " = " << b << "\n";
            }
        }
        else 
        {
            if (a >= l)
            {
                std::cout  << "Минимальное значение - ln " << t << " = " << l << "\n";
            }
            else
            {
                std::cout  << "Минимальное значение - sin " << t << " = " << a << "\n";
            }
        }
    }
    return 0;
};

