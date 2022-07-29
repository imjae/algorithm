#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int n, num;
    string str;

    cin >> n;

    vector<pair<int, string>> vector;

    for (int i = 0; i < n; i++)
    {
        cin >> num >> str;
        vector.push_back({num, str});
    }

    for (int i = 0; i < n; i++)
    {
        int su = vector[i].first;
        string str = vector[i].second;

        for (int k = 0; k < str.length(); k++)
        {
            for (int j = 0; j < su; j++)
            {
                cout << str[k];
            }
        }
        cout << "\n";
    }

    return 0;
}