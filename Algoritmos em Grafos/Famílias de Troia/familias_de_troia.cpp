// https://neps.academy/br/course/algoritmos-em-grafos/lesson/familias-de-troia

#include <bits/stdc++.h>

using namespace std;

#define MAXN 200010

int visited[MAXN];
vector<int> graph[MAXN];
int N, M;

void dfs(int current)
{
    visited[current] = true;
    // for (int i = 0; i < graph[current].size(); i++)
    // {
    //     int neighbour = graph[current][i];
    //     if (!visited[neighbour])
    //     {
    //         dfs(neighbour);
    //     }
    // }
    for (auto i : graph[current])
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
}

// int count_family()
// {
//     int qtd_family = 0;

//     for (int i = 1; i <= N; i++)
//     {
//         if (!visited[i])
//         {
//             dfs(i);
//             qtd_family++;
//         }
//     }

//     return qtd_family;
// }

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> M;

    for (int i = 1, u, v; i <= M; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int qtd_family = 0;

    // count_family()
    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            qtd_family++;
        }
    }

    cout << qtd_family << "\n";

    return 0;
}
