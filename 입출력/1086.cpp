#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    long long int w, h, b;

    cin >> w >> h >> b;

    long long int bit = w * h * b;

    double mb = (double)bit / (8 * 1024 * 1024);

    printf("%.2f MB", mb);

    return 0;
}