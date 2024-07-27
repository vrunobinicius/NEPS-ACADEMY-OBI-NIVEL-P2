// https://neps.academy/br/course/algoritmos-em-grafos/lesson/representando-um-grafo

#include <bits/stdc++.h>

using namespace std;

class Graph
{
public:
    int n;
    bool is_undirected;
    vector<int> *adj;

    bool *visited = NULL;

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

    int count_components()
    {
        delete this->visited;
        this->visited = new bool[this->n];

        int qtd_components = 0;

        for (int i = 0; i < n; i++)
        {
            if (!this->visited[i])
            {
                this->dfs(i);
                qtd_components++;
            }
        }

        return qtd_components;
    }

    void dfs(int current)
    {
        this->visited[current] = true;
        for (unsigned int i = 0; i < adj[current].size(); i++)
        {
            int neighbour = this->adj[current][i];
            if (!visited[neighbour])
            {
                dfs(neighbour);
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    Graph graph(n);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph.add_edge(u, v);
    }

    cout << "Numero de componentes: " << graph.count_components() << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << i << ": ";
        for (unsigned int j = 0; j < graph.adj[i].size(); j++)
        {
            cout << graph.adj[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
