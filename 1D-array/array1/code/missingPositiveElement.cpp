// WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.
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

    // Finding smallest missing element
    // Binary search approach
    int start = 0, end = n - 1, ans = -1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid != arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    // Printing the Smallest Missing Element
    cout << "Smallest Missing Element = " << ans;
    return 0;
}