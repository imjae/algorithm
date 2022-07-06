#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, b, c, day;

    day = 1;
    cin >> a >> b >> c;

    while(true)
    {
        if(day % a == 0 && day % b == 0 && day % c == 0)
        {
            cout << day;
            break;
        }

        day++;
    }

    return 0;
}