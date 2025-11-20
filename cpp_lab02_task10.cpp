#include <iostream>
#include <cmath>

using namespace std;

double tr(double x, double y, double z);
double pif(double x, double y, double z);
double ravnost(double x, double y, double z);
double ravnobedr(double x, double y, double z);


int main()
{
    setlocale(0, "");
    double x,y,z;
    cout << " Введите три вещественных числа, стороны треугольника \n";
    cin >> x >> y >> z;

    if (tr(x,y,z) == 1){
        pif(x,y,z);
        ravnobedr(x,y,z);
        ravnost(x,y,z);}

    return 0;
}

double tr(double x, double y, double z)
{
    if (max(max(x,y),z) < x+y+z-max(max(x,y),z)){
        cout << "Треугольник существует \n";
        return 1;}
    else
        cout << "Треугольник не существует \n";
        return 0;
}


double pif(double x, double y, double z)
{
    if( (pow(max(max(x,y),z), 2)) == (pow(min(min(x,y),z),2) + pow(x+y+z-max(max(x,y),z)-min(min(x,y),z),2)))
        cout << "Треугольник прямоугольный \n";
    else
        cout << "Треугольник не прямоугольный \n";
    return 0;
}

double ravnost(double x, double y, double z)
{
    if (max(max(x,y),z)==min(min(x,y),z))
        cout << "Треугольник равносторониий \n";
    else
        cout << "Треугольник не равносторонний \n";
    return 0;
}

double ravnobedr(double x, double y, double z)
{
    if ( x==y || x== z || y ==z){
        cout << "Треугольник равнобедренный \n";
        return 1;}
    else
        cout << "Треугольник не равнобедренный \n"; 
        return 0;
}
