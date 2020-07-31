#include <bits/stdc++.h>
using namespace std;


int main()
{
    int count;
    set<int> s;
    cin >> count;

    for (int i = 0; i < count; ++i)
    {
        int type, query;
        cin >> type >> query;

        switch (type)
        {
        case 1:
            s.insert(query);
            break;
        case 2:
            s.erase(query);
            break;
        case 3:
            cout << (s.find(query) == s.end() ? "No" : "Yes") << endl;
            break;
        }
    }
    return 0;
}
