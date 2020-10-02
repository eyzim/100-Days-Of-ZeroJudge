/* 
Date:     09/29/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a015
          Input and output of 2D matrix.
*/

#include <iostream>
using namespace std;

int main()
{
    short row, col;
    
    while(cin >> row >> col)
    {
        int k[row][col];
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin >> k[i][j];
            }
        }
        for(int j=0; j<col; j++)
        {
            for(int i=0; i<row; i++)
            {
                cout << k[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
