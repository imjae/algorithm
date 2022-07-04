#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    int num = 1;

    cin >> a;

    while (num <= a)
    {
        num++;

        cin >> b;
        cout << b << endl;
    }

    return 0;
}