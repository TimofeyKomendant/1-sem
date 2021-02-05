#include <iostream>
using namespace std;
double f1(int);
double f2(int);
int main()
{
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "введите n";
	cin >> n;
	cout << f1(n) << "=" << f2(n);
}
double f1(int n)
{
	double y=1;
	for (int i = 0; i < n; i++)
	{
		y = 1 / (1 + y);
	}
	return y;
}
double f2(int n)
{
	if (n == 0) return 1;
	return 1 / (1 + f2(n - 1));
}