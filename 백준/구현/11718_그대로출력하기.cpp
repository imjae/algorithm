#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str;

    while (true)
    {
        getline(cin, str);
        if (str == "")
            break;

        cout << str << '\n';
    }
}