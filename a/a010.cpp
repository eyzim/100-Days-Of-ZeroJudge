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
            
        // 找到因數
        while(input % n == 0)
        {                        
            times++;
            input /= n;
        }

        // 印出因數
        if(times>0)
        {
            cout << n;

            // 印出次方
            if(times>1)
            {
              cout << "^" << times;
            }
            // 若除掉因數後仍不為1，表示還有後面的因數，印出 " * "
            if(input>1)
            {
              cout << " * ";
            }
        }
        
        n++;
    }
  return 0;
}
