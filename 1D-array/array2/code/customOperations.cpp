/*
Given an array of integers, change the value of all odd indexed elements to its second multiple
and increment all even indexed values by 10
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the vector - ";
    cin >> n;

    vector<int> v;

    // Taking inputs
    cout << "Enter vector elements - ";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }

    // Doing custom operations as told in the question
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 1)
            v[i] *= 2;
        else
            v[i] += 10;
    }

    // Printing the modified array
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}