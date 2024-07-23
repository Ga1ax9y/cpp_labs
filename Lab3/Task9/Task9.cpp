
#include <iostream>
using namespace std;
int main()
{
	double i = 0, a0, an, d, s = 0, x = 1;
	setlocale(LC_ALL, "Russian");
	cout << " Введите a0: ";
	cin >> a0;
	cout << " Введите d: ";
	cin >> d;
	cout << " Введите an: ";
	cin >> an;
	if (int((an - a0) / d) == ((an - a0) / d))
	{
		for (; i <= (an - a0) / d; i++)
		{
			s += x * (a0 + i * d);
			x *= -2;
		}
		cout << " Ответ: " << s << "\n";
	}
	else
		cout << "Такой прогрессии не существует!";



}


