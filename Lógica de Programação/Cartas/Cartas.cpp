// https://neps.academy/br/course/logica-de-programacao/lesson/cartas

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int> carta;
    int numero;

    int t = 3;
    while (t--)
    {
        cin >> numero;
        if (carta.find(numero) == carta.end())
        {
            carta.insert(numero);
        }
        else
        {
            carta.erase(numero);
        }
    }

    cout << *(carta.begin());

    return 0;
}
