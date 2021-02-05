#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, q, a, b, n, h, Y, S, i, F;
	int k;
	cout << "введите a(начало диапазона)" << endl;
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
	cout << "введите b(конец диапазона)" << endl;
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
	cout << "введите h(шаг)" << endl;
	while (true)
	{
		cin >> h;
		if (!cin.fail())
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	if (a <= b && h < 0 || a >= b && h>0)
	{
		cout << "ошибка. функция не закончится" << endl;
		return 0;
	}
	cout << "введите n (определяющее значение)" << endl;
	while (true)
	{
		cin >> n;
		if (!cin.fail() && n>0)
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	i = 0;
	S = 0;
	for (x = a; x <= b; x += h)
	{
		S = 0;
		q = -1;
		i = i + 1;
		for (k = 1; k <= n; k++)
		{
			q *= -1 * x * x;
			S += q / (2 * k * (2 * k - 1));
		}
		Y = -log(sqrt(1 + x * x)) + x * atan(x);
		F = fabs(Y - S);
		cout << "шаг " << i << "      " << "x=" << x << "      " << "S=" << S << "      " << "Y=" << Y << "      " << "F=" << F << "      " << endl;
	}
	return 0;
}