// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/recibo-de-compra

#include <bits/stdc++.h>

using namespace std;

unsigned long long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{

    int R, K;

    cin >> R >> K;

    int intervalo = R - K;

    int precos[intervalo];
    for (int i = 0; i < intervalo; i++)
        precos[i] = i + 1;

    int indices[K];
    indices[intervalo - 1] = intervalo - 1;
    for (int i = 0; i < intervalo - 2; i++)
        indices[i] = i;

    // {1, 2, 3, 4, 5, 6, 7, 8, 9}
    int sum = 0, combinacoes = 0;
    while (true)
    {
        for (int i = 0; i < intervalo; i++)
        {
            sum += precos[indices[i]];
        }

        if (sum == R)
        {
            combinacoes++;
            indices[K - 2] += 1;
            indices[K - 1] -= 1;
        }

        if (sum > R)
        {
            indices[K - 1] -= 1;
        }

        if (indices[K - 2] == indices[K - 1])
        {
            for (int i = 0; i < K - 2; i++)
            {
                indices[i] += 1;
            }

            indices[K - 2] = indices[K - 3] += 1;

            indices[K - 1] = intervalo--;
        }

        sum = 0;
    }

    return 0;
}
