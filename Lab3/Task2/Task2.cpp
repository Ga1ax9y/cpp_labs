#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	long double eps, d, n = 1, sum = 0, a, b;
	a = 1.0 / 2.0;
	b = 1.0 / 3.0;
	eps = 0.001;
	do
	{
		d = powl(a, n) + powl(b, n);
		sum += d;
		n++;
	} while (d > eps);
	cout << "Сумма: " << sum;
	return 0;
}