/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-06-20 15:27:37 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-06-20 16:00:22
 */

//! Week 2 Q5
/*
Write a program to find sum of all prime numbers between 100 and 500
*/
#include <iostream>
using namespace std;
int sum_func(int);
int main(int argc, char const *argv[])
{
    /* code */
    int i, sum = 0;
    int flag;
    cout << "The Prime Series IS : ";
    for (i = 101; i < 500; i++)
    {
        /* code */
        flag = 1;
        for (int j = 2; j <=i/2; j++)
        {
            /* code */
            if (i%j==0)
            {
                /* code */
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            /* code */
            cout << i << " ";
            sum+= i;
        }
    }
    cout << endl;
    cout << "The Sum Of All Prime Numbers Between 100 - 500 Is : " << sum << endl;
    return 0;
}
