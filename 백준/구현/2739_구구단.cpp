#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= 9; i++)
    {
        cout << num << " * " << i << " = " << (num * i) << endl;
    }

    return 0;
}