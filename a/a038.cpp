/* 
Date:     09/30/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a038
          Reverse the input number.
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int output;
    
    for(short i=input.length()-1; i>=0; i--)
    {
        output += (input[i]-'0')*pow(10, i);
    }
    
    cout << output;
    
    return 0;
}