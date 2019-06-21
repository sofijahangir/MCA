/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-06-21 11:54:21 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-06-21 11:57:05
 */
//!Week 1 Q5
/*
Write a program to demonstrate the precedence of various operators
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;
   e = (a + b) * c / d; // ( 30 * 15 ) / 5
   cout << "Value of (a + b) * c / d is :" << e << endl ;
   e = ((a + b) * c) / d; // (30 * 15 ) / 5
   cout << "Value of ((a + b) * c) / d is  :" << e << endl ;
   e = (a + b) * (c / d); // (30) * (15/5)
   cout << "Value of (a + b) * (c / d) is  :" << e << endl ;
   e = a + (b * c) / d; //  20 + (150/5)
   cout << "Value of a + (b * c) / d is  :" << e << endl ;
   return 0;
}
