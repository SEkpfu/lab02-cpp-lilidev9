#include <iostream>
using namespace std;

int main()
{
    setlocale(0,"");
    int a,b;
    char c;
    cout << "Введите два вещественных числа \n";
    cin >> a;
    cin >> b;
    cout << "Введите знак арифметической операции \n";
    cin >> c;
    switch(c) {
        case '*' : cout <<"a*b="<< a*b; break;
        case '-' : cout <<"a-b="<< a-b; break;
        case '+' : cout <<"a+b="<< a+b; break;
        default: cout << "Неверные данные";
    }
    return 0;
}