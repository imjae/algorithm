#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int result = 0;

    for(int i=1; i<=num; i++)
    {
        result += i;
    }

    cout << result;

    return 0;
}