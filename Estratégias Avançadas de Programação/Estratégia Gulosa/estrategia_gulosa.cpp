// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/estrategia-gulosa

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int S[] = {1, 5, 10, 25, 50, 100};

    int V, coins = 0;

    cin >> V;

    for (int i = 5; i >= 0; i--)
    {
        while (V >= S[i])
        {
            coins++;
            V -= S[i];
        }
    }

    cout << coins;

    return 0;
}
