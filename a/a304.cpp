/* 
Date:     10/1/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a034
          Decimal to Binary converter.
          * Output must be LONG type.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{      
    int input;
    while(cin >> input)
    {
        long output=0;
        short temp=0;
        
        // 當被 2 除過後的商大於 1 表示可以繼續進行
        while(input/2 >= 1)
        {
            output = output + ((input % 2) * pow(10, temp));
            input = input / 2;
            temp++;            
        }
        if(input == 1)
        {
          output = output + ((input % 2) * pow(10, temp));
        }        
        cout << output << endl;
    }    

    return 0;
}