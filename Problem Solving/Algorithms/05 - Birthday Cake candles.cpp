#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }

    // int max = *max_element(arr, arr + n); //Using STL

    int max = arr[0];
    

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    // cout << max << endl;

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == max)
            count++;
    }

    cout << count << endl;

    return 0;
}
