/* 
Date:     09/29/2020
Author:   ELV
Question: https://zerojudge.tw/ShowProblem?problemid=a020
          ID Validation Check.
*/

#include <iostream>
#include <string>

using namespace std;

/*
string city[] = {"台北市", 
                 "台中市", "基隆市", "台南市", "高雄市", "台北縣", "宜蘭縣", "桃園縣", "新竹縣", "苗栗縣", "台中縣",
                 "南投縣", "彰化縣", "雲林縣", "嘉義縣", "台南縣", "高雄縣", "屏東縣", "花蓮縣", "台東縣", "澎湖縣",
                 "陽明山", "金門縣", "連江縣", "嘉義市", "新竹市"};
short cityNo[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
*/

char city[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
               'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
               'U', 'V', 'W', 'X', 'Y', 'Z'};

short cityNo[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18,
                  19, 20, 21, 22, 35, 23, 24, 25, 26, 27,
                  28, 29, 32, 30, 31, 33};

int main()
{
    string input;
    cin >> input;
    
    short temp;
    
    // 英文對照數字
    char cityInput = char(input[0]);
    for(unsigned i=0; i<sizeof(city); i++)
    {
        if(cityInput == city[i])
        {
            temp = (cityNo[i]/10)+(cityNo[i]%10)*9;
        }
    }
    
    // 剩餘數字計算
    temp = temp + (input[1]-'0')*8 + (input[2]-'0')*7 
                + (input[3]-'0')*6 + (input[4]-'0')*5 
                + (input[5]-'0')*4 + (input[6]-'0')*3 
                + (input[7]-'0')*2 + (input[8]-'0') + (input[9]-'0');

    // 檢查數字和      
    if(temp%10 == 0)
    {
        cout << "real";
    }
    else
    {
        cout << "fake";
    }

    return 0;
}
