#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/**

 *        *  0 8
 **      **  1 6
 ***    ***  2 4
 ****  ****  3 2
 **********  4 0
 ****  ****  5 2
 ***    ***  6 4
 **      **  7 6
 *        *  8 8

 *      *    0 6
 **    **    1 4
 ***  ***    2 2
 ********    3 0
 ********    4 0
 ***  ***    5 2
 **    **    6 4
 *      *    7 6

 */

int main()
{
    int n;
    cin >> n;

    string s1;
    string s2;

    bool isEven = n % 2 == 0;

    for (int i = 0; i < n; i++)
    {
        s1 = "";
        s2 = "";
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
            s1 += '*';
        }
        for (int k = i; k < n - 1; k++)
        {
            cout << ' ';
            s2 += ' ';
        }
        cout << s2 << s1 << '\n';
    }

    int c = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        s1 = "";
        s2 = "";

        if (c > 0)
        {
            c--;
            continue;
        }

        for (int j = 0; j <= i; j++)
        {

            cout << '*';
            s1 += '*';
        }

        for (int k = i; k < n - 1; k++)
        {
            cout << ' ';
            s2 += ' ';
        }

        cout << s2 << s1 << '\n';
    }

    return 0;
}