#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a = 1;

    int input;
    cin >> input;

    int su = 0;

    while (true)
    {
        if (su >= input)
        {
            cout << a-1 << endl;
            break;
        }

        su += a;
        a++;
    }

    return 0;
}