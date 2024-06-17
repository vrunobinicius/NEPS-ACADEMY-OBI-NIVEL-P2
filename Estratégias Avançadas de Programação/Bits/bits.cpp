// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/bits

#include <bits/stdc++.h>

using namespace std;

int N, K;
int ans[1010][1010];
bool ansOk[1010][1010];

int f(int n, int b)
{

    if (b >= K)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    if (ansOk[n][b])
    {
        return ans[n][b];
    }

    ans[n][b] = (f(n - 1, 0) + f(n - 1, b + 1)) % 1'000'000'007;
    ansOk[n][b] = true;

    return ans[n][b];
}

int main(int argc, char const *argv[])
{

    cin >> N >> K;

    cout << f(N, 0) << "\n";

    return 0;
}
