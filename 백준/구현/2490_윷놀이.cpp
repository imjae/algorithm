#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, c, d = 0;
    int count = 0;
    vector<char> vec;

    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b >> c >> d;

        count = a + b + c + d;
        char result;
        switch (count)
        {
        case 0:
            result = 'D';
            break;
        case 1:
            result = 'C';
            break;
        case 2:
            result = 'B';
            break;
        case 3:
            result = 'A';
            break;
        case 4:
            result = 'E';
            break;
    
        }

        vec.push_back(result);
    }

    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << '\n';
    }
}