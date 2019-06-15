/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-06-14 13:28:33 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-06-14 13:44:24
 */

// ! Week 2 Q1

/*
    Write a program to generate a sequence of numbers in both ascending and descending order. 
*/

#include <iostream>
using namespace std;
void ascending_order(int);
void descending_order(int);
int main(int argc, char const *argv[])
{
    /* code */
    int num;
    cout << "Enter Any Number To Initiate Sequence : " << endl;
    cin >> num;
    ascending_order(num);
    descending_order(num);
    return 0;
}
void ascending_order(int num)
{
    cout << "Sequence In Ascending Order : " << endl;
    for (int i = num; i <= num+20; i++)
    {
        /* code */
        cout << i << ", ";
    }
    cout << endl;
}
void descending_order(int num)
{
    cout << "Sequence In Descending Order : " << endl;
    for (int i = num; i >= num-20; i--)
    {
        /* code */
        cout << i << ", ";
    }
    cout << endl;
}