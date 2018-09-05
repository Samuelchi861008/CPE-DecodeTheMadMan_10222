/* **************************************************************************

    * File Name : Decode_the_Mad_man.cpp

    * Creation Date : 2018-09-03 13:29:09

    * Last Modified : 2018-09-05 10:27:30

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
#include <string> //getline()
using namespace std;

int main()
{
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    //將鍵盤上字母按照順序變成字串
    string inputStr; //輸入的字串

    while(getline(cin, inputStr))
    {
        for(int i = 0; inputStr[i] != '\0'; i++)
        {
            if(inputStr[i] == ' ' || inputStr[i] == '\n')
            {
                cout << inputStr[i]; //若輸入的字串中有空格或換行，則照做
                continue;
            }
            if(inputStr[i] >= 'A' && inputStr[i] <= 'Z')
                inputStr[i] += 32; //若輸入的字串中有大寫文字，先轉小寫文字
            for(int j = 0; keyboard[j] != '\0'; j++)
                if(inputStr[i] == keyboard[j])
                    cout << keyboard[j - 2];
                    //往左邊移動兩格印出，即keyboard字串往左兩位
        }
        cout << "\n";
    }
    return 0;
}
