#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Введите число \n A=";
    cin >> a;
    ( a>0 ) ? cout << "A - положительное, " : (     (a==0) ?  cout << "A - ноль, ": cout << "A - отрицательное, "       ) ;
    ( a % 2 != 0 ) ? cout << "нечётное." : cout << "чётное.";
    return 0;
}