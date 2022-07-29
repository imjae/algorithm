#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int a;
    vector<int> vector;

    for(int i=0; i<3; i++)
    {
        cin >> a;
        vector.push_back(a);
    }

    sort(vector.begin(), vector.end(), compare);

    cout << vector[1];

    return 0;
}
