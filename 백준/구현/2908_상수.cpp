#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str1, str2, tmp1, tmp2;

    cin >> str1 >> str2;

    for (int i = str1.size() - 1; i >= 0; i--)
    {
        tmp1 += str1[i];
    }
    for (int i = str2.size() - 1; i >= 0; i--)
    {
        tmp2 += str2[i];
    }

    int result = 0;

    if (stoi(tmp1) > stoi(tmp2))
    {
        result = stoi(tmp1);
    }
    else
    {
        result = stoi(tmp2);
    }

    cout << result;

    return 0;
}