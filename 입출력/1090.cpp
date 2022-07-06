#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, r, n;

    long long int num;

    cin >> a >> r >> n;

    num = a;

    for(int i=1; i<n; i++)
    {
        num *= r;
    }

    cout << num;

    return 0;
}