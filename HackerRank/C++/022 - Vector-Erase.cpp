#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int size, element, e1, start, end;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v.push_back(element);
    }

    //cout << v.size() << endl;

    cin >> e1;

    v.erase(v.begin() + (e1 - 1));

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    cin >> start >> end;

    v.erase(v.begin() + (start - 1), v.begin() + (end - 1));

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
