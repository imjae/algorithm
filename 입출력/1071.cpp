#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a;

    cin >> a;

    string str;

    switch (a)
    {
    case 12:
    case 1:
    case 2: str = "winter"; break;
    case 3:
    case 4:
    case 5: str = "spring"; break;
    case 6:
    case 7:
    case 8: str = "summer"; break;
    case 9:
    case 10:
    case 11: str = "fall"; break;
    }

    cout << str;

    return 0;
}