#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int arr[10] = {
    0,
};

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        int n = str[i] - '0';
        arr[n]++;
    }

    int tmp = (arr[6] + arr[9] + 1) / 2;
    for (int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        
        if(arr[i] >= tmp)
            tmp = arr[i];
    }
    
    if(tmp == 0)
    {
        tmp = 1;
    }

    cout << tmp;
}