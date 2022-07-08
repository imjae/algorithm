#include <iostream>
#include <vector>

using namespace std;

int dp[5001];

int main()
{
    int n;
    cin >> n;

    // 3kg과 5kg를 만드는 가장 최소의 봉지수는 1
    // 따라서 dp[3]과 dp[5]는 무조건 1
    dp[3] = dp[5] = 1;

    // 3과 5 다음인 6부터 순회
    for (int i = 6; i <= n; i++)
    {
        if (dp[i - 3])
        {
            dp[i] = dp[i - 3] + 1;
        }

        // dp[i-3]에 값이 존재할 때, dp[i]가 업데이트 됐을수 있다.
        // 만약 dp[i]에 값이 없다면 dp[i] = dp[i-5]+1 로 업데이트
        if (dp[i - 5])
        {
            dp[i] = dp[i] ? min(dp[i], dp[i - 5] + 1) : dp[i - 5] + 1;
        }
    }
    cout << (dp[n] == 0 ? -1 : dp[n]);

    return 0;
}