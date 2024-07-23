#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int povtor, count = 0;
    std::cin >> povtor;
    long long* Answer = new long long[povtor];
    while (povtor)
    {
        long long len, m, result = 0;
        std::cin >> len >> m;
        std::string arr1, arr2, arr3, arr4;
        std::cin >> arr1 >> arr2;
        if (arr1.size() + arr2.size() > len) 
        {
            int pos;
            arr3 = arr1;
            arr4 = arr2;
            for (int i = 0; i < arr3.size(); i = 0) 
            {
                pos = arr4.find(arr3, 0);
                if (pos >= 0)
                {
                    arr4.erase(pos, arr3.size());
                }
                else arr3.erase(0, 1);
            }
            arr3 = arr1 + arr4;
            if (arr3.size() <= len)
                result++;
            arr4 = arr2;
            for (int i = 0; i < arr4.size(); i = 0)
            {
                pos = arr1.find(arr4, 0);
                if (pos >= 0) {
                    arr1.erase(pos, arr4.size());
                }
                else arr4.erase(0, 1);
            }
            arr4 = arr1 + arr2;
            if (arr4.size() <= len && arr3 != arr4)
                result++;
        }
        else if (arr1.size() + arr2.size() == len)
        {
            arr3 = arr1 + arr2;
            int corr = 0;
            for (int i = 0; i < arr3.size() - 1; i++) 
            {
                if (arr3[0] == arr3[i + 1])
                    corr++;
            }
            if (corr == 0) result = 2;
            else result = 1;
        }
        else if (arr1.size() + arr2.size() < len)
        {
            if (arr1 != arr2)
            {
                result = 1;
                for (int i = 0; i < (len - arr1.size() - arr2.size()) % m; i++)
                {
                    result *= 26;
                    result %= m;
                }
                result *= 2;
                result %= m;
            }
            else
            {
                result = 1;
                for (int i = 0; i < (len - arr1.size() - arr2.size()) % m; i++)
                {
                    result *= 26;
                    result %= m;
                }
            }
        }
        Answer[count] = result;
        count++;
        povtor--;
    }
    for (int i = 0; i < count; i++)
    {
        std::cout << Answer[i];
        if (i < count - 1) std::cout << std::endl;
    }
   
}