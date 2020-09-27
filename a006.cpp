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
        gen = pow(b,2)-(4*a*c);
        
        if( gen < 0 )
        {
            cout << "No real root" << endl;
        }
        else if( gen == 0 )
        {
            cout << "Two same roots x=" << ((-1)*b + (sqrt(gen)))/(2*a) <<endl;
        }
        else if( gen > 0 )
        {
            cout << "Two different roots x1=" << ((-1)*b + (sqrt(gen)))/(2*a) 
                                  << " , x2=" << ((-1)*b - (sqrt(gen)))/(2*a) << endl;
        }
    }
  
  return 0;
}