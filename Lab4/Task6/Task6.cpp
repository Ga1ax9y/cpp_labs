#include <iostream>
#include <string>

int main()
{
    int pos;
    std::string number;
    std::cin >> number >> pos;
    int diff = number.length();
    int count = 0;
    int* arr = new int[diff];
    for (int i = 0; i < diff; i++)
    {
        arr[i] = number[i];
        int j = 0;
        while (j < i&& arr[j] != arr[i])
            j++;
        if (i == j)
            count++;
    }
    std::cout << count << "\n";
    for (int i = diff; i > 0; i--)
    {
        if (arr[pos - 1] == arr[i - 1])
            std::cout << diff - i << " ";
    }
    delete[] arr;
    return 0;
}