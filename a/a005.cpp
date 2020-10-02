/* 
Date:     09/27/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a005
          Finish the arithmetic sequence or geometric sequence.
*/

#include <iostream>
using namespace std;

int main() 
{
    short ques, ans;
    cin >> ques;

    for(short n=1; n<ques+1; n++)
    {
        short a, b, c, d;
        cin >> a >> b >> c >> d;

        // 等差數列
        if( (c-b) == (b-a) )
        {
            ans = d+(b-a);
            cout << a << " " << b << " " << c << " " << d << " " << ans << endl;
        }
        // 等比數列
        else if( (c/b) == (b/a) )
        {
            ans = d*(b/a);
            cout << a << " " << b << " " << c << " " << d << " " << ans << endl;
        }
    }
  
  return 0;
}
