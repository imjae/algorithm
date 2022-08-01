#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> scoreVector;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        int accScore = 1;
        int score = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'O')
            {
                score += accScore++;
            }
            else if (str[i] = 'X')
            {
                accScore = 1;
            }
        }

        scoreVector.push_back(score);
    }

    for(int i=0; i<scoreVector.size(); i++)
    {
        cout << scoreVector[i] << "\n";
    }

    return 0;
}