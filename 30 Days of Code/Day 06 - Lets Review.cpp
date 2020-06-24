#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;

    while(t--) {
        cin >> s;

        for(int i = 0; i <= s.length() - 1; i++) 
        {
            if(i%2==0) cout << s[i];
        }

        cout << " ";

        for (int i = 0; i <= s.length() - 1; i++)
        {
            if(i%2!=0) cout << s[i];
        }

        cout << endl;
    }
    
    return 0;
}