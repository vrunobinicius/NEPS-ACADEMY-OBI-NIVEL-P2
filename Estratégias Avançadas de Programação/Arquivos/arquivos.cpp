// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/arquivos

#include <bits/stdc++.h>

#define lli long long int

using namespace std;
int main(int argc, char const *argv[])
{

    lli N, B, folders = 0;
    cin >> N >> B;

    int bytes[N];

    for (int i = 0; i < N; i++)
        cin >> bytes[i];

    sort(bytes, bytes + N);

    int i = 0, j = N - 1;
    while (i <= j)
    {
        if (bytes[i] + bytes[j] <= B)
        {
            folders++;
            i++;
            j--;
        }
        else
        {
            folders++;
            j--;
        }
    }

    cout << folders << "\n";

    return 0;
}
