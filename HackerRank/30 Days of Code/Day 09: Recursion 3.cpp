#include <bits/stdc++.h>
using namespace std;

//Factorial function using recursion
int factorial (int n)
{
    if(n > 1)
        return (n * factorial (n - 1));
    else
        return 1;
}

int main() 
{
    int n;
    cin >> n;
    
    cout << factorial(n) << endl; //Determining factorial of a given number

    return 0;
}
