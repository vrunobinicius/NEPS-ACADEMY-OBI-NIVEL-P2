// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/soma-das-casas

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, K;
    cin >> N;

    int houses[N];
    for (int i = 0; i < N; i++)
        cin >> houses[i];

    cin >> K;

    int i = 0, j = N - 1;
    while (i < j)
    {
        if (houses[i] + houses[j] == K)
        {
            cout << houses[i] << " " << houses[j] << "\n";
            return 0;
        }

        if (houses[i] + houses[j] < K)
            i++;
        else
            j--;
    }

    return 0;
}
