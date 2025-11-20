#include <iostream>
using namespace std;

int main()
{
    setlocale(0,"");
    int a,b;
    cout << "Введите число \n";
    cin >> a;
    cout << "Введите день недели \n";
    cin >> b;
    if ((a==13 && (b==2 || b ==5)) || (a==17 && b== 5) )
        cout << "неудачный день";
    return 0;

}