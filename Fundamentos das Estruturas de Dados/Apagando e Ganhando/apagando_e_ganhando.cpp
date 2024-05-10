#include <iostream>

using namespace std;

string erased(string n, int qtd_n, int qtd_erased_str) {
    string erased_str;
    int n_erased = 0;

    for (auto character : n) {
        while (erased_str.size() > 0 && erased_str.back() < character && qtd_erased_str > n_erased) {
                erased_str.pop_back();
                n_erased++;
        }

        if (erased_str.size() < (qtd_n - qtd_erased_str))
        {
            erased_str.push_back(character);
        }
    }

    return erased_str;
}

int main(int argc, char const *argv[])
{
    int qtd_n, qtd_erased_n;
    string n;

    while (true)
    {
        cin >> qtd_n >> qtd_erased_n;

        if (qtd_n == 0 && qtd_erased_n == 0)
        {
            return 0;
        }

        cin >> n;

        cout << erased(n, qtd_n, qtd_erased_n) << '\n';
    }


    return 0;
}
