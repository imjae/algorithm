#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int arr[90] = {
    0,
};

int main()
{
    string str;
    char result;

    cin >> str;

    char tmp;
    for (int i = 0; i < str.size(); i++)
    {
        tmp = str[i];
        if ((int)tmp >= 97)
        {
            arr[(int)tmp - 32]++;
        }
        else
        {
            arr[(int)tmp]++;
        }
    }

    int max = 0;
    int index = 0;

    for (int i = 65; i <= 90; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }

    int cnt = 0;
    for (int i = 65; i <= 90; i++)
    {
        if (arr[i] == max)
            cnt++;
    }

    if(cnt > 1) result = '?';
    else result = (char)index;

    cout << result;

    return 0;
}