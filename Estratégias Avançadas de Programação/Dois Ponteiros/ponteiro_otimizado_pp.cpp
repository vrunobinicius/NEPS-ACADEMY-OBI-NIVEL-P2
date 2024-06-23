#include <bits/stdc++.h>

using namespace std;

#define MAXN 100000
int main(int argc, char const *argv[])
{

    int numbers[MAXN], n, num, k;
    cin >> n;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (numbers[i] + numbers[j] == k)
        {
            cout << "(" << i << ", " << j << ")";
            return 0;
        }
        else if (numbers[i] + numbers[j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    cout << "null\n";

    return 0;
}
