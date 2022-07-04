#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    long long int h, b, c, s;

    cin >> h >> b >> c >> s;

    long long int bit = h * b * c * s;

    double mb = (double)bit / (8 * 1024 * 1024);

    printf("%.1f MB", mb);

    return 0;
}