#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int variant;
	int sum = 0, c;
	cout << " Введите 1 - если хотите использовать цикл, 2 - если нет:" << "\n";
	cin >> variant;
	switch (variant) {
	default: cout << " Invalid variant";
		return 0;
	case 1:
		cout << "Введите число:" << "\n";
		cin >> c;
		for (int i = 1; i <= c; i++) {

			if (i % 2 == 0) {
				sum += i;
			}
		}
		cout << "Ответ: " << sum << endl;
		break;
	case 2:
		int n, S;
		cout << " Введите число: ";
		cin >> c;
		n = (c - 2) / 2 + 1;
		S = (((2 + c) * n) / 2);
		cout << S << endl;


	}
}
	
