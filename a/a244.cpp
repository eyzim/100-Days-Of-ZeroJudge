/* 
Date:     10/2/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a244
          Switch the calculator mode.
          * Set 'b' and 'c' as long long type.
*/

#include <iostream>

using namespace std;

int main() 
{
    short line, a;
    long long int b, c;

    cin >> line;

    for(int i=0; i<line; i++)
    {
      
        cin >> a >> b >> c;
        
        switch(a)
        {
            case 1:
                cout << b+c;
                break;
            case 2:
                cout << b-c;
                break;
            case 3:
                cout << b*c;
                break;
            case 4:
                cout << b/c;
                break;
        }
        cout << endl;
    }
  
  return 0;
}
