#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, pos = 0, neg = 0, zero = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("%0.6lf\n", (double)pos / n);
    printf("%0.6lf\n", (double)neg / n);
    printf("%0.6lf\n", (double)zero / n);

    return 0;
}
