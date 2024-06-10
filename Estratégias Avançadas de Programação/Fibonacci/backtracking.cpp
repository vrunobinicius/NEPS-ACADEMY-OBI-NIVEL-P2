#include <bits/stdc++.h>

using namespace std;

int backtracking(int n)
{

    if (n == 1 || n == 2)
    {
        return 1;
    }

    return backtracking(n - 1) + backtracking(n - 2);
}

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;

    cout << backtracking(n) << "\n";

    return 0;
}
