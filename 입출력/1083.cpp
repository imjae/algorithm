#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a;

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        if (i % 3 == 0)
            cout << 'X';
        else
            cout << i;

        cout << ' ';
    }

    return 0;
}