/*

 * @Author: Jahangir Ahmad 
 * @Date: 2019-02-23 11:29:34 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-06-11 17:58:00

 */

//! Week 1 Q1:

 /* 

 Q1. Write a program to demonstrate the use of Output statements 

 that draws any object of your choice e.g. Christmas Tree using ‘*’ 

 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int rows, i, j, k;
    rows=10;
    for( i = 1; i<=rows; i++)
    {
        for( j=0; j < rows-i; j++)
        {
            /* code */
            cout << " ";
        }
        for( k = 0; k < i*2-1; k++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }
    for( i = 6; i<=rows; i++)
    {
        for( j=0; j < rows-i; j++)
        {
            /* code */
            cout << " ";
        }
        for( k = 0; k < i*2-1; k++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }
    for( i = 0; i < rows-2; i++)
    {
        /* code */
        cout << " ";
    }
    cout << "|-|" << endl;
     for( i = 0; i < rows-2; i++)
    {
        /* code */
        cout << " ";
    }
    cout << "|-|" << endl;
    return 0;
}
