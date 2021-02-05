#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double** mas;
	int a, b, x, y, f;
	cout << "какой будет длина строки?" << endl;
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
	cout << "какой будет длина столбца?" << endl;
	while (true)
	{
		cin >> y;
		if (y > 0)
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	mas = new double* [y];
	for (a = 0; a < y; a = a + 1)
	{
		mas[a] = new double[x];
	}
	for (a = 0; a < y; a = a + 1)
	{
		for (b = 0; b < x; b = b + 1)
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
	for (a = 0; a < y; a = a + 1)
	{
		for (b = 0; b < x; b = b + 1)
		{
			cout.width(4);
			cout << mas[a][b];
		}
		cout << endl;
	}
	for (a = 0; a < y; a = a + 1)
	{
		for (b = 0; b < x; b = b + 1)
		{
			if (mas[a][b] < 0)
			{
				cout << a << b << mas[a][b];
				break;
			}
			cout << "все элементы в столбце " << b + 1 << " меньше нуля";
			return 0;
		}
	}
}