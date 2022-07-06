#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, d, n, num;

    cin >> a >> d >> n;

    num = a;

    for(int i=1; i<n; i++)
    {
        num += d;
    }

    cout << num;

    return 0;
}