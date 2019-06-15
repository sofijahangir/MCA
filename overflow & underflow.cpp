/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-03-14 18:42:28 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-03-14 18:53:31
 */

#include <iostream>
#include <limits.h>

using namespace std;
void integer_type(void);
void character_type(void);
void float_type(void);

int main(int argc, char const *argv[])
{
    /* code */
    integer_type();
    character_type();
    float_type();
    return 0;
}

void integer_type(void)
{
    cout << "Interger Max Range : " << INT_MAX << endl;
    cout << "Interger Min Range : " << INT_MIN << endl;
    cout << "interger Overflow : " << INT_MAX+1 << endl;
    cout << "interger Underflow : " << INT_MIN-1 << endl;
}
void character_type(void)
{
    cout << "Character Max Range : " << CHAR_MAX<< endl;
    cout << "Character Min Range : " << CHAR_MIN << endl;
    cout << "Character Overflow : " << CHAR_MAX+1 << endl;
    cout << "Character Underflow : " << CHAR_MIN-1 << endl;
}
void float_type(void)
{
    cout << "Float Max Range : " << __FLT_MAX__ << endl;
    cout << "Float Min Range : " << __FLT_MIN__ << endl;
    cout << "Float Overflow : " << __FLT_MAX__+1 << endl;
    cout << "Float Underflow : " << __FLT_MIN__-1 << endl;
}