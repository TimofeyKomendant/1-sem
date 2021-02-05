#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a[20], S, max;
	int o, q, i;
	i = 0;
	S = 0;
	q = 0;
	cout << "сколько элементов будет в массиве?(не более 20) ";
	while (true)
	{
		cin >> o;
		if (!cin.fail() && o<=20)
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	for (i; i <= o-1; i = i+1)
	{
		cout << "введите элемент массива номер " << i+1 << "    ";
		while (true)
		{
			cin >> a[i];
			if (!cin.fail())
			{
				break;
			}
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "попробуй ещё раз" << endl;
		}
	}
	i = 0;
	max = a[0];
	for (i; i <= o-1; i = i + 1)
	{
		if (a[i] > max)
		{
			q = i;
			max = a[i];
		}
	}
	i = 0;
	for (i; i < q; i = i + 1)
	{
		if (a[i] > 0)
		{
			S = S + a[i];
		}
	}
	cout << "сумма, согласно условию, равна " << S;
	return 0;
}