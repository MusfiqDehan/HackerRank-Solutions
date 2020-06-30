#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int maxSum = INT_MIN;
    int sum = 0 ;

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            sum = arr[row][col] + arr[row][col + 1] + arr[row][col + 2] +
                  arr[row + 1][col + 1] +
                  arr[row + 2][col] + arr[row + 2][col + 1] + arr[row + 2][col + 2];

            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }        
    }

    cout << maxSum << endl;

    return 0;
}
