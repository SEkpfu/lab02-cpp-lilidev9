#include <iostream>
using namespace std;

//5b
int main()
{
    setlocale(0,"");
    double X,Y,Z,A,B;
    cout << "Введите высоту кирпича \n"; cin >> Z;
    cout << "Введите длину кирпича \n"; cin >> X;
    cout << "Введите ширину кирпича \n"; cin >> Y;
    cout << "Введите длину отверстия \n"; cin >> A;
    cout << "Введите ширину отверстия \n"; cin >> B;
    if ((X < A && Y < B) || (X < B && Y < A) || (X < A && Z < B) || (X < B && Z < A) || (Y < A && Z < B) ||(Y < B && Z < B))
        cout << "Да, пройдёт";
    else
        cout << "Нет, не пройдёт";
    return 0;
}