/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-06-21 09:53:22 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-06-21 10:06:09
 */

//! Week 3 Q3
/*
Write a C function to remove duplicates from an ordered array.
For example, if input array contains 10,10,10,30,40,40,50,80,80,100 then output should be 10,30,40,50,80,100
*/

#include <stdio.h>
#include <conio.h>

#define MAX_SIZE 20 // Maximum size of the array
int size; 

void remove_duplicates(int arr[], int n);

int main()
{
    int arr[MAX_SIZE];

    /* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in the array */
    printf("Enter elements in array : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    remove_duplicates(arr, size);

    printf("\nArray elements after deleting duplicates : ");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
void remove_duplicates(int arr[], int n)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            /* If any duplicate found */
            if(arr[i] == arr[j])
            {
                /* Delete the current duplicate element */
                for(int k=j; k<size; k++)
                {
                    arr[k] = arr[k + 1];
                }

                /* Decrement size after removing duplicate element */
                size--;

                /* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }
}