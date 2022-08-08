#include <iostream>

using namespace std;

int arr[26] = {
    0,
};

int main()
{
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        arr[s.at(i) - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}