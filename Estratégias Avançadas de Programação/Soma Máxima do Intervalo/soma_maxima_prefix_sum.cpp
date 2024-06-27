
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int N;
    cin >> N;

    int numbers[N];

    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    int sum = 0, ans = 0;
    for (int l = 0; l < N; l++)
    {
        for (int r = l; r < N; r++)
        {
            sum += numbers[r];
            ans = max(sum, ans);
        }
        sum = 0;
    }

    cout << ans << "\n";

    return 0;
}
