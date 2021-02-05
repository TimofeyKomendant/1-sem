#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, z, h;
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
	cout << "введите y" << endl;
	while (true)
	{
		cin >> y;
		if (!cin.fail())
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	cout << "введите z" << endl;
	while (true)
	{
		cin >> z;
		if (!cin.fail())
		{
			break;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "попробуй ещё раз" << endl;
	}
	if (1 + x * abs(y - tan(z)) == 0)
	{
		cout << "ошибка, присутствует деление на 0";
	}
	else
	{
		h = (((pow(x, y + 1)) + exp(y - 1)) * (1 + abs(y - x))) / (1 + (x * abs(y - tan(z)))) + ((pow(abs(y - x), 2)) / 2) - ((pow(abs(y - x), 3)) / 3);
		cout << "h=" << h;
	}
	return 0;
}