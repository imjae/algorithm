#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, su, min = 1000001, max = -1000001;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> su;

        if (su < min)
        {
            min = su;
        }

        if (su > max)
        {
            max = su;
        }
    }

    cout << min << " " << max;

    return 0;
}