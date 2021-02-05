#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double** mas, max, min;
	int a, b, x, n;
	cout << "какой будет разряд массива?" << endl;
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
	n =x;
	mas = new double* [x];
	for (a=0; a < x; a++)
	{
		mas[a] = new double[x];
	}
	for (a=0; a < x; a++)
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
	for (a=0; a < x; a++)
	{
		for (b=0; b < x; b++)
		{
			cout.width(4);
			cout << mas[a][b];
		}
		cout << endl;
	}
	min = mas[0][0];
	max = mas[0][0];
	for (a = 0; a < n; a++)
	{
		b = 0;
		x = n;
		b += a;
		x -= a;
		if (b < x)
		{
			for (b; b < x; b++)
			{
				if (mas[a][b] > max) max = mas[a][b];
				if (mas[a][b] < min) min = mas[a][b];
			}
		}
		if (b > x)
		{
			x--;
			for (x; x <= b; x++)
			{
				if (mas[a][x] > max) max = mas[a][x];
				if (mas[a][x] < min) min = mas[a][x];
			}
		}
	}
	cout << "самое большое число в выбранной области " << max << endl << "самое маленькое число в выбранной области " << min << endl;
}