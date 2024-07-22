// https://neps.academy/br/course/algoritmos-em-grafos/lesson/representando-um-grafo

#include <bits/stdc++.h>

using namespace std;

class Graph
{
public:
    int n;
    bool is_undirected;
    vector<int> *adj;

    Graph(int n, bool is_undirected = true)
    {
        this->n = n;
        this->adj = new vector<int>[n];
        this->is_undirected = is_undirected;
    }

    void add_edge(int u, int v)
    {
        this->adj[u].push_back(v);
        if (this->is_undirected)
        {
            this->adj[v].push_back(u);
        }
    }
};

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    Graph graph(n);

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph.add_edge(u, v);
    }

    for (int i = 1; i < n; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < graph.adj[i].size(); j++)
        {
            cout << graph.adj[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
