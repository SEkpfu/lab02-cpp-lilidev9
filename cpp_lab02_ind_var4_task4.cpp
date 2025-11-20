#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");
    int x;
    cout << "Введите число орехов \n";
    cin >> x;
    if (x%100==11||x%100==12||x%100==13||x%100==14||x%10==5||x%10==6||x%10==7||x%10==8||x%10==9)
        cout << "Бурундук закопал " << x << " орехов. \n" ;
    else
        if(x%10==1)
            cout << "Бурундук закопал " << x << " орех. \n" ;
        else
            cout << "Бурундук закопал " << x << " ореха. \n" ;
    return 0;
}