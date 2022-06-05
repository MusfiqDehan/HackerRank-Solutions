#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        if (1 <= i <= 9 && i == 1)
            cout << "one" << endl;
        else if (1 <= i <= 9 && i == 2)
            cout << "two" << endl;
        else if (1 <= i <= 9 && i == 3)
            cout << "three" << endl;
        else if (1 <= i <= 9 && i == 4)
            cout << "four" << endl;
        else if (1 <= i <= 9 && i == 5)
            cout << "five" << endl;
        else if (1 <= i <= 9 && i == 6)
            cout << "six" << endl;
        else if (1 <= i <= 9 && i == 7)
            cout << "seven" << endl;
        else if (1 <= i <= 9 && i == 8)
            cout << "eight" << endl;
        else if (1 <= i <= 9 && i == 9)
            cout << "nine" << endl;
        else if (i > 9 && i % 2 == 0)
            cout << "even" << endl;
        else if (i > 9 && i % 2 != 0)
            cout << "odd" << endl;
    }
    
    return 0;
}