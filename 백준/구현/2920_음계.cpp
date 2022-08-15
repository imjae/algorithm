#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

bool isAsc(vector<int> vec)
{
    int num = vec[0];
    for (int i = 0; i < vec.size(); i++)
    {
        if(num > vec[i]) return false;
        num = vec[i];
    }
    return true;
}
bool isDes(vector<int> vec)
{
    int num = vec[0];
    for (int i = 0; i < vec.size(); i++)
    {
        if(num < vec[i]) return false;
        num = vec[i];
    }
    return true;
}

int main()
{
    vector<int> vec;

    string str1 = "ascending";
    string str2 = "descending";
    string str3 = "mixed";

    int n;
    for (int i = 0; i < 8; i++)
    {
        cin >> n;
        vec.push_back(n);
    }

    string result;
    if(isAsc(vec) == true) result = str1;
    else if(isDes(vec) == true) result = str2;
    else if(isAsc(vec) == false && isDes(vec) == false) result = str3;

    cout << result;
}