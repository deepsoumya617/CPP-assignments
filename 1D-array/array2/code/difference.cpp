// Find the difference between the sum of elements at even indices
// to the sum of elements at odd
// indices.
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

    // Sum of even indices
    int sumOfeven = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
            sumOfeven += v[i];
    }

    // Sum of odd indices
    int sumOfodd = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 1)
            sumOfodd += v[i];
    }

    // Finding and printing the difference;
    int difference;
    if (sumOfeven > sumOfodd)
        difference = sumOfeven - sumOfodd;
    else
        difference = sumOfodd - sumOfeven;
    cout << "Difference = " << difference;

    return 0;
}