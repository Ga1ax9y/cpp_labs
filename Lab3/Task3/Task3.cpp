#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double y, A = 0, B , X, H, M = 20, pi;
	pi = acos(-1);
	B = pi / 2;
	H = (B - A) / M;

	for (int i = 0; i <= 20; i++) {
		X = A + i * H;
		y = sin(X) - cos(X);
		cout << "Значение функции равно: " << y << " " << "при X = " << X << endl;
	}
}

