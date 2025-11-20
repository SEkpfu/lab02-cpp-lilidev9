#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    setlocale(0,"");
    double x,y;
    cout << "Введите координаты (x,y) \n";
    cin >> x >> y;
    if (sqrt( pow(x,2) + pow(y,2) ) <= 2)
        cout << "10 очков";
    else
        if (sqrt( pow(x,2) + pow(y,2) ) <= 4)
            cout << "5 очков";
        else
            cout << "0 очков";
    return 0;
}