#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, m, d, n;

    long long int num;

    cin >> a >> m >> d >> n;

    num = a;

    for (int i = 1; i < n; i++)
    {
        num = num * m + d;
    }

    cout << num;

    return 0;
}