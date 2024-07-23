#include <exception>
#include <string>
#include <iostream>


int main()
{
	long long n = 0;
	std::cin >> n;
	int numb[13] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
	std::string roma[13] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
	std::string result;
	for (int i = 0; i < 13; i++)
	{
		while (n >= numb[i])
		{
			n -= numb[i];
			result += roma[i];
		}
	}
	std::cout << result;
}