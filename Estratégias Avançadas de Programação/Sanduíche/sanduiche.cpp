// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/sanduiche

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, D, sum = 0, ans = 0, total = 0;
    cin >> N >> D;

    int sandwichs[N];
    for (int i = 0; i < N; i++)
    {
        cin >> sandwichs[i];
        total += sandwichs[i];
    }

    if (total < D)
    {
        cout << ans << "\n";
        return 0;
    }

    for (int i = 0, j = 0; i < N; i++)
    {
        while (sum < D)
        {
            sum += sandwichs[j];
            j++;
            if (j >= N)
                j = 0;
        }

        if (sum == D)
            ans++;

        sum -= sandwichs[i];
    }

    cout << ans << "\n";

    return 0;
}
