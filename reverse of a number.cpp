/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-06-14 13:50:37 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-06-14 14:04:36
 */

//! Week 2 Q3

/*
Write a program to reverse the digits of a given number.
For example, the number 9876 should be returned as 6789
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int number, remainder;
    int reversed_number = 0;
    cout << "Enter Any Number : " ;
    cin >> number;
    cout << endl;
    while (number != 0)
    {
        /* code */
        remainder = number % 10;
        reversed_number = reversed_number*10 + remainder;
        number /= 10;
    }
    cout << "Reversed Number Is : " << reversed_number << endl;
    return 0;
}

