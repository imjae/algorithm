#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int result = (a != b) ? 1 : 0;

    cout << result;

    return 0;
}