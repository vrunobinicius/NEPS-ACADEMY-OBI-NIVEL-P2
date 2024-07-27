// https://neps.academy/br/course/algoritmos-em-grafos/lesson/representando-um-grafo

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<int> M[n + 1];

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        M[u].push_back(v);
        M[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < M[i].size(); j++)
        {
            cout << M[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
