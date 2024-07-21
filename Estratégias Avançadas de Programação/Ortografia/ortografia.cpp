#include <bits/stdc++.h>

using namespace std;

#define MAXOP 2
#define MAXN 1010

int dp[MAXN][MAXN];
int main(int argc, char const *argv[])
{

    int N, M;

    cin >> N >> M;

    vector<string> dictionary(N);
    vector<string> word(M);
    vector<vector<string>> answer;

    for (int i = 0; i < N; i++)
    {
        cin >> dictionary[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> word[i];
    }

    for (int a = 0; a < M; a++)
    {
        answer.push_back(vector<string>());
        for (int b = 0; b < N; b++)
        {
            memset(dp, 0, sizeof(dp));
            for (int i = 1; i <= word[a].length(); i++)
            {
                for (int j = 1; j <= dictionary[b].length(); j++)
                {
                    if (word[a][i - 1] != dictionary[b][j - 1])
                    {
                        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j - 1] + 1;
                    }
                }
            }
            if ((word[a].length() - dp[word[a].length()][dictionary[b].length()]) <= 2 &&
                (dictionary[b].length() - dp[word[a].length()][dictionary[b].length()]) <= 2
                /*&& (max(word[a].length(), dictionary[b].length()) - min(dictionary[b].length(), word[a].length()) > 1)*/)
            {
                answer[a].push_back(dictionary[b]);
            }
        }
    }

    for (auto s : answer)
    {
        for (auto sw : s)
        {
            cout << sw << " ";
        }
        cout << "\n";
    }

    return 0;
}
