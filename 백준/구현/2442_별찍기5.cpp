#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * j - 1; k++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}