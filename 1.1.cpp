#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, z1, z2;
	cout << "введите первое число " << endl;
	while (true)
	{
		cin >> a;
		if (!cin.fail())
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	cout << "введите второе число " << endl;
	while (true)
	{
		cin >> b;
		if (!cin.fail())
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	z1 = (sqrt(2 * a + 2 * sqrt(a * a - 4))) / (sqrt(a * a - 4) + a + 2);
	z2 = 1 / (sqrt(a + 2));
	cout << "z1=" << z1 << endl << "z2=" << z2 << endl;
	if (z1 == z2)
	{
		cout << "всё в порядке, значения равны" << endl;
		return 0;
	}
	else
	{
		cout << "ошибка, значения не равны" << endl;
		return 0;
	}
}