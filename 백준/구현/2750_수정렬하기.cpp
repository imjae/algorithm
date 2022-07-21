#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

int main()
{
    int n;

    cin >> n;

    vector<int> vector;
    int tmp;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        vector.push_back(tmp);
    }

    sort(vector.begin(), vector.end(), compare);

    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << '\n';
    }

    return 0;
}