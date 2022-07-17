#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x, y, result;

    cin >> x >> y;

    if (x > 0)
    {
        // 1, 4 사분면
        result = (y > 0) ? 1 : 4;
    }
    else
    {
        // 2, 3 사분면
        result = (y > 0) ? 2 : 3;
    }

    cout << result;

    return 0;
}