#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, result;
    cin >> n;

    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        result = 1;
    else
        result = 0;

    cout << result;

    return 0;
}