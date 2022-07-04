#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a;
    int b = 0;

    cin >> a;

    while (true)
    {

        cout << b++ << endl;
        
        if (a < b)
            break;
    }

    return 0;
}