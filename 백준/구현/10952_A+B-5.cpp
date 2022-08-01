#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> arr;

int main()
{
    pair<int, int> pair;

    while(true)
    {
        cin >> pair.first >> pair.second;
        if(pair.first == 0 && pair.second == 0) break;

        arr.push_back(pair);
    }

    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i].first + arr[i].second << "\n";
    }


    return 0;
}