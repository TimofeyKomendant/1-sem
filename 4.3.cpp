#include<iostream>
using namespace std;
int mas_count(double *mas, double bad, int i, int n, int o, int err)
{
    for (i = 0; i <= o; i++)
    {
        if (mas[i] != bad)
        {
            mas[n] = mas[i];
            n++;
        }
        else
        {
            err++;
        }
    }
    return err;
}
int main()
{
    double bad, *mas;
    int o, i, n, err;
    setlocale(LC_ALL, "Russian");
    cout << "сколько элементов будет в массиве? ";
    n = 0;
    err = 0;
    while (true)
    {
        cin >> o;
        if (!cin.fail() && o >=0)
        {
            break;
        }
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "попробуй ещё раз" << endl;
    }
    o -= 1;
    mas = new double [o];
    cout << "введите значения элементов массива" << endl;
    for (i=0; i <= o; i++)
    {
        while (true)
        {
            cin >> mas[i];
            if (!cin.fail())
            {
                break;
            }
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "попробуй ещё раз" << endl;
        }
        cout << "элемент массива номер " << i+1 << " равен " << mas[i] << endl;
    }
    cout << "ваш массив: ";
    for (i = 0; i <= o; i = i + 1)
    {
        cout << mas[i] << "  ";
    }
    cout << endl << "введите число, которое следует удалить из массива ";
    while (true)
    {
        cin >> bad;
        if (!cin.fail())
        {
            break;
        }
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "попробуй ещё раз" << endl;
    }
    cout << "ваш исправленный массив массив: ";
    err = mas_count(mas, bad, i, n, o, err);
    for (i = 0; i <= o - err ; i++)
    {
        cout << mas[i] << "  ";
    }
    return 0;
}