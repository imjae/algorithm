#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a;

    cin >> hex >> a;

    for(int i=1; i<16; i++)
    {
        cout << hex << uppercase << a << "*" << hex << i << "=" << hex << i*a << endl;
    }

    return 0;
}