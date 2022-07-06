#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int arr[10000] = {};

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int min = 24;

    for(int i=0; i<a; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << min;
    
    return 0;
}