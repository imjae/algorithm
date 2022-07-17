#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num, a, b;
    vector<pair<int, int>> vector;

    cin >> num;
    int tmp1, tmp2 = 0;
    for (int i = 1; i <= num; i++)
    {
        cin >> tmp1 >> tmp2;
        vector.push_back({tmp1, tmp2});
    }

    for (int i = 0; i < num; i++)
    {
        cout << "Case #" << i + 1 << ": " << vector[i].first + vector[i].second << "\n";
    }

    return 0;
}