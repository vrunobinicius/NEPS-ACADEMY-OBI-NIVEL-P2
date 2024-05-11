// https://neps.academy/br/course/logica-de-programacao/lesson/zerinho-ou-um

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B && B == C && A == C) {
        cout << '*';
        return 0;
    }

    if (A == B)
    {
        cout << 'C';
    }
    else if (A == C)
    {
        cout << 'B';
    } else if (B == C)
    {
        cout << 'A';
    }
    
    return 0;
}
