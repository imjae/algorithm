#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    vector<int> vector;

    int n, x;
    cin >> n >> x;

    int num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num < x) vector.push_back(num);
    }

    for(int i=0; i<vector.size(); i++)
    {
        cout << vector[i] << "\n";
    }

    return 0;
}