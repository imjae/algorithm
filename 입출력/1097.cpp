#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int arr[20][20] = {};

    for (int i = 1; i <= 19; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            cin >> arr[i][j];
        }
    }

    int n, x, y;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;

        for (int j = 1; j <= 19; j++)
        {
            if (arr[x][j] == 0)
                arr[x][j] = 1;
            else
                arr[x][j] = 0;
        }

        for (int j = 1; j <= 19; j++)
        {
            if (arr[j][y] == 0)
                arr[j][y] = 1;
            else
                arr[j][y] = 0;
        }
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