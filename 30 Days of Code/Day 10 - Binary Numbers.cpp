#include <bits/stdc++.h>
using namespace std;

// int decToBin(int n) 
// {
//     int rem, bin=0, step=1, i=1;

//     while(n!=0)
//     {
//         rem = n%2;
//         //printf("Step %d: %d/2, Remainder %d, Quotient %d\n", step++, n, rem, n/2);
//         n = n/2;
//         bin = bin + (rem*i);
//         i = i * 10;
//     }

//     return bin;
// }

int main() {
    int n, r, count=0, max=0;
    cin >> n;

    while(n>0) 
    {
        int r = n % 2;

        if(r==1)
        {
            count++;

            if(count>max)
            {
                max = count;
            }
        }
        else count=0;

        n = n / 2;
    }

    cout << max << endl;

    return 0;
}