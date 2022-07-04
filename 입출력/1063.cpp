#include <stdlib.h>
#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
    long long int a, b;

    cin >> a >> b;

    cout << ((a > b) ? a : b);

    return 0;
}