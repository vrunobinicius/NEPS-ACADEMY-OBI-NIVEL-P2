// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/segredo-do-cofre

#include <bits/stdc++.h>

using namespace std;

int prefixos[10][100111];
int sum[100111];
int main(int argc, char const *argv[])
{
    int n, m, x;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        prefixos[x][i] += 1;

        for (int j = 0; j <= 9; j++)
        {
            prefixos[j][i] += prefixos[j][i - 1];
        }
    }

    int last = 0, current = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> current;

        if (current > last)
        {
            for (int j = 0; j <= 9; j++)
            {
                sum[j] += prefixos[j][current] - prefixos[j][last];
            }
        }
        else
        {
            for (int j = 0; j <= 9; j++)
            {
                sum[j] += prefixos[j][last - 1] - prefixos[j][current - 1];
            }
        }

        last = current;
    }

    for (int i = 0; i <= 9; i++)
    {
        cout << sum[i] << " ";
    }

    return 0;
}
