
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int N;
    cin >> N;

    int numbers[N], dp[N];

    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    dp[0] = numbers[0];
    for (int i = 1; i < N; i++)
        dp[i] = max(numbers[i], dp[i - 1] + numbers[i]);

    int ans = 0;
    for (int i = 0; i < N; i++)
        ans = max(ans, dp[i]);

    cout << ans << "\n";

    return 0;
}
