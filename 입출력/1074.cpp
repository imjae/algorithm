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
        cout << a-- << endl;

        if (a == 0)
            break;
    }

    return 0;
}