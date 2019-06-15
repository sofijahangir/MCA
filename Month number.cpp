/*
* @Author: Jahangir Ahmad 

 * @Date: 2019-03-12 19:12:05 

 * @Last Modified by: Jahangir Ahmad

 * @Last Modified time: 2019-03-12 19:22:45
*/
#include <iostream>
using namespace std;
void month_name(int);
int main(int argc, char const *argv[])
{
    /* code */
    int monthname;
    cout << "Enter Month Number : ";
    cin >> monthname;
    cout << "Month Name : ";
    month_name(monthname);
    return 0;
}
void month_name(int mon_name)
{
    switch (mon_name)
    {
        case 1:
            /* code */
            cout << "Jan" << endl;
            break;
        case 2:
            /* code */
            cout << "Feb" << endl;
            break;
        case 3:
            /* code */
            cout << "Mar" << endl;
            break;
        case 4:
            /* code */
            cout << "Apr" << endl;
            break;
        case 5:
            /* code */
            cout << "May" << endl;
            break;
        case 6:
            /* code */
            cout << "Jun" << endl;
            break;
        case 7:
            /* code */
            cout << "Jul" << endl;
            break;
        case 8:
            /* code */
            cout << "Aug" << endl;
            break;
        case 9:
            /* code */
            cout << "Sep" << endl;
            break;
        case 10:
            /* code */
            cout << "Oct" << endl;
            break;
        case 11:
            /* code */
            cout << "Nov" << endl;
            break;
        case 12:
            /* code */
            cout << "Dec" << endl;
            break;
        default:
            cout << "You Are Martian, Leave Planet Earth Asap." << endl;
            break;
    }
}
