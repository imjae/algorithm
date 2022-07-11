// #include <iostream>
// #include <vector>

// using namespace std;

// int timeTable[100000];

// int main()
// {
//     fill_n(timeTable, 100000, -1);

//     int n;
//     cin >> n;

//     int a, b;
//     int maxTime = 0;
//     int min = 9999;
//     int minIndex = -1;

//     for(int i=0; i<n; i++)
//     {
//         cin >> a >> b;

//         if(maxTime < a) maxTime = a;
//         if(min > b) {
//             min = b;
//             minIndex = a;
//         }

//         if(timeTable[a] == -1) timeTable[a] = b;
//         else if(timeTable[a] > b) timeTable[a] = b;
//     }

//     int count = 0;
//     for(int i=minIndex; i<=maxTime; i++)
//     {
//         int min = 99999;
//         for(int j=i; j<maxTime; j++)
//         {
//             if(timeTable[j] == -1) continue;

//             if(min > timeTable[j])
//             {
//                 min = timeTable[j];
//             }
//         }
//         i = min - 1;
//         count++;
//     }

//     cout << count;

//     return 0;
// }

#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<pair<int, int>> arr;

bool compare_start(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

bool compare_end(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        arr.push_back({start, end});
    }

    sort(arr.begin(), arr.end(), compare_start);

    int s = 0;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].first < s)
            continue;

        int j = i + 1;
        while ((j < n) && (arr[i].second == arr[j].second))
        {
            j++;
        }

        sort(arr.begin() + i, arr.begin() + j, compare_end);

        result += 1;
        s = arr[i].second;
    }

    cout << result;

    return 0;
}