// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/fibonacci

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    long long int dp[30];
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] << "\n";

    return 0;
}
