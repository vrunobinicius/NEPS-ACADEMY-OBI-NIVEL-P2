#include <bits/stdc++.h>

using namespace std;

#define lld long long int

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;

    lld dp[1000];
    dp[1] = dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] << "\n";

    return 0;
}
