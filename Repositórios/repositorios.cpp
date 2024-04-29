#include <iostream>
#include <map>

using namespace std;

using namespace std;

int main(int argc, char const *argv[])
{

    map<char, int> mp;

    mp.insert({'a', 10});
    mp.insert({'b', 20});
    mp.insert({'c', 30});
    mp['d'] = 40;

    for (auto a : mp)
    {
        cout << a.first << " " << a.second << "\n";
    }
    

    return 0;
}
