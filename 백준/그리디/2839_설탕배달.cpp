#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int stdNum = n / 5;
    int tmp = 0;

    int small = 0, big = 0, result = 0;

    vector<int> smallVector;
    vector<int> bigVector;
    int vectorIndex = 0;

    while (true)
    {
        big = stdNum;
        tmp = n - stdNum * 5;
        small = tmp / 3;

        if (tmp % 3 == 0)
        {
            cout << small + big;
            break;
        }

        stdNum--;

        if (stdNum < 0)
        {
            cout << -1;
            break;
        }
    }
    
    return 0;
}