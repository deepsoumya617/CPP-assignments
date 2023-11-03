// WAP to find the largest three elements in the array.
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

    // Finding Largest element
    int maxElement = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > maxElement)
            maxElement = v[i];
    }

    // Finding Second Largest element
    int smaxElement = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != maxElement and v[i] > smaxElement)
            smaxElement = v[i];
    }

    // Finding Third Largest element;
    int tmaxElement = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != maxElement and v[i] != smaxElement and v[i] > tmaxElement)
            tmaxElement = v[i];
    }

    // Printing the elements
    cout << "Largest element = " << maxElement << endl;
    cout << "Second Largest element = " << smaxElement << endl;
    cout << "Third Largest element = " << tmaxElement;
    return 0;
}