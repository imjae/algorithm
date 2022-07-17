#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int test(int num)
{
    int result = 0;

    int a = num / 10;
    int b = num % 10;
    int c = a + b;

    result = (b * 10) + (c % 10);

    return result;
}

int main()
{
    int num, result, count = 0;

    cin >> num;

    int su = num;

    while (true)
    {
        count++;
        su = test(su);

        if (su == num)
            break;
    }

    cout << count;

    return 0;
}