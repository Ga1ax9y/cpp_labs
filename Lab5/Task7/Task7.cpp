#include <iostream>
#include <cmath>

long long foo(long long a, long long b, long long c)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b % 2 != 0)
    {
        return (a * foo((a * a) % c, b / 2, c)) % c;
    }
    else
    {
        return foo((a * a) % c, b / 2, c) % c;
    }
}

int main()
{
    long long a, n, b, m, i = 0;
    while (true)
    {
        std::cin >> a >> n >> b;
        if (a == 0 && n == 0 && b == 0)
        {
            break;
        }
        m = powl(10, b);
        a %= m;
        std::cout << "Case #" << i + 1 << ": " << foo(a, n, m) << '\n';
        i++;
    }
    return 0;
}