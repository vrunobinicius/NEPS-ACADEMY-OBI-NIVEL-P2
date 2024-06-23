#include <bits/stdc++.h>

using namespace std;

double sqrt_binary_search(int N)
{
    double low = 0, high = N, mid;
    double precision = 1e-7;

    while ((high - low) > precision)
    {
        mid = (low + high) / 2;
        if (mid * mid < N)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    return mid;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << sqrt_binary_search(n) << "\n";

    return 0;
}
