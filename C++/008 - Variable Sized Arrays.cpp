#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int **arr = new int*[n];

    for (int i = 0, k; i < n; i++)
    {
        cin >> k;

        arr[i] = new int[k];

        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
            
        }
        
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        cout << arr[a][b] << endl;
    }
    


    return 0;
}