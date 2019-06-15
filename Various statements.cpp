/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-03-12 19:38:58 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-03-12 20:00:15
 */
// ! Week 1 Q3:
/*
Write a program that demonstrate the use of various input statements like 
getchar(), getch(), scanf().
*/
#include <iostream>
#include <conio.h>

using namespace std;

void use_of_getchar(void);
void use_of_getch(void);
void use_of_scanf(void);

int main(int argc, char const *argv[])
{
    /* code */
    use_of_getchar();
    use_of_getch();
    use_of_scanf();
    return 0;
}
void use_of_getchar(void)
{
   // cout  << "Inside getchar() function :"
    char ch;
    cout << "Demonstrating The Use Of getchar() : " << endl;
    ch = getchar();
    cout << "Input Char Is  : " << ch << endl;
    cout << "getchar() uses buffer " << endl;
}
void use_of_getch(void)
{
   // cout  << "Inside getchar() function :"
    char ch;
    cout << "Demonstrating The Use Of getch() : " << endl;
    ch = getch();
    cout << "Input Char Is  : " << ch << endl;
    cout << "getch() does not use any buffer " << endl;
}
void use_of_scanf(void)
{
   // cout  << "Inside getchar() function :"
    int a;
    char c;
    cout << "Demonstrating The Use Of scanf() : " << endl;
    scanf("%i,%c",&a, &c);
    cout << "scanf() will take char or string as input : " << endl;
}