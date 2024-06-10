// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/ordenacao-simples

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int quantidade;

    cin >> quantidade;

    int numeros[quantidade];
    for (int i = 0; i < quantidade; i++)
    {
        cin >> numeros[i];
    }

    for (int i = 0; i < quantidade; i++)
    {
        for (int j = 0; j < quantidade - 1; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                swap(numeros[j], numeros[j + 1]);
            }
        }
    }

    for (int i = 0; i < quantidade; i++)
    {
        cout << numeros[i] << " ";
    }

    return 0;
}
