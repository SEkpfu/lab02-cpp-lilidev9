#include <iostream>
using namespace std;

int main()
{
    setlocale(0,"");
    double r,a,b,z,c;
    cout << "Введите радиус торта \n"; cin >> r;
    cout << "Введите высоту торта \n"; cin >> z;
    cout << "Введите длину коробки \n"; cin >> a;
    cout << "Введите ширину коробки \n"; cin >> b;
    cout << "Введите высоту коробки \n"; cin >> c;

    if (2*r < a && 2*r < b && z < c)
        cout << "Да, уместится \n";
    else
        cout << "Нет, не уместится \n";
    return 0;
}