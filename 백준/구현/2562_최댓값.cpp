#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int su, index, max = -1;

    for (int i = 0; i < 9; i++)
    {
        cin >> su;

        if (su > max)
        {
            max = su;
            index = i+1;
        }
    }

    cout << max << "\n" << index;

    return 0;
}