#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int grades[n];

    for (int i = 0; i < n; i++)
    {
        cin >> grades[i];

        if (grades[i] < 38) cout << grades[i] << "\n";
        else if (grades[i] % 5 >= 3) cout << grades[i] + (5 - grades[i] % 5) << "\n";
        else cout << grades[i] << "\n";
    }

    return 0;
}
