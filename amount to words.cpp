/*
 * @Author: Jahangir Ahmad 
 * @Date: 2019-06-21 11:37:23 
 * @Last Modified by: Jahangir Ahmad
 * @Last Modified time: 2019-06-21 11:46:19
 */
//! Week 2 Q4
/*
Write a program to convert an amount (upto billion) in figures to equivalent amount in word
*/
#include <iostream>
using namespace std;

string one[] = { "", "One ", "Two ", "Three ", "Four ", 
                 "Five ", "Six ", "Seven ", "Eight ", 
                 "Nine ", "Ten ", "Eleven ", "Twelve ", 
                 "Thirteen ", "Fourteen ", "Fifteen ", 
                 "Sixteen ", "Seventeen ", "Eighteen ", 
                 "Nineteen "
               }; 
string ten[] = { "", "", "Twenty ", "Thirty ", "Forty ", 
                 "Fifty ", "Sixty ", "Seventy ", "Eighty ", 
                 "Ninety "
               }; 

string numToWords(int n, string s);  
string convertToWords(long n);         

int main(int argc, char const *argv[])
{
    /* code */
    long n; 
    cout << "Enter Any Amount(upto 1 billion) : " ;
    cin >> n;
    cout << endl;
    // convert given number in words 
    cout << convertToWords(n) << endl;
    return 0;
}
string numToWords(int n, string s) 
{
    string str = ""; 
    // if n is more than 19, divide it 
    if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
  
    // if n is non-zero 
    if (n) 
        str += s; 
  
    return str;
}
string convertToWords(long n) 
{
    string out; 
  
    // handles digits at ten millions and hundred 
    // millions places (if any) 
    out += numToWords((n / 10000000), "Crore "); 
  
    // handles digits at hundred thousands and one 
    // millions places (if any) 
    out += numToWords(((n / 100000) % 100), "Lakh "); 
  
    // handles digits at thousands and tens thousands 
    // places (if any) 
    out += numToWords(((n / 1000) % 100), "Thousand "); 
  
    // handles digit at hundreds places (if any) 
    out += numToWords(((n / 100) % 10), "Hundred "); 
  
    if (n > 100 && n % 100) 
        out += "And "; 
  
    // handles digits at ones and tens places (if any) 
    out += numToWords((n % 100), ""); 
  
    return out;
}