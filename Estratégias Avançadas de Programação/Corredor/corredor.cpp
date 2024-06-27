// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/corredor

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    int dp[N];
    cin >> dp[0];
    int n;
    for (int i = 1; i < N; i++)
    {
        cin >> n;
        dp[i] = max(n, dp[i - 1] + n);
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
        ans = max(ans, dp[i]);

    cout << ans << "\n";

    return 0;
}
