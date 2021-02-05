#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double** mas, max;
	int a, b, x, y, ia, ib;
	cout << "какой будет размер массива?" << endl;
	while (true)
	{
		cin >> x;
		if (x > 0)
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	y = x;
	mas = new double* [y];
	for (a=0; a < y; a++)
	{
		mas[a] = new double[x];
	}
	for (a=0; a < y; a++)
	{
		for (b=0; b < x; b++)
		{
			cout << "введите элемент для строки " << a + 1 << " и столбца " << b + 1 << endl;
			while (true)
			{
				cin >> mas[a][b];
				if (!cin.fail())
				{
					break;
				}
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "попробуй ещё раз" << endl;
			}
		}
	}
	cout << "ваш массив:" << endl;
	for (a=0; a < y; a++)
	{
		for (b=0; b < x; b++)
		{
			cout.width(4);
			cout << mas[a][b];
		}
		cout << endl;
	}
	max = fabs(mas[0][0]);
	for (a=0; a < y; a++)
	{
		for (b=0; b < x; b++)
		{
			if (fabs(mas[a][b]) > max)
			{
				max = fabs(mas[a][b]);
				ia = a;
				ib = b;
			}
		}
	}
	cout << "модуль самого большого числа = " << max << " и распологается в строке " << ia + 1 << " столбце " << ib + 1 << endl;
	for (a = 0; a < y - 1; a++)
	{
		for (b = 0; b < x - 1; b++)
		{
			if (b==ib) mas[a][b] = mas[a][b + 1];
			if (a==ia) mas[a][b] = mas[a + 1][b];
			if (a == ia && b == ib) mas[a][b] = mas[a + 1][b+1];
 		}
	}
	cout << "ваш исправленный массив массив:" << endl;
	for (a=0; a < y - 1; a++)
	{
		for (b=0; b < x - 1; b++)
		{
			cout.width(4);
			cout << mas[a][b];
		}
		cout << endl;
	}
}