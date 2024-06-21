// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/segredo-do-cofre

#include <bits/stdc++.h>

using namespace std;

int prefixs[10][100'010];
int sum[100'010];
int N, M, number;

int main(int argc, char const *argv[])
{
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        cin >> number;

        prefixs[number][i]++;

        for (int j = 0; j <= 9; j++)
        {
            prefixs[j][i] += prefixs[j][i - 1];
        }
    }

    int current = 0, last = 0;
    for (int i = 0; i < M; i++)
    {
        cin >> current;

        if (current > last)
        {
            for (int j = 0; j <= 9; j++)
            {
                sum[j] += prefixs[j][current] - prefixs[j][last];
            }
        }
        else
        {
            for (int j = 0; j <= 9; j++)
            {
                sum[j] += prefixs[j][last - 1] - prefixs[j][current - 1];
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
