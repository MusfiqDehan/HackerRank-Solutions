#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    try
    {
        int n;
        n = stoi(s);
        cout << n << endl;
    }

    catch (...)
    {
        cout << "Bad String" << endl;
    }

    return 0;
}
