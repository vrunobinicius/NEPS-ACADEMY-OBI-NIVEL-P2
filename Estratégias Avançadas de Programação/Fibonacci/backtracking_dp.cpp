#include <bits/stdc++.h>

using namespace std;

#define lld long long int

const int MAXN = 100;

lld dp[MAXN];

lld backtracking(int n)
{
    if (dp[n] != 0)
    {
        return dp[n];
    }

    if (n == 1 || n == 2)
    {
        return 1;
    }

    dp[n] = backtracking(n - 1) + backtracking(n - 2);
    return dp[n];
}

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;

    cout << backtracking(n) << "\n";

    return 0;
}
