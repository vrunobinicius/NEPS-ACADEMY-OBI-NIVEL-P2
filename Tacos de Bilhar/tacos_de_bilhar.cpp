#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int C, x, ans = 0;
    cin >> C;

    set<int> tacos;
    for (int i = 0; i < C; i++)
    {
        cin >> x;
        if (tacos.find(x) == tacos.end())
        {
            ans += 2;
            tacos.insert(x);
        }
        else
        {
            tacos.erase(x);
        }
    }

    cout << ans;

    return 0;
}
