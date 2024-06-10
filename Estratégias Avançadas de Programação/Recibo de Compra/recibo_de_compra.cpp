// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/recibo-de-compra

#include <bits/stdc++.h>

using namespace std;

int R, K, ans = 0;

void combinacoes(int nivel, int minimo, int maximo)
{
    if (nivel == K)
    {
        if (minimo <= maximo)
        {
            ans++;
        }
    }
    else
    {
        for (int i = minimo; i <= maximo; i++)
        {
            combinacoes(nivel + 1, i + 1, maximo - i);
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> R >> K;

    combinacoes(1, 1, R);

    cout << ans << "\n";

    return 0;
}