#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string RemoveOverlap(string str)
{
    char tmp = '0';
    string removeOverlap = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (tmp != str[i])
        {
            tmp = str[i];
            removeOverlap += tmp;
        }
    }

    return removeOverlap;
}

bool IsGroupWord(string str)
{
    bool result = true;

    string targetString = RemoveOverlap(str);

    for (int i = 0; i < targetString.size(); i++)
    {
        char target = targetString[i];
        for (int j = i + 1; j < targetString.size(); j++)
        {
            if (target == targetString[j])
            {
                result = false;
                break;
            }
        }
    }

    return result;
}

int main()
{
    int n;
    cin >> n;

    string tmp;
    vector<string> vector;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        vector.push_back(tmp);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsGroupWord(vector[i])) count++;
    }

    cout << count;

    return 0;
}
