// https://neps.academy/br/course/logica-de-programacao/lesson/lampadas-do-hotel

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int Ia, Ib, Fa, Fb;

    cin >> Ia >> Ib >> Fa >> Fb;

    if(Ib == Fb){
        if(Ia == Fa)
            printf("0\n");
        else
            printf("1\n");
    }
    else{
        if(Ia != Fa)
            printf("1\n");
        else
            printf("2\n");
    }

    return 0;
}
