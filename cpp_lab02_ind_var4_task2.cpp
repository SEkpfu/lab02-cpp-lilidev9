#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0,"");
    double x;
    cout << "Введите x \n";
    cin >> x;
    double res;
    if (x >= 5.)
        res = cos(M_PI*x - M_PI/2); 
    else
        if(x <= 0)
            res = 2.0/(sqrt(x*x + 1));
        else
            res = 32./3. ;
    cout << "Резултат выполнения функции = " << res;
    return 0;
}