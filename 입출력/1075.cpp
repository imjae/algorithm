#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a;

    cin >> a;

    while (true)
    {
        if (a == 0)
            break;

        cout << --a << endl;
    }

    return 0;
}