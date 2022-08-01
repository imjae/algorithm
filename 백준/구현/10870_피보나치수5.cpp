#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int f(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return f(num - 2) + f(num - 1);
}
int main()
{
    int num;

    cin >> num;

    cout << f(num);
}