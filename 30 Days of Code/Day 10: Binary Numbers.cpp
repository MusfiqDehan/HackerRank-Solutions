#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r, count=0, max=0;
    cin >> n;

    while (n > 0) 
    {
        int r = n % 2; //Converting Decimal to Binary

        if (r == 1)
        {
            count++; //Counting no of consecutive 1

            if (count > max)
            {
                max = count;
            }
        }
        else 
        {
            count = 0;
        }

        n = n / 2; //Converting Decimal to Binary
    }

    cout << max << endl;

    return 0;
}
