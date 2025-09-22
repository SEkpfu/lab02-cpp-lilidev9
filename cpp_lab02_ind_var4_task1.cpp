#include <iostream>

using namespace std;
 
int main()
{
    setlocale(0,"");
    int lang, day, langday;
    string x;
    cout << "Введите язык \n";
    cin >> x;
    if (x == "RUS")
        lang = 1;
    else
        lang = 2;
    cout << "Введите номер дня недели (1-7) \n";
    cin >> day;
    langday = lang*10 + day;
    switch(langday){
        case 11:
            cout << "Понедельник";
            break;
        case 12:
            cout << "Вторник";
            break;
        case 13:
            cout << "Среда";
            break;
        case 14:
            cout << "Четверг";
            break;
        case 15:
            cout << "Пятница";
            break;
        case 16:
            cout << "Суббота";
            break;
        case 17:
            cout << "Воскресенье";
            break;
        case 21:
            cout << "Monday";
            break;
        case 22:
            cout << "Tuesday";
            break;
        case 23:
            cout << "Wednesday";
            break;
        case 24:
            cout << "Thursday";
            break;
        case 25:
            cout << "Friday";
            break;
        case 26:
            cout << "Saturday";
            break;
        case 27:
            cout << "Sunday";
            break;     
    }
    return 0;
}