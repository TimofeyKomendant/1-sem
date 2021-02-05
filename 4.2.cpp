#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int o, q, i, z, n, a[20];
	i = 0;
	q = 0;
	n = 0;
	cout << "сколько элементов будет в массиве?(не более 20) ";
	while (true)
	{
		cin >> o;
		if (!cin.fail() && o <= 20)
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	cout << "введите 1, если хотите ввести массив с клавиатуры. В ином случае массив будет заполнен случайными числами  ";
	cin >> z;
	if (z == 1)
	{
		for (i; i <= o - 1; i = i + 1)
		{
			cout << "введите элемент массива номер " << i + 1 << "    " << endl;
			cin >> a[i];

		}
	}
	else
	{
		for (i; i <= o - 1; i = i + 1)
		{
			a[i] = rand();
			cout << "элемент массива номер " << i + 1 << " равен " << a[i] << endl;

		}
	}
	cout << "ваш массив:";
	for (i = 0; i <= o - 1; i = i + 1)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
	for (i = 0; i <= o - 1; i = i + 1)
	{
		if (a[i] % 2 != 0)
		{
			a[n] = a[i];
			n++;
		}
		else
		{
			cout << "элемент массива номер "<< i+1 << " оказался чётным" << endl;
		}
	}
	cout << "ваш исправленный массив массив:";
	for (i = 0; i <= o - n; i = i + 1)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
	return 0;
}
