#include <iostream>
long long  F(long long n)
{

	if (n % 10 > 0)
	{
		n = n % 10;
	}
	else if (n == 0)
	{
		n = 0;
	}
	else
	{
		n = F(n / 10);
	}
	return n;
}
long long S(long long p, long long q)
{
	long long result = 0;
	for (long long i = p; i <= q; i++)
	{
		result += F(i);
	}
	return result;
}
int main()
{
	long long p = 0, q = 0, sum = 0;
	while (p >= 0 && q >= 0)
	{
		std::cin >> p >> q;
		if (p >= 0 && q >= 0)
		{
			std::cout << S(p, q) << std::endl;
		}
	}
	return 0;
}