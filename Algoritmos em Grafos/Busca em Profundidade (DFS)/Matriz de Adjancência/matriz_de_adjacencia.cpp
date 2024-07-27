// https://neps.academy/br/course/algoritmos-em-grafos/lesson/representando-um-grafo

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> m;
    cin >> n;
    int M[n + 1][n + 1];

    memset(M, 0, sizeof(M));
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        M[u][v] = 1;
        M[v][u] = 1;
    }

    cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
