#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/**
 n = 5

    *      4 1
   ***     3 3
  *****    2 5
 *******   1 7
*********  0 9
 *******   1 7
  *****    2 5
   ***     3 3
    *      4 1

 */

int main()
{
    vector<string> vec;

    int n;
    cin >> n;

    string tmp;

    for (int i = 1; i <= n; i++)
    {
        tmp = "";
        for (int j = n - i; j > 0; j--)
        {
            tmp += ' ';
        }

        for (int k = 0; k < 2 * i - 1; k++)
        {
            tmp += '*';
        }

        vec.push_back(tmp);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << '\n';
    }

    for (int i = vec.size() - 2; i >= 0; i--)
    {
        cout << vec[i] << '\n';
    }

    return 0;
}