/* 
Date:     09/28/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a009
          String to Char.
*/

#include <iostream>
#include <string> 
using namespace std;

int main() 
{
    string input;

    while (cin >> input)
    {
        for(short n=0; n<input.length(); n++)
        {
            cout << char(input[n]-7);
        }
    }
  
  return 0;
}
