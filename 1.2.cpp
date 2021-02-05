#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, z1, z2;
    cout << "введите а" << endl;
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
    cout << "введите b" << endl;
    while (true)
    {
        cin >> b;
        if (!cin.fail())
        {
            break;
        }
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "попробуй ещё раз" << endl;
    }
    z1 = (pow((cos(a) - cos(b)), 2)) - pow((sin(a) - sin(b)), 2);
    z2 = -4 * pow(sin((a - b) / 2), 2) * cos(a + b);
    cout << "значение 1 " << z1 << endl << "значение 2 " << z2 << endl;
    return 0;
}