/* 
Date:     10/3/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a053
          Check the grade with if else loop.
*/

#include <iostream>

using namespace std;

int gradeCheck(int input)
{
    short grade;
    
    if(input <= 10)
    {
        grade = input * 6;
    }
    else if(input <= 20)
    {
        grade = 10 * 6 + (input - 10) * 2;
    }
    else if(input <= 40)
    {
        grade = 10 * 6 + 10 * 2 + (input - 20) * 1;
    }
    else
    {
        grade = 100;
    }
    
    return grade;
}

int main() 
{
    short input;
    
    while(cin >> input)
    {
        cout << gradeCheck(input) << endl;
    }
    
    return 0;
}