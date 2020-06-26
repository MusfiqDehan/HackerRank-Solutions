#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[3], sum = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << sum << endl;

    return 0;
}
