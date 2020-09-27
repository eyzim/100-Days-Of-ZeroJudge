/* 
Date:     09/27/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a004
          Determine whether it is leap year or not.
*/

#include <iostream>
using namespace std;

int main() 
{
  short Y;
  while (cin >> Y)
  {
      if ( (Y%4==0)&&(Y%100!=0) )
      {
         cout << "閏年\n";
      }
      else if (Y%400==0)
      {
         cout << "閏年\n";
      }
      else
      {
         cout<< "平年\n";
      }
  }
  
  return 0;
}