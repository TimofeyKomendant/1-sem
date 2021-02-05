#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int i, q, k, buf;
    char alf[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    string text, st;
    cout << "хотите перезаписать файл?" << endl;
    k = 0;
    cin >> k;
    if (k == 1)
    {
        ofstream fout;
        fout.open("laba 7.txt");
        cout << "введите строку символов которую нужно зашифровать" << endl;
        getline(cin, text);
        for (i = 0; i <= size(text); i++)
        {
            for (q = 0; q < 26; q++)
            {
                if (text[i] == alf[q])
                {
                    if (q % 2 == 0) fout << q + 1 << '\n';
                    else fout << alf[q] << '\n';
                }
            }
        }
    }
    cout << "хотите расшифровать данные из файла?" << endl;
    k = 0;
    cin >> k;
    if (k == 1)
    {
        ifstream fin;
        fin.open("laba 7.txt");
        while (getline(fin, st))
        {
            if (atof(st.c_str()))
            {
                buf = atof(st.c_str());
                cout << alf[buf];
            }
            else cout << st;
        }
    }
}
