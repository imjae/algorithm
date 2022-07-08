#include <iostream>
#include <vector>

using namespace std;

int unit[10];

int main()
{
    int n, money, result = 0;

    cin >> n >> money;

    for (int i = 0; i < n; i++)
        cin >> unit[i];

    for (int i = n - 1; i >= 0; i--)
    {
        if(money == 0) break;
        if(unit[i] > money) continue;

        result += (money / unit[i]);
        money = money % unit[i];
    }

    cout << result;

    return 0;
}