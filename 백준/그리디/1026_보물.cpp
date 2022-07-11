#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr1;
vector<int> arr2;

bool ascending_order(int a, int b)
{
    return a < b;
}

bool descending_order(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;

    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr1.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr2.push_back(tmp);
    }

    sort(arr1.begin(), arr1.end(), ascending_order);
    sort(arr2.begin(), arr2.end(), descending_order);

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += arr1[i] * arr2[i];
    }

    cout << result;

    return 0;
}