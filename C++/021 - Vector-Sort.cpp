#include <cmath>
#include <cstdio>
#include <vector> //push_back
#include <iostream>
#include <algorithm> //sort
using namespace std;


int main() {
    int size, element; //taking two variable
    cin >> size; //size of your vector

    vector<int>v; //declaring vector

    for (int i = 0; i < size; i++) //loop will load upto the size of vector
    {
        cin >> element; //taking element of vector
        v.push_back(element); //storing it in the vector
    }

    sort(v.begin(), v.end()); //STL build in sort function will sort your vector

    for (int i = 0; i < size; i++) //loop will load upto the size of vector
    {
        cout << v[i] << " "; //print the vector's element with single space
    }

    return 0;
}