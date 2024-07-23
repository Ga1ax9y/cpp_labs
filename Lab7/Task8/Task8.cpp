#include <iostream>
#include <string>


int main()
{
    int n;
    std::cin >> n;
    std::string result;

    for (; n;)
    {
        char a = n % 3 + 48;
        if (!(a - 48))
        {
            result.insert(0, 1, '3');
            n = (n / 3) - 1;
        }
        else
        {
            result.insert(0, 1, a);
            n /= 3;
        }
    }
    std::cout << result;

}