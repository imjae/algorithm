#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a;
    cin >> a;

    printf("%.2f", round(a * 100) / 100);

    return 0;
}