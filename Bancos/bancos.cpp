#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    priority_queue<int, vector<int>, greater <int>> clientes;
    int C, N, T, D;
    int tempo, excedido = 0;
    cin >> C >> N;

    if (C >= N)
    {
        cout << excedido;
        return 0;
    }

    for (int i = 0; i < C; i++)
    {
        cin >> T >> D;
        clientes.push(T + D);
    }

    for (int i = C; i < N; i++)
    {
        cin >> T >> D;

        tempo = clientes.top();
        clientes.pop();

        if ((tempo - T) > 20)
        {
            excedido++;
        }

        clientes.push(max(tempo, T) + D);
    }

    cout << excedido;

    return 0;
}