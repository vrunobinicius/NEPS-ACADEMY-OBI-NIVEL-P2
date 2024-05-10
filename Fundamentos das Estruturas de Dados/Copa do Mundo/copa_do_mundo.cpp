#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> scores;
    vector<char> teams;

    for (char i = 'A'; i <= 'P'; i++) { teams.push_back(i); }

    int score;
    for (int i = 0; i < 30; i++)
    {
        cin >> score;
        scores.push_back(score);
    }

    int j = 0;
    while (teams.size() > 1)
    {
        for (int i = 0; i < teams.size(); i++)
        {

            if (scores[j] > scores[j + 1])
            {
                auto it = find(teams.begin(), teams.end(), teams[i + 1]);
                teams.erase(it);
            }
            else
            {
                auto it = find(teams.begin(), teams.end(), teams[i]);
                teams.erase(it);
            }
            j += 2;
        }
    }

    for (char c : teams) { cout << c; }

    return 0;
}