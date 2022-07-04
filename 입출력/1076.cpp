#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    char a;
    char b = 'a';

    cin >> a;

    while (true)
    {

        cout << b++ << endl;
        
        if (a < b)
            break;
    }

    return 0;
}