#include <iostream>
using namespace std;
int main()
{
    setlocale(0,"");
    double a1, b1, a2, b2;
    cout << "Введите стороны первого прямоугольника \n";
    cout << "a1 = "; cin >> a1;
    cout << "b1 = "; cin >> b1;
    cout << "Введите стороны второго прямоугольника \n";
    cout << "a2 = "; cin >> a2;
    cout << "b2 = "; cin >> b2;

    double s1,s2;
    s1 = a1*b1;
    s2 = a2*b2;
    
    if (s1>s2)
        cout << "максимальная площадь у первого, S1 = " << s1;
    else
        if(s1==s2)
            cout << "площади равны, S1 = S2 = " << s1;
        else
            cout << "максимальная плозадь у второго, S2 = " << s2;
    return 0;
    

}