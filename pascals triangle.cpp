/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-06-20 16:07:40 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-06-20 17:17:22
 */
//! Week 2 Q2
/*Write a program to generate pascals triangle
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int num_of_rows=5;
    int calculation;
    for (int row = 0; row < num_of_rows; row++)
    {
        /* code */
        for (int space = 0; space < num_of_rows-row; space++)
        {
            /* code */
            cout << " ";
        }
        for (int column = 0; column <= row; column++)
        {
            /* code */
            if (column==0 || row==0) 
            {
                calculation=1;
            }
            else
            {
                /* code */
                calculation=calculation*(row-column+1)/(column);
            }
            cout <<" " << calculation;
        }
        cout << endl;
    }
    return 0;
}
