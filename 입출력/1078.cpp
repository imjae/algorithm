#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a;
    int b = 0;
    int sum = 0;

    cin >> a;

    while (true)
    {
        if(b % 2 == 0)
        {
            sum += b;
        }
        b++;
        
        if (a < b)
            break;
    }

    cout << sum;

    return 0;
}