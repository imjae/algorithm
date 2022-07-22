#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int arr[10000];

int dd(int n)
{
    int result = 0;
    while (n != 0)
    {
        result = result + n % 10;
        n = n / 10;
    }

    return result;
}

int d(int n)
{
    return n + dd(n);
}

int main()
{
    int tmp;
    for (int i = 0; i <= 10000; i++)
    {
        tmp = d(i);
        arr[tmp]++;
    }

    for(int i=0 ;i<=10000; i++)
    {
        if(arr[i] == 0)
            cout << i << '\n';
    }

    return 0;
}