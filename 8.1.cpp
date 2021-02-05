#include<iostream>
using namespace std;
typedef double(*Fun)(double, int);
double Y_(double, int);        		
double S_(double, int);              
double F_(double, int); 
double X();
void  Out_Rez(Fun, double, double, double, int);
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, n, h;
	int k;
	cout << "введите a(начало диапазона)" << endl;
	a = X();
	cout << "введите b(конец диапазона)" << endl;
	b = X();
	cout << "введите h(шаг)" << endl;
	h = X();
	if (a <= b && h < 0 || a >= b && h>0)
	{
		cout << "ошибка. функция не закончится" << endl;
		return 0;
	}
	cout << "введите n (определяющее значение)" << endl;
	while (true)
	{
		cin >> n;
		if (!cin.fail() && n > 0)
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	cout << "что вывести? 1-Y(x) 2-S(x) 3-|Y(x)-S(x)|" << endl;
	cin >> k;
	switch (k)
	{
		case 1:
		{
			Out_Rez(Y_, a, b, h, n);
			break;
		}
		case 2:
		{
			Out_Rez(S_, a, b, h, n);
			break;
		}
		case 3:
		{
			Out_Rez(F_, a, b, h, n);
			break;
		}
		default:
		{
			cout << "ошибка";
			break;
		}
	}
	return 0;
}
void Out_Rez(Fun Funk, double a, double b, double h, int n)
{
	double x;
	for (x = a; x <= b; x += h)
	{
		cout << "x=" << x << "   " << "Funk=" << Funk(x, n) << endl;
	}
}
double Y_(double x, int n)
{
	return -log(sqrt(1 + x * x)) + x * atan(x);
}
double S_(double x, int n )
{
	double S, q;
	S = 0;
	q = -1;
	for (int k = 1; k <= n; k++)
	{
		q *= -1 * x * x;
		S += q / (2 * k * (2 * k - 1));
	}
	return S;
}
double F_(double x, int n)
{
	return fabs(S_(x, n) - Y_(x, n));
}
double X()
{
	double x;
	while (true)
	{
		cin >> x;
		if (!cin.fail())
		{
			return x;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
}
