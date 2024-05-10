#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{

    map<int, int> presencas;
    int total = 0, N, Vi;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> Vi;
        if (presencas.find(Vi) == presencas.end())
        {
            presencas[Vi] = total++;
        }
    }

    cout << total << "\n";

    return 0;
}
