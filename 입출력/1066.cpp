#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    vector<int> vec = {a, b, c};

    for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
    {
        if (*itr % 2 == 0)
        {
            cout << "even";
        }
        else
        {
            cout << "odd";
        }

        if ((itr + 1) != vec.end())
        {
            cout << endl;
        }
    }

    return 0;
}