// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/troca

#include <bits/stdc++.h>

using namespace std;

int top[100'010], bottom[100'010];
int prefixs[100'010];

int main(int argc, char const *argv[])
{
    int N, T;
    cin >> N >> T;

    for (int i = 1; i <= N; i++)
    {
        cin >> top[i];
    }

    for (int i = 1; i <= N; i++)
    {
        cin >> bottom[i];
    }

    prefixs[0] = 0;
    int I, J;
    for (int i = 0; i < T; i++)
    {
        cin >> I >> J;
        prefixs[I]++;
        prefixs[J + 1]++;
    }

    for (int i = 1; i <= N; i++)
    {
        prefixs[i] += prefixs[i - 1];
    }

    for (int i = 1; i <= N; i++)
    {
        if (prefixs[i] % 2 == 0)
        {
            cout << top[i] << " ";
        }
        else
        {
            cout << bottom[i] << " ";
        }
    }

    return 0;
}
