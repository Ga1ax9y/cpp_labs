#include <iostream>

long long foo(long long n)
{

	long long a = (n + 1) / 2;
	if (n == 0) return 0;
	return a * a + foo(n / 2);

}

int main()
{
	int n, k;
	std::cin >> k;
	for (int i = 1; i <= k; i++)
	{
		std::cin >> n;
		std::cout << foo(n) << std::endl;
	}

}