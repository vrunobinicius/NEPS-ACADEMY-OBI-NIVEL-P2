#include <bits/stdc++.h>

using namespace std;

#define MAXN 26

// int dp[MAXN][MAXN];

void edit_distance(int M[][MAXN], string word, string dictWord)
{
    for (unsigned int i = 1; i <= word.size(); i++)
    {
        for (unsigned int j = 1; j <= dictWord.size(); j++)
        {
            M[i][j] = min(min(M[i - 1][j] + 1,
                              (word[i - 1] == dictWord[j - 1] ? M[i - 1][j - 1] : M[i - 1][j - 1] + 1)),
                          M[i][j - 1] + 1);
        }
    }
}

int main(int argc, char const *argv[])
{

    int N, M;

    cin >> N >> M;

    vector<string> dictionary(N);
    vector<string> word(M);
    vector<vector<string>> answer[N * M];

    for (int i = 0; i < N; i++)
    {
        cin >> dictionary[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> word[i];
    }

    int matriz[MAXN][MAXN];
    for (int i = 0; i < N; i++)
    {
        answer[i].push_back(vector<string>());
        // cout << dictionary[i] << ">\n\n";
        for (int j = 0; j < M; j++)
        {
            memset(matriz, 0, sizeof matriz);
            for (int l = 1; l <= word[j].size(); l++)
            {
                matriz[l][0] = l;
            }
            for (int l = 1; l <= dictionary[i].size(); l++)
            {
                matriz[0][l] = l;
            }

            edit_distance(matriz, word[i], dictionary[j]);
            if (matriz[word[i].size() - 1][dictionary[j].size() - 1] <= 2 && matriz[word[i].size() - 1][dictionary[j].size() - 1] >= 1)
            {
                cout << dictionary[j] << " ";
            }
            // cout << word[j] << ":\n";
            // for (int a = 0; a <= word[j].size(); a++)
            // {
            //     for (int c = 0; c <= dictionary[i].size(); c++)
            //     {
            //         cout << matriz[a][c] << "| ";
            //     }
            //     cout << "\n";
            // }
            // cout << "\n\n";
        }
        // cout << "\n\n";
    }

    // for (auto s : answer)
    // {
    //     for (auto sw : s)
    //     {
    //         cout << sw << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}
