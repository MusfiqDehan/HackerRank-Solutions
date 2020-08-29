#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, element;
    cin >> size;

    int leftToRightD = 0;
    int rightToLeftD = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> element;

            if (i == j)
            {
                leftToRightD += element; 
            }

            if ((i + j) == (size - 1))
            {
                rightToLeftD += element; 
            }
        }
    }

    int result = abs (leftToRightD - rightToLeftD);
    
    cout << result << "\n";

    return 0;
}
