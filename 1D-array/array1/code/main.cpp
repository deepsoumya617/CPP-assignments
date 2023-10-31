// Calculate the product of all the elements in the given array.
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

    // Finding product
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }

    // Printing the result
    cout << "Product = " << product;
    return 0;
}