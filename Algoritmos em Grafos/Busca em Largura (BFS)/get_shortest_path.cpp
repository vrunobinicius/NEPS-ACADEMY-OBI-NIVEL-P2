#include <bits/stdc++.h>

using namespace std;

class Graph
{
public:
    int n;
    vector<int> *adj;
    bool is_undirected;
    int *layer;

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

    int get_shortest_path(int a, int b)
    {
        delete layer;
        delete visited;
        layer = new int[n]();
        visited = new bool[n]();

        bfs(a);
        return layer[b];
    }

    int count_components()
    {
        delete this->visited;
        this->visited = new bool[n]();

        int qtd_components = 0;

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                bfs(i);
                qtd_components++;
            }
        }

        return qtd_components;
    }

    void bfs(int source)
    {
        queue<int> q;
        q.push(source);
        this->visited[source] = true;

        while (!q.empty())
        {
            int current = q.front();
            q.pop();

            for (int i = 0; i < adj[current].size(); i++)
            {
                int neighbour = adj[current][i];

                if (visited[neighbour])
                    continue;

                q.push(neighbour);
                this->visited[neighbour] = true;
                this->layer[neighbour] = (this->layer[current] + 1);
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

    int a, b;
    cin >> a >> b;
    cout << graph.get_shortest_path(a, b) << "\n";

    return 0;
}
