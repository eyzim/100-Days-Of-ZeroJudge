/* 
Date:     09/29/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a024
          Find the greatest common factor.
*/

#include <iostream>
using namespace std;

int main() 
{
    int a, b, n = 2, ans = 1;
    cin >> a >> b;

    // 其中一數為0，無公因數
    if(a==0 || b==0)
    {
        cout << 0;
    }
    else
    {
        // 兩數皆比因數小
        while(a>n && b>n)
        {
            while(a%n==0 && b%n==0)
            {             
                a /= n;
                b /= n;
                ans = ans * n;
            }
            n++;
        }
        cout << ans;
    }
    
  return 0;
}
