#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for(int i=0; i<str.size(); i++)
    {
        if(i % 10 == 0 && i != 0) cout << "\n";
        cout << str[i];
    }
}