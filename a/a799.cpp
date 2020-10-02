/* 
Date:     10/2/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a799
          Absolute value.
*/

#include <iostream>

using namespace std;

int main() 
{
  int input;

  while(cin >> input)
  {
    input > 0 ? cout << input << endl : cout << (-1) * input << endl;
  }
  
  return 0;
}
