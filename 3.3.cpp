#include<iostream>
using namespace std;
double Y(double x)
{
	return -log(sqrt(1 + x * x)) + x * atan(x);
}
double S(double x,int k)
{
	double S, q;
		S = 0;
		q = -1;
		q *= -1 * x * x;
		S += q / (2 * k * (2 * k - 1));
		return S;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double k, i, q, x, h, F;
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
	k = 1;
	i = 1;
	F = fabs(Y(x) - S(x, k));
	while (F<=0.001)
	{
		F = fabs(Y(x) - S(x, k));
		cout << "шаг" << i << "  F=" << F << "  S=" << S(x, k) << "      " << "Y=" << Y(x) << endl;		
		x += h;
		i++;
		k++;
	}	
	return 0;
}