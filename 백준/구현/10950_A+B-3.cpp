#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> arr;

int main()
{
    int n;
    cin >> n;

    pair<int, int> pair;

    for (int i = 0; i < n; i++)
    {
        cin >> pair.first >> pair.second;
        arr.push_back(pair);
    }

    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i].first + arr[i].second << "\n";
    }

    return 0;
}