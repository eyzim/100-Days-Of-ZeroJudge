/* 
Date:     09/27/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a006
          Solve the quadratic equation.
          *Remember (a/2)!!!
*/

#include <iostream>
#include <math.h> 
using namespace std;

int main() 
{
    short a, b, c;

    while (cin >> a >> b >> c)
    {
        float gen;
        // 判別式 b^2 - 4*a*c
        gen = pow(b,2)-(4*a*c);
        
        // 判別式 < 0 : 無解
        if( gen < 0 )
        {
            cout << "No real root" << endl;
        }
        // 判別式 = 0 : 重根
        else if( gen == 0 )
        {
            cout << "Two same roots x=" << ((-1)*b + (sqrt(gen)))/(2*a) <<endl;
        }
        // 判別式 > 0 : 兩解
        else if( gen > 0 )
        {
            cout << "Two different roots x1=" << ((-1)*b + (sqrt(gen)))/(2*a) 
                                  << " , x2=" << ((-1)*b - (sqrt(gen)))/(2*a) << endl;
        }
    }
  
  return 0;
}