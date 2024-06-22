#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, q;
    int numbers[10'000], psa[10'000];

    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    psa[0] = numbers[0];
    for (int i = 1; i < n; i++)
    {
        psa[i] = psa[i - 1] + numbers[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;

        cin >> l >> r;

        int sum;

        if (l == 0)
        {
            sum = psa[r];
        }
        else
        {
            sum = psa[r] - psa[l - 1];
        }

        cout << sum << "\n";
    }

    return 0;
}
