#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, F, PI;
	PI = 3.1415927;
	cout << "введи x" << endl;
	while (true)
	{
		cin >> x;
		if (!cin.fail())
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	cout << "введи y" << endl;
	while (true)
	{
		cin >> y;
		if (!cin.fail())
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	if (x <= 0)
	{
		cout << "x <= 0. путь 1. F будет равно меньшему из этих двух значений: 0.9*y, exp(2*x-3)" << endl;
			if (0.9 * y < exp(2 * x - 3))
			{
				cout << "0.9*y < exp(2*x-3)" << endl;
				F = 0.9 * y;
			}
			else
			{
				cout << "0.9*y > exp(2*x-3)" << endl;
				F = pow(cos(y), 2);
			}
	}
	else
	if (x >= 0 && y > 0)
	{
		cout << "x >= 0 и y > 0. путь 2" << endl;
		if (5 - 2 * x == 0)
		{
			cout << "ошибка: присутствует деление на 0" << endl;
			return 0;
		}
		else
		{
			F = (2 * cos(x - PI / 6) + pow(y, 1. / 3)) / (5 - 2 * x);
		}
	}
	else
	cout << "ни одно из условий не соблюдено. путь 3. Будет выбрано максимальное из двух значений: sin^2y, cos^2y" << endl;
	if (pow(sin(y), 2) > pow(cos(y), 2))
	{
		cout << "sin^2y>cos^2y" << endl;
		F = (pow(sin(y), 2));
	}
	else
	{
		cout << "sin^2y<cos^2y" << endl;
		F = pow(cos(y), 2);
	}
	cout << "F=" << F << endl;
	return 0;
}