#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int>mp;

    int t, n;
    cin >> t;
    string s;

    while(t--)
    {
        cin >> s;
        cin >> n;
        mp.insert(make_pair(s, n));
    }

    while (cin >> s)
    {
        if(mp.find(s)!=mp.end()) cout << s << "=" << mp.find(s)->second << endl;
        else cout << "Not found" << endl;
    }
    

    return 0;
}
