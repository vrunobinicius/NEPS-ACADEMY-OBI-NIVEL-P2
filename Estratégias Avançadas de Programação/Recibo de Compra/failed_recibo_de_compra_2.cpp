// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/recibo-de-compra

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int R, K;
    cin >> R >> K;

    int PA = (((K - 1) * K) / 2);
    // cout << PA << "\n";

    if (PA >= R)
        cout << 0 << "\n";

    int intervalo = R - PA;
    int indices[K];
    indices[K - 1] = intervalo - 1;
    for (int i = 0; i < K - 1; i++)
        indices[i] = i;

    int combinacoes = 0, novoIntervalo = 0;
    while (true)
    {
        while (indices[K - 2] < indices[K - 1])
        {
            combinacoes++;
            indices[K - 2] += 1;
            indices[K - 1] -= 1;
        }

        indices[K - 2] = indices[K - 3] + 1;
        for (int i = 0; i < K - 1; i++)
        {
            indices[i] += 1;
            novoIntervalo += indices[i] + 1;
        }
        indices[K - 1] = R - novoIntervalo;
        novoIntervalo = 0;

        if (indices[K - 2] >= indices[K - 1])
        {
            break;
        }
    }

    cout << combinacoes << "\n";

    return 0;
}
