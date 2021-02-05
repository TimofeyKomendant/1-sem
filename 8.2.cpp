#include<iostream>
using namespace std;
typedef double(*Fun)(double, int);
double Y_(double, int);
double S_(double, int);
double F_(double, int);
double X();
void  Out_Rez(Fun, double, double);
double Y_(double x, int k)
{
	return -log(sqrt(1 + x * x)) + x * atan(x);
}
double S_(double x, int k)
{
	double S, q;
	S = 0;
	q = -1;
	q *= -1 * x * x;
	S += q / (2 * k * (2 * k - 1));
	return S;
}
void Out_Rez(Fun Funk, double x, double h)
{
	int k = 1;
	int i = 1;
	while (F_(x, k) <= 0.001)
	{
		cout << "шаг" << i << "  Funk=" << Funk(x, k);
		x += h;
		i++;
		k++;
	}
}
double F_(double x, int k)
{
	return fabs(Y_(x, k) - S_(x, k));
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, h;
	int k;
	cout << "введите x" << endl;
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
	cout << "введите h" << endl;
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
	cout << "что вывести? 1-Y(x) 2-S(x) 3-|Y(x)-S(x)|" << endl;
	cin >> k;
	switch (k)
	{
	case 1:
	{
		Out_Rez(Y_, x, h);
		break;
	}
	case 2:
	{
		Out_Rez(S_, x, h);
		break;
	}
	case 3:
	{
		Out_Rez(F_, x, h);
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