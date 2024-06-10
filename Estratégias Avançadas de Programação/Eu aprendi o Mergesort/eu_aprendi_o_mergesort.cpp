// https://neps.academy/br/course/estrategias-avancadas-de-programacao/lesson/eu-aprendi-o-mergesort

#include <bits/stdc++.h>

using namespace std;

void merge(int l, int r, vector<int> &x)
{
    vector<int> S;

    int mid = (l + r) / 2;
    int p1 = l, p2 = mid + 1;

    while (p1 <= mid && p2 <= r)
    {
        if (x[p1] >= x[p2])
        {
            S.push_back(x[p1]);
            p1++;
        }
        else
        {
            S.push_back(x[p2]);
            p2++;
        }
    }

    while (p1 <= mid)
    {
        S.push_back(x[p1]);
        p1++;
    }

    while (p2 <= r)
    {
        S.push_back(x[p2]);
        p2++;
    }

    for (int i = 0; i < S.size(); i++)
    {
        x[l + i] = S[i];
    }
}

void mergeSort(int l, int r, vector<int> &x)
{

    int mid = (l + r) / 2;

    if (l < r)
    {
        mergeSort(l, mid, x);
        mergeSort(mid + 1, r, x);
        merge(l, r, x);
    }
}

int main(int argc, char const *argv[])
{

    int N;
    cin >> N;

    vector<int> numeros(N);
    for (int i = 0; i < N; i++)
    {
        cin >> numeros[i];
    }

    mergeSort(0, N - 1, numeros);

    for (int i = 0; i < N; i++)
    {
        cout << numeros[i] << " ";
    }

    return 0;
}
