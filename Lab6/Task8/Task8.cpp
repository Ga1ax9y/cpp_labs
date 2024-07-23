#include <iostream>
#include <string> 
#include <algorithm>



bool Fishki(std::string str1, std::string str2)
{
    bool total = false;

    std::string part2 = str1.substr(0, str1.size() - 1);
    for (int j = 0; j < str1.size(); j++)
    {
        std::string part2 = str1.substr(0, j + 1), a = str1.substr(0, j);
        reverse(a.begin(), a.end());
        part2 += a;
        reverse(part2.begin(), part2.end());

        if (part2.find(str2) != std::string::npos)
        {
            total = true;
            break;
        }
    }
    if (total)
    {
        std::cout << "YES\n";
        return 1;
    }
    else
    {
        std::cout << "NO\n";
        return 0;
    }
}

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        bool total = false;
        std::string str1, str2;
        std::cin >> str1 >> str2;
        total = Fishki(str1, str2);
    }

}