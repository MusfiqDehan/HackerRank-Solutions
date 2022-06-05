#include <iostream>
using namespace std;

int main()
{

    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    
    int Alice = 0;
    int Bob = 0;

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            Alice++;
        }
        else if (b[i] > a[i])
        {
            Bob++;
        }
    }

    cout << Alice << " " << Bob << endl;

    return 0;
}
