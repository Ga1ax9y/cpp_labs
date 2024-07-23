#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double c; int i, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0, result = 0;
	cin >> c;
	if ((0 < c) && (c < 10)) {
		for (i = 1; i < c; i++) {
			num9 = i % 10;
			result = pow(num9, 1);
			if (result == i)
			{
				cout << i << "\n";
			}

		}
	}
	if ((c >= 10) && (c < 100)) {
		for (i = 1; i < c; i++) {
			num9 = i % 10;
			num8 = (i / 10) % 10;
			if (i < 10)
				result = powl(num9, 1);
			if ((i >= 10) && (i < 100))
				result = powl(num9, 2) + powl(num8, 2);
			if (result == i) {
				cout << i << endl;
			}
		}

	}
	if ((c >= 100) && (c < 1000)) {
		for (i = 1; i < c; i++) {
			num9 = i % 10;
			num8 = (i / 10) % 10;
			num7 = (i / 100) % 10;
			if (i < 10)
				result = powl(num9, 1);
			if ((i >= 10) && (i < 100))
				result = powl(num9, 2) + powl(num8, 2);
			if ((i >= 100) && (i < 1000))
				result = powl(num9, 3) + powl(num8, 3) + powl(num7, 3);
			if (result == i) {
				cout << i << endl;
			}
		}

	}
	if ((c >= 1000) && (c < 10000)) {
		for (i = 1; i < c; i++) {
			num9 = i % 10;
			num8 = (i / 10) % 10;
			num7 = (i / 100) % 10;
			num6 = (i / 1000) % 10;
			if (i < 10)
				result = powl(num9, 1);
			if ((i >= 10) && (i < 100))
				result = powl(num9, 2) + powl(num8, 2);
			if ((i >= 100) && (i < 1000))
				result = powl(num9, 3) + powl(num8, 3) + powl(num7, 3);
			if ((i >= 1000) && (i < 10000))
				result = powl(num9, 4) + powl(num8, 4) + powl(num7, 4) + powl(num6, 4);
			if (result == i) {
				cout << i << endl;
			}
		}

	}
	if ((c >= 10000) && (c < 100000)) {
		for (i = 1; i < c; i++) {
			num9 = i % 10;
			num8 = (i / 10) % 10;
			num7 = (i / 100) % 10;
			num6 = (i / 1000) % 10;
			num5 = (i / 10000) % 10;
			if (i < 10)
				result = powl(num9, 1);
			if ((i >= 10) && (i < 100))
				result = powl(num9, 2) + powl(num8, 2);
			if ((i >= 100) && (i < 1000))
				result = powl(num9, 3) + powl(num8, 3) + powl(num7, 3);
			if ((i >= 1000) && (i < 10000))
				result = powl(num9, 4) + powl(num8, 4) + powl(num7, 4) + powl(num6, 4);
			if ((i >= 10000) && (i < 100000))
				result = powl(num9, 5) + powl(num8, 5) + powl(num7, 5) + powl(num6, 5) + powl(num5, 5);
			if (result == i) {
				cout << i << endl;
			}

		}
	}
	if ((c >= 100000) && (c < 1000000)) {
		for (i = 1; i < c; i++) {
			num9 = i % 10;
			num8 = (i / 10) % 10;
			num7 = (i / 100) % 10;
			num6 = (i / 1000) % 10;
			num5 = (i / 10000) % 10;
			num4 = (i / 100000) % 10;
			if (i < 10)
				result = powl(num9, 1);
			if ((i >= 10) && (i < 100))
				result = powl(num9, 2) + powl(num8, 2);
			if ((i >= 100) && (i < 1000))
				result = powl(num9, 3) + powl(num8, 3) + powl(num7, 3);
			if ((i >= 1000) && (i < 10000))
				result = powl(num9, 4) + powl(num8, 4) + powl(num7, 4) + powl(num6, 4);
			if ((i >= 10000) && (i < 100000))
				result = powl(num9, 5) + powl(num8, 5) + powl(num7, 5) + powl(num6, 5) + powl(num5, 5);
			if ((i >= 100000) && (i < 1000000))
				result = powl(num9, 6) + powl(num8, 6) + powl(num7, 6) + powl(num6, 6) + powl(num5, 6) + powl(num4,6);
			if (result == i) {
				cout << i << endl;
			}

		}
	}
	if ((c >= 1000000) && (c < 10000000)) {
		for (i = 1; i < c; i++) {
			num9 = i % 10;
			num8 = (i / 10) % 10;
			num7 = (i / 100) % 10;
			num6 = (i / 1000) % 10;
			num5 = (i / 10000) % 10;
			num4 = (i / 100000) % 10;
			num3 = (i / 1000000) % 10;
			if (i < 10)
				result = powl(num9, 1);
			if ((i >= 10) && (i < 100))
				result = powl(num9, 2) + powl(num8, 2);
			if ((i >= 100) && (i < 1000))
				result = powl(num9, 3) + powl(num8, 3) + powl(num7, 3);
			if ((i >= 1000) && (i < 10000))
				result = powl(num9, 4) + powl(num8, 4) + powl(num7, 4) + powl(num6, 4);
			if ((i >= 10000) && (i < 100000))
				result = powl(num9, 5) + powl(num8, 5) + powl(num7, 5) + powl(num6, 5) + powl(num5, 5);
			if ((i >= 100000) && (i < 1000000))
				result = powl(num9, 6) + powl(num8, 6) + powl(num7, 6) + powl(num6, 6) + powl(num5, 6) + powl(num4, 6);
			if ((i >= 1000000) && (i < 10000000))
				result = powl(num9, 7) + powl(num8, 7) + powl(num7, 7) + powl(num6, 7) + powl(num5, 7) + powl(num4, 7) + powl(num3, 7);
			if (result == i) {
				cout << i << endl;
			}

		}
	}
		if ((c >= 10000000) && (c < 100000000)) {
		for (i = 1; i < c; i++) {
			num9 = i % 10;
			num8 = (i / 10) % 10;
			num7 = (i / 100) % 10;
			num6 = (i / 1000) % 10;
			num5 = (i / 10000) % 10;
			num4 = (i / 100000) % 10;
			num3 = (i / 1000000) % 10;
			num2 = (i / 10000000) % 10;
			if (i < 10)
				result = powl(num9, 1);
			if ((i >= 10) && (i < 100))
				result = powl(num9, 2) + powl(num8, 2);
			if ((i >= 100) && (i < 1000))
				result = powl(num9, 3) + powl(num8, 3) + powl(num7, 3);
			if ((i >= 1000) && (i < 10000))
				result = powl(num9, 4) + powl(num8, 4) + powl(num7, 4) + powl(num6, 4);
			if ((i >= 10000) && (i < 100000))
				result = powl(num9, 5) + powl(num8, 5) + powl(num7, 5) + powl(num6, 5) + powl(num5, 5);
			if ((i >= 100000) && (i < 1000000))
				result = powl(num9, 6) + powl(num8, 6) + powl(num7, 6) + powl(num6, 6) + powl(num5, 6) + powl(num4, 6);
			if ((i >= 1000000) && (i < 10000000))
				result = powl(num9, 7) + powl(num8, 7) + powl(num7, 7) + powl(num6, 7) + powl(num5, 7) + powl(num4, 7) + powl(num3, 7);
			if ((i >= 10000000) && (i < 100000000))
				result = powl(num9, 8) + powl(num8, 8) + powl(num7, 8) + powl(num6, 8) + powl(num5, 8) + powl(num4, 8) + powl(num3, 8) + powl(num2, 8);
			if (result == i) {
				cout << i << endl;
			}

		}
	}








}