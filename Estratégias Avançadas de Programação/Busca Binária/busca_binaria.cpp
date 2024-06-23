#include <bits/stdc++.h>

using namespace std;

int search(int L, int R, int value, int A[])
{
    int mid = (L + R) / 2;

    if (L > R)
        return -1;

    if (A[mid] == value)
        return mid;

    if (value > A[mid])
    {
        return search(mid + 1, R, value, A);
    }
    else
    {
        return search(L, mid - 1, value, A);
    }
}

int main(int argc, char const *argv[])
{

    int A[10] = {1, 3, 4, 6, 7, 9, 12, 15, 20, 22};

    int value;
    cin >> value;
    int n = search(0, 9, value, A);

    cout << "A[" << n << "] = " << A[n] << "\n";

    return 0;
}
