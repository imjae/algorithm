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
            smallVector.push_back(small);
            bigVector.push_back(big);
        }

        stdNum--;

        if (stdNum < 0)
        {
            break;
        }
    }

    int bigCount = -1;
    int resultIndex = 0;
    for (int i = 0; i < smallVector.size(); i++)
    {
        if (bigCount < bigVector[i])
        {
            bigCount = bigVector[i];
            resultIndex = i;
        }
    }

    if (bigCount == -1)
    {
        result = -1;
    }
    else
    {
        result = smallVector[resultIndex] + bigVector[resultIndex];
    }

    cout << result;

    return 0;
}