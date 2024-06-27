// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/saldo-de-gols

#include <bits/stdc++.h>

#define MAXN 10000

using namespace std;

int main(int argc, char const *argv[])
{

    int N, gols[MAXN], dp[MAXN], opt[MAXN];
    cin >> N;

    int X, Y, ans = 0, indexOpt;
    int teste = 1;
    while (N != 0)
    {
        for (int i = 1; i <= N; i++)
        {
            cin >> X >> Y;
            gols[i] = X - Y;
        }

        dp[1] = gols[1];
        opt[1] = 1;
        for (int i = 2; i <= N; i++)
        {
            if (gols[i] > dp[i - 1] + gols[i])
                opt[i] = i;
            else
                opt[i] = opt[i - 1];
            dp[i] = max(gols[i], dp[i - 1] + gols[i]);
        }

        for (int i = 1; i <= N; i++)
        {
            if (dp[i] >= ans)
            {
                ans = dp[i];
                indexOpt = i;
            }
        }

        cout << "Teste " << teste << "\n";
        if (ans > 0)
            cout << opt[indexOpt] << " " << indexOpt << "\n\n";
        else
            cout << "nenhum\n\n";

        ans = 0;
        teste++;

        cin >> N;
    }

    return 0;
}
