/* 
Date:     10/2/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=d074
          Find the largest number.
*/

#include <iostream>

using namespace std;

int main() 
{
    short comp, input, largest=0;
    
    while(cin >> comp)
    {
        for(int n=0; n<comp; n++)
        {
            cin >> input;
            if(input > largest)
            {
                largest = input;
            }
        }
        cout << largest << endl;        
    }
    
    return 0;
}
