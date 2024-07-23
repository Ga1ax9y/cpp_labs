

#include <iostream>
using namespace std;
int main()
{
	double N = 0, a, b,x;
	int i = 1;
	while (i <= 30) {
		if ((i % 2) == 1) {
			a = i;
			b = i * i;
		}
		else if ((i % 2) == 0) {
			a = (i / 2);
			b = i * i * i;
		}
		N += (a * a) - (2 * a * b) + (b * b);
		i ++;
	}
	cout << N << endl;










}

