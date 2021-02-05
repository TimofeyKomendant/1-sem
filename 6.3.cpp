#include<iostream>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0, word = 0, siz = 0, numb = 0, o = 0;
	string str, str2;
	cout << "введите строку символов из нескольких слов" << endl;
	getline(cin, str);
	str.append(" ");
	for (i; i <= size(str); i++)
	{
		siz++;
		if (str[i] == ' ')
		{
			o++;
			if (o == 1 || o == 3 || o == 5)
			{
				str2.append(str, numb, siz);
			}
			numb = i;
			siz = 1;
		}
	}
	cout << "1 3 и 5 слово введённой строки: " << str2;
	return 0;
}