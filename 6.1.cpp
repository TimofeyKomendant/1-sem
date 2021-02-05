#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, n=0, j=0;
	string a;
	cout << "введите строку символов" << endl;
	cin >> a;
	cout << "длинна строки равна " << size(a) << endl;
	if (size(a) > 15)
	{
		for (i = 0; i <= size(a); i++)
		{
			if (a[i] < 'a' || a[i] > 'z')
			{
				a[n] = a[i];
				n++;
			}
		}
	}
	cout << "результат:" << endl;
	for (i = 0; i < n; i++)
	{
		cout << a[i];
	}
	return 0;
}