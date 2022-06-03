#include <bits/stdc++.h>
using namespace std;


void staircase(int n)
{
    for (int a = 0; a < n; a++)
    {
        for (int i = a; i < n - 1; i++)
        {
            cout << " ";
        }
        for (int j = 0; j <= a; j++)
        {
            cout << "#";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
