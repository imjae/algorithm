#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int arr[10] = {};

int main()
{
    int a, b, c, su;

    cin >> a >> b >> c;

    su = a * b * c;
    string str = to_string(su);
    string s = "";
    int num = 0;

    for (int i = 0; i < str.size(); i++)
    {
        num = stoi(s += str.at(i));

        arr[num] += 1;
        s = "";
    }

    for(int i=0; i<10; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}