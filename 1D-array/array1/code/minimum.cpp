// Find the minimum value out of all elements in the array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array - ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements - ";

    // Taking Inputs
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Finding Minimum
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minimum = min(minimum, arr[i]);
    }

    // Printing Minimum
    cout << "Minimum = " << minimum;
    return 0;
}