/*
Find the unique number in a given Array where all the elements are being repeated
twice with one value being unique.
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

    // BRUTEFORCE APPROACH
    for (int i = 0; i < v.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if ((i != j) and (v[i] == v[j]))
                count++;
        }
        if (count == 0)
        {
            cout << "unique element = " << v[i];
            return 0;
        }
    }
    cout << "No Unique Element Found";
    return 0;
}