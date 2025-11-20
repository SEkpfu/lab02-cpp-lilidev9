#include <iostream>
using namespace std;
int year(int x);

int main()
{
    setlocale(0,"");
    
    int dr,mr,yr;
    cout << "Введите день, месяц и год вашего рождения \n";
    cin >> dr >> mr >> yr;

    int d1,m1,y1;
    cout << "Введите текущую дату \n";
    cin >> d1 >> m1 >> y1;

    if ((mr < m1) || ((mr == m1) && (dr <d1)))
        cout << "Ваш возраст - " << y1-yr << year(y1-yr);
    else
        if ((mr == m1) && (dr == d1))
            cout << "С днём рождения! Вам исполнилось " << y1 - yr << year(y1-yr);
        else
            cout << "Ваш возраст - " << y1-yr-1 << year(y1-yr),-1;
    
    return 0;

}

int year(int x)
{
    int y;
    y = x%100;
    if (9<y&&y<21)
        cout << " лет";
    else
        if (y%10==1)
            cout << " год";
        else
            if (1< y%10 && y%10 < 5)
                cout << " года";
            else
                cout << " лет";
    return 0;
}