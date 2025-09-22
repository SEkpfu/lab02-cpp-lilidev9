#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cout << "Введите координаты точки (x,y) \n";
    cin >> x >> y;
    int res;

    if(x>=0 && y>=0)
        if( x*x + y*y <= 36)
            res = 1;
        else
            res = 0;

    if (x<= 0 && y<= 0)
        if(y >= -6 && x >= -3)
            res = 1;
        else
            res = 0;
    
    if (x>0 && y<0)
        if( y >= x-6 )
            res = 1;
        else
            res = 0;
    
    if (x<0 && y>0)
        if(y <= 2*x + 6)
            res = 1;
        else
            res = 0;
    
    if(res == 1)
        cout << "Точка входит в область \n";
    else
        cout << "Точка не входит в область \n";
    
    return 0;
}