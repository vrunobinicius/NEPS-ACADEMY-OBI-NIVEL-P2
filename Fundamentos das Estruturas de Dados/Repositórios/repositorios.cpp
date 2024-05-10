#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[]){

    int C, N, Pc, Vc, Pn, Vn;
    map<int, int> programas, respostas;

    cin >> C >> N;
    for (int i = 0; i < C; i++)
    {
        cin >> Pc >> Vc;
        programas.insert({Pc, Vc});
    }

    for (int i = 0; i < N; i++)
    {
        cin >> Pn >> Vn;
        if (programas.find(Pn) == programas.end())
        {
            programas[Pn] = Vn;
            respostas[Pn] = Vn;
        } 
        if (programas[Pn] < Vn) {
            programas[Pn] = Vn;
            respostas[Pn] = Vn;
        }
    }

    for (auto i = respostas.begin(); i != respostas.end(); i++)
    {
        cout << i->first << ' ' << i->second << '\n';
    }

    return 0;
}
