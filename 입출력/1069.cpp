#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    char a;

    cin >> a;

    string str;

    switch (a)
    {
    case 'A':
        str = "best!!!";
        break;
    case 'B':
        str = "good!!";
        break;
    case 'C':
        str = "run!";
        break;
    case 'D':
        str = "slowly~";
        break;
    default:
        str = "what?";
    }

    cout << str;

    return 0;
}