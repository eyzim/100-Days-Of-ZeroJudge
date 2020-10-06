/* 
Date:     10/5/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a104
          Sorting.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int input;
    
    while(cin >> input)
    {
        int inputArr[input];
    
        for(int i=0; i<input; i++)
        {   
            cin >> inputArr[i];
        }
        
        sort(inputArr, inputArr+input);
        
        for(int i=0; i<input; i++)
        {
            cout << inputArr[i] << " ";
        }
        
        cout << endl;
    }

    return 0;
}
