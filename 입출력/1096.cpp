#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, x, y;

    int arr[20][20] = {};

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        cin >> x >> y;
        arr[x][y] = 1;
    }

    for (int i = 1; i <= 19; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}