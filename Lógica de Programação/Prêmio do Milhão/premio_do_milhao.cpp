// https://neps.academy/br/course/logica-de-programacao/lesson/premio-do-milhao

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, n; 
    cin >> N;
    long int acessos[N];
    long int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> n;
        acessos[i] = n;
    }

    for (int i = 0; i <= N; i++)
    {
        if (sum >= 1000000) {
            cout << i;
            return 0;
        }
        sum += acessos[i];
    }

    return 0;
}
