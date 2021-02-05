#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double y, x, z;
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
    y = x * (sin(x) + exp(-(x + 3)));
    cout << "ответ: y=" << y << endl;
    return 0;
}