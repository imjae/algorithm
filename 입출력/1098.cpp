#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int h, w, n, l, d, x, y;

    cin >> h >> w >> n;

    // 높이, 너비, 막대 갯수, 막대 길이, d:0가로 1세로, 시작점

    int arr[100][100] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> l >> d >> x >> y;
        for (int j = 0; j < l; j++)
        {
            // 가로
            if (d == 0)
            {
                arr[x - 1][y + j - 1] = 1;
            }
            // 세로
            else
            {
                arr[x + j - 1][y - 1] = 1;
            }
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}