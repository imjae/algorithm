#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a;
    int num = 1;

    cin >> a;

    while(true)
    {
        if(num % 3 != 0)
        {
            cout << num << " ";
        }

        num ++;

        if(num > a)
        {
            break;
        }
    }

    return 0;
}