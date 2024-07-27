// https://neps.academy/br/course/algoritmos-em-grafos/lesson/mobile

#include <bits/stdc++.h>

using namespace std;

#define BEM "bem"
#define MAL "mal"
#define MAXN 100'010

int N;
vector<int> mobile[MAXN];
int visited[MAXN] = {false};

int dfs(int current)
{
    int subtree_father_size = 1;
    int subtree_size = -1;
    visited[current] = true;
    for (auto i : mobile[current])
    {
        if (!visited[i])
        {
            int subtree = dfs(i);
            if (subtree == -1)
                return -1;
            if (subtree_size == -1)
                subtree_size = subtree;
            else if (subtree_size != subtree)
                return -1;

            subtree_father_size += subtree;
        }
    }
    return subtree_father_size;
}

int main(int argc, char const *argv[])
{
    cin >> N;

    for (int k = 0, i, j; k < N; k++)
    {
        cin >> i >> j;
        mobile[j].push_back(i);
    }

    int balance = dfs(0);
    if (balance == -1)
        cout << MAL << "\n";
    else
        cout << BEM << "\n";

    return 0;
}
