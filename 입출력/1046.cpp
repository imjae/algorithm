#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    cout << a + b + c << endl;

    cout.setf(ios::fixed);
    cout.precision(1);

    cout << (a + b + c) / 3.0;

    return 0;
}