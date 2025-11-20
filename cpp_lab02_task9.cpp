#include <iostream>
#include <cmath>
using namespace std;



double f1(double,double);
double f2(double,double);
double f3(double,double);
double f4(double,double);


int main()
{
    setlocale(0,"");
    double x,y;
    cout << "Введите координаты (x,y) \n";
    cin >> x >> y;
    f1(x,y);
    f2(x,y);
    f3(x,y);
    f4(x,y);
    return 0;

}

double f1( double x, double y)
{
    if ( (-2 <= x && x <= 0) && (0 <= y && y <= 1) )
        cout << "Да, пренадлежит 1 \n";
    else
        cout << "Нет, не пренадлежит 1 \n";
    return 0;
}

double f2( double x, double y)
{
    if (y>=0 && (sqrt( pow(x,2) + pow(y,2) ) <= 5))
        cout << "Да, пренадлежит 2 \n";
    else
        cout << "Нет, не пренадлежит 2 \n";
    return 0;
}

double f3( double x, double y)
{
    if (x>=0 && ( 3<= sqrt( pow(x,2) + pow(y,2) ) && sqrt( pow(x,2) + pow(y,2) ) <= 6))
        cout << "Да, пренадлежит 3 \n";
    else
        cout << "Нет, не пренадлежит 3 \n";
    return 0;
}

double f4( double x, double y)
{
    if ( x>=0 && y>= 0 && ( y<= -2 * x + 2))
        cout << "Да, пренадлежит 4 \n";
    else
        cout << "Нет, не пренадлежит 4 \n";
    return 0;
}
