#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t, a, b;

    cin >> t;

    vector<pair<int, int>> vector;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        vector.push_back({a, b});
    }

    for (int i = 0; i < t; i++)
    {
        int z = vector[i].first;
        int x = vector[i].second;

        cout << "Case #" << i + 1 << ": " << z << " + " << x << " = " << z + x << "\n";
    }

    return 0;
}