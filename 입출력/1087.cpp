#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int su = 1;
    int result = 0;
    int input;

    cin >> input;

    while(true)
    {
        result += su++;

        if(result >= input)
        {
            break;
        }
    }

    cout << result;

    return 0;
}