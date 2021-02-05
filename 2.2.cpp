#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double y, x, z, a, d;
    int k;
    cout << "введи z" << endl;
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
    if (z > 0)
    {
        cout << "z > 0" << endl;
        x = -3 * z;
    }
    else
    {
        cout << "z <= 0" << endl;
        x = pow(z, 2);
    }
    cout << "выберите путь (от 1 до 3) по которому изменится x" << endl;
    cin >> k;
    switch (k)
    {
    case 1:
        cout << "x увеличен в 2 раза" << endl;
        x = 2 * x;
        break;
    case 2:
        cout << "x возведён в степень 2" << endl;
        x = pow(x, 2);
        break;
    case 3:
        cout << "x уменьшен в 3 раза" << endl;
        x = x / 3;
        break;
    default:
        cout << "ошибка" << endl;
        return 0;
    }
    cout << "введи a" << endl;
    while (true)
    {
        cin >> a;
        if (!cin.fail())
        {
            break;
        }
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "попробуй ещё раз" << endl;
    }
    cout << "введи d" << endl;
    while (true)
    {
        cin >> d;
        if (!cin.fail())
        {
            break;
        }
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "попробуй ещё раз" << endl;
    }
    y = 2 * x * (a * sin(z) + d * exp(-(x + 3)));
    cout << "ответ: y=" << y << endl;
    return 0;
}