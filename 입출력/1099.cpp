#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int map[11][11] = {};

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> map[i][j];
        }
    }

    int x = 2, y = 2;
    bool isFinish = false;

    while (!isFinish)
    {
        if ((map[x][y] == 2))
        {
            map[x][y] = 9;
            isFinish = true;
            break;
        }
        map[x][y] = 9;

        if (map[x][y + 1] != 1)
            y++;
        else
            x++;

        if ((map[x][y] == 2) || (x == 9 && y == 9))
        {
            map[x][y] = 9;
            isFinish = true;
        }
    }

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << map[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}