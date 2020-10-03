/* 
Date:     10/3/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=d498
          Print many lines.
*/

#include <iostream>

using namespace std;

int main() 
{
    short input;
    
    while(cin >> input)
    {
        for(int i=0; i<input; i++)
        {
            cout << "I don't say swear words!" << endl;
        }
    }
    
    return 0;
}
