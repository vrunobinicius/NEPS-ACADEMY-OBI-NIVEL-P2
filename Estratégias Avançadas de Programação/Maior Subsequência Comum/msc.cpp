// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/maior-subsequencia-comum

#include <bits/stdc++.h>

#define MAXN 1010
using namespace std;

int dp[MAXN][MAXN];
int main(int argc, char const *argv[])
{
    int N, M;
    cin >> N >> M;

    int A[N], B[M];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (A[i - 1] != B[j - 1])
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
        }
    }

    cout << dp[N][M] << "\n";

    return 0;
}
