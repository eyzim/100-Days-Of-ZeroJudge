/* 
Date:     09/28/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a010
          Prime factorization.
*/

#include <iostream>
using namespace std;

int main() 
{
    int input, n = 2;
    cin >> input;

    while(input > 1)
    {
        short times = 0;
            
        while(input % n == 0)
        {                        
            times++;
            input = input/n;
        }

        if(times>0)
        {
            cout << n;
            if(times>1)
            {
              cout << "^" << times;
            }
            if(input>1)
            {
              cout << " * ";
            }
        }
        
        n++;
    }
  return 0;
}
