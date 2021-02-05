#include<iostream>
using namespace std;
double X(double x)
{
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
		return x;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, Y, h, PI, i, max, min;
	PI = 3.1415967;
	i = 1;
	Y = 0;
	cout << "введите a(начало диапазона)" << endl;
	a = X(x);
	cout << "введите b(конец диапазона)" << endl;
	b = X(x);
	cout << "введите h(шаг)" << endl;
	h = X(x);
	if (a <= b && h < 0 || a >= b && h>0)
	{
		cout << "ошибка. функция не закончится" << endl;
		return 0;
	}
	if (a < 0 || h < 0)
	{
		cout << "ошибка. будет присутствовать корень из отрицательного числа";
	}
	Y = (sin(a) * cos(a)) / sqrt(a);
	min = Y;
	max = Y;
	if (h >= 0)
	{
		while (a <= b)
		{
			cout << "шаг " << i << "   " << "x=" << a << "   ";
			i += 1;
			a += h;
			Y = (sin(a) * cos(a)) / sqrt(a);
			cout << "Y=" << Y << endl;
			if (Y > max) max = Y;
			if (Y < min) min = Y;
		}
	}
	else
	{
		while (a >= b)
		{
			cout << "шаг " << i << "   " << "x=" << a << "   ";
			i += 1;
			a += h;
			Y = (sin(a) * cos(a)) / sqrt(a);
			cout << "Y=" << Y << endl;
			if (Y > max) max = Y;
			if (Y < min) min = Y;
		}
	}
	cout << "максимальное значение Y = " << max << endl << "минимальное значение Y = " << min << endl;
	return 0;	
}