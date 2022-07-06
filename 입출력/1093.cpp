#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    cin >> a;

    int arr[10000] = {};

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    for (int i = a-1; i >=0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}