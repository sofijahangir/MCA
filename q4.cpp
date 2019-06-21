/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-06-21 10:07:44 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-06-21 10:17:32
 */
//! Week 3 Q4
/*
Write a program which will arrange the positive and negative numbers in a one-dimensional  array 
in such a way that all positive numbers should come first and then all the negative numbers will 
come without changing original sequence of the numbers. Example: 
Original array contains: 10-15,1,3,-2,0,-2,-3,2,-9   
Modified array: 10,1,3,0,2-15,-2,-2,-3,-9 
*/
#include <iostream>
using namespace std;

void Final_Array(int arr[], int n);
void ArrangePosNeg(int arr[], int n);

int main(int argc, char const *argv[])
{
    /* code */
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    ArrangePosNeg(arr, n); 
    Final_Array(arr, n); 
    return 0;
}
void Final_Array(int arr[], int n)
{
    cout << "Sorted Array :  " ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        
    }
    cout << endl;
}

void ArrangePosNeg(int arr[], int n) 
{
    int key, j; 
    for (int i = 1; i < n; i++)
    { 
        key = arr[i]; 
  
        // if current element is positive 
        // do nothing 
        if (key > 0) 
            continue; 
  
        /* if current element is negative, 
        shift positive elements of arr[0..i-1], 
        to one position to their right */
        j = i - 1; 
        while (j >= 0 && arr[j] > 0) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
  
        // Put negative element at its right position 
        arr[j + 1] = key; 
    } 
}