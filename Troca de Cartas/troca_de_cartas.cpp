#include <iostream>

using namespace std;

int A, B;
int counter[100005][2];
int main(int argc, char const *argv[])
{
    cin >> A >> B;
    for (int i = 0; i < A; i++)
    {
        int x;
        cin >> x;
        counter[x][0] = 1;
    }

    for (int i = 0; i < B; i++)
    {
        int x;
        cin >> x;
        counter[x][1] = 1;
    }

    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= 100000; i++)
    {
        if (counter[i][0] == 1 && !counter[i][1])
        {
            cnt1++;
        }

        if (counter[i][1] == 1 && !counter[i][0])
        {
            cnt2++;
        }
    }

    cout << min(cnt1, cnt2) << "\n";

    return 0;
}
