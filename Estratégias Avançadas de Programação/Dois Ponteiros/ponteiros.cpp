// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/dois-ponteiros

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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] + numbers[j] == k)
            {
                cout << "(" << i << ", " << j << ")";
                return 0;
            }
        }
    }

    cout << "null\n";

    return 0;
}
