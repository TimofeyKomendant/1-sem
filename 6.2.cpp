#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i=0, min=100, n=0, o=0, h=1;
	string str = "эники бэники ели вареники бу ";
	for (i; i <= size(str); i++)
	{
		if (str[i] == ' ')
		{
			if (n < min)
			{
				min = n;
				o = h;
			}
			h++;
			n = 0;
		}
		else n++;
	}
	cout <<"строка выглядит так: " << str << endl << "самая маленькая длинна слова " << min << " и это слово " << o << " по счёту";
	return 0;
}