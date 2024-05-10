#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, T, H;
    string nome;
    priority_queue<pair<int,string>, vector<pair<int,string>>> alunos;
    vector<vector<string>> times;

    cin >> N >> T;
    while (N--)
    {
        cin >> nome >> H;
        alunos.push(make_pair(H, nome));
    }

    for (int i = 0; i < T; i++)
    {
        times.push_back(vector<string>());
    }
    
    int i = 0;
    while (!alunos.empty())
    {
        if (i == T)
        {
            i = 0;
        }

        times[i].push_back(alunos.top().second);
        alunos.pop();
        i++;
    }
    
    for (int i = 0; i < T; i++)
    {
        sort(times[i].begin(), times[i].end());
        cout << "Time " << i+1 << "\n";
        for (int j = 0; j < times[i].size(); j++)
        {
            cout << times[i][j] << "\n";
        }
        cout << "\n";
        
    }

    return 0;
}
