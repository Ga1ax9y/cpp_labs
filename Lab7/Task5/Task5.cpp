#include <iostream>



int main() 
{
    int t; 
    std::cin >> t;
    int arr[1001];
    int i = 0;
    for (; t > 0; t--,i++)
    {
        long long n;
        std::cin >> n;
        arr[i] = (n+1) / 10;
        
       
    }
    for (int j = 0; j < i; j++)
    {
        std::cout << arr[j] << "\n";
    }
}