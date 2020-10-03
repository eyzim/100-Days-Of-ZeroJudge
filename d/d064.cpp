/* 
Date:     10/3/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=d064
          Even or odd.
*/

#include <iostream>

using namespace std;

int main() 
{
    short input;
    
    while(cin >> input)
    {
        if(input%2==0)
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Odd" << endl;
        }
    }
    
    return 0;
}
