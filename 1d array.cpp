/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-06-20 17:35:57 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-06-20 18:51:08
 */
//! Week 3 Q1
/*
Create a one dimensional array of characters and store a string inside it by reading from standard input.
Write a program to input 20 arbitrary numbers in one-dimensional array. Calculate Frequency of each number.
Print the number and its frequency in a tabular form 
*/
#include <iostream>
#include <iomanip>
using namespace std;

void line();
void star();

int main(int argc, char const *argv[])
{
    /* code */
    char char_array[20]; // creating 1d array
    int num_array[20];
    int freq[30] = {0};
    cout << "Enter Elements Of One Dimensional Character Array : " << endl;
    for (int i = 0; i <=20; i++)
    {
        /* code */
        cin >> char_array[i];
    }
    cout << "Reading From Array : " << char_array << endl;
    cout << "Enter Numbers : " << endl;
    for (int i = 0; i <=20; i++)
    {
        /* code */
        cin >> num_array[i];
    }
    
    cout<<setw(25)<<"Frequency  TABLE\n";
    line();
    cout << setw(7) << "Number" << setw(25) << "Frequency" << endl;
    line();
    for (int i = 0; i <= 20; i++)
    {
        /* calculating frequency of number */
        freq[num_array[i]]++;
    }
    for (int i = 0; i < 30; i++)
    {
        /* code */
        if (freq[i])
        {
            /* code */
            cout << setw(4) << i << setw(23) << freq[i] << endl;
        }
        
    }
    line();
    cout << endl;
    star();
    cout << setw(18) << "Finish" << endl;
    star();
    return 0;
}
void line()
{
    for(int i=1;i<18;i++)
    {
        cout<<"--";
    }
    cout<<"\n";
    
}
void star()
{
    for(int i=1;i<18;i++)
    {
        cout<<"**";
    }    
    cout<<"\n";
}