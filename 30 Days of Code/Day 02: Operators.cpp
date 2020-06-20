#include <bits/stdc++.h>
using namespace std;

int main()
{
    double meal, tip, tax;
    cin >> meal >> tip >> tax;

    tip = meal * (tip/100);
    tax = meal * (tax/100);

    double total = meal + tip + tax;

    cout << round(total) << endl;

    return 0;
}
