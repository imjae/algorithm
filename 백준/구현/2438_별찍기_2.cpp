#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for(int j=0; j<num-i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}