#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, D, ans = 0, sumN = 0, total = 0;
    vector<int> p;

    cin >> N >> D;

    int n;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        total += n;
        p.push_back(n);
    }

    if (total < D)
    {
        cout << ans << "\n";
        return 0;
    }

    for (int move = 0, initial = 0; initial < p.size(); move++)
    {
        while (sumN >= D)
        {
            if (sumN == D)
            {
                ans++;
            }

            sumN -= p[initial];
            initial++;

            if (initial >= p.size())
            {
                break;
            }
        }

        if (move == p.size())
        {
            move = 0;
        }

        sumN += p[move];
    }

    cout << ans << "\n";

    return 0;
}
