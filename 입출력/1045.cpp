#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    cout.setf(ios::fixed);
    cout.precision(6);
    cout << a + (float)b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << a % b << endl;
    cout << a / (float)b;

    return 0;
}