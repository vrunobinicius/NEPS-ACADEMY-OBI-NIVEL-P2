// https://neps.academy/br/course/logica-de-programacao/lesson/entrega-de-caixas

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C;
    cin >> A >> B >> C;

    bool cxAemcxB = (A < B);
    bool cxAemcxC = (A < C);
    bool cxBemcxC = (B < C);

    bool cxAeBemcxC = (A + B) < C;
    bool cxAeCemcxB = (A + C) < B;
    bool cxBeCemcxA = (B + C) < A;

    if ((cxAemcxB && cxBemcxC) || (cxAeBemcxC || cxAeCemcxB || cxBeCemcxA))
    {
        cout << 1;
    }
    else if ((cxAemcxB) || (cxAemcxC && cxBemcxC))
    {
        cout << 2;
    }
    else
    {
        cout << 3;
    }

    return 0;
}
