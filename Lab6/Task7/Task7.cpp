#include <iostream>
#include <string>

int main()
{
    
    int j = 0, count = 0, len = 0;
    std::string arr;
    std::cin >> arr;
    len = arr.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (arr[i] == arr[len - i - 1])
        {
            count++;
        }

    }
    for (int i = 0; i < len; i++)
    {
        if (arr[0] != arr[i])
        {
            j++;
        }
    }
    if (j == 0)
    {
        std::cout << "-1";
    }
    else if (count == len / 2)
    {
        std::cout << len - 1;
    }
    else
    {
        std::cout << len;
    }

}