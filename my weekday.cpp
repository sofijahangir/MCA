/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-03-22 19:57:01 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-03-22 20:35:50
 */
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

char monthname[10];
int date, year, month;
int rem;
void month_tension(void);
int calculation_tension(int, int, int);

int main(int argc, char const *argv[])
{
    /* code */
    cout << "Enter Date In ddmmyy Format : " << endl;
    cout << "Enter Date : ";
    cin >> date;
    cout << endl;
    cout << "Enter Month Name (3 letters): ";
    cin >> monthname;
    cout << endl;
    cout << "Enter Year : ";
    cin >> year;
    cout << endl;
    month_tension();
    calculation_tension(date, month, year);
    return 0;
}
void month_tension(void)
{
    if (strcmp(monthname, "jan")==0)
    {
        /* code */
        month = 13;
        year--;
    }
    else if (strcmp(monthname, "feb")==0)
    {
        /* code */
        month = 14;
        year--;
    }
    else if (strcmp(monthname, "mar")==0)
    {
        /* code */
        month = 3;
    }
    else if (strcmp(monthname, "apr")==0)
    {
        /* code */
        month = 4;
    }
    else if (strcmp(monthname, "may")==0)
    {
        /* code */
        month = 5;
    }
    else if (strcmp(monthname, "jun")==0)
    {
        /* code */
        month = 6;
    }
    else if (strcmp(monthname, "jul")==0)
    {
        /* code */
        month = 7;
    }
    else if (strcmp(monthname, "aug")==0)
    {
        /* code */
        month = 8;
    }
    else if (strcmp(monthname, "sep")==0)
    {
        /* code */
        month = 9;
    }
    else if (strcmp(monthname, "oct")==0)
    {
        /* code */
        month = 10;
    }
    else if (strcmp(monthname, "nov")==0)
    {
        /* code */
        month = 11;
    }
    else if (strcmp(monthname, "dec")==0)
    {
        /* code */
        month = 12;
    }
}

int calculation_tension(int date, int month, int year)
{
    int calculation, q, m, k, j, h;
    q=date;
    m=month;
    k=year%100;
    j=year/100;
    calculation = q + 13*(m+1)/5 + k + k/4 + j/4 + 5*j;
    calculation = calculation % 7;
    switch (calculation)
    {
        case 0:
            /* code */
            cout << "Saturday " << endl;
            break;
        case 1:
            /* code */
            cout << "Sunday" << endl;
            break;
        case 2:
            /* code */
            cout << "Monday" << endl;
            break;
        case 3:
            /* code */
            cout << "Tuesday" << endl;
            break;
        case 4:
            /* code */
            cout <<  "Wednesday" << endl;
            break;
        case 5:
            /* code */
            cout << "Thursday" << endl;
            break;
        case 6:
            /* code */
            cout << "Friday" << endl;
            break;
    
        default:
            cout << "You Are Martian, Please Leave Earth Asap : " << endl;
            break;
    }
    return 0;
}