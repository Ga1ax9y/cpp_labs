#include <iostream>
#include <string>
#include <algorithm>

long long fact(int N)
{
    if (N == 0)
        return 1;
    if (N == 1)
        return 1;
    else
        return N * fact(N - 1);
}

int main()
{
    std::string str;

    long long x = 1, len = 0, result;

    std::getline(std::cin, str);
    if (str.size() > 14)
        return 0;
    result = fact(str.size());



    for (int i = 0; str[i]; i++)
    {
        for (int j = i + 1; str[j]; j++)
        {
            if (str[i] == str[j])
            {
                x++;

            }

        }
        result /= x;
        x = 1;
    }
    std::cout << result;
}