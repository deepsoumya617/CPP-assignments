// Given an array, predict if the array contains duplicates or not.
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

    // Finding duplicate
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
    }
    if (flag == true)
        cout << "The array contains Duplicates !";
    else
        cout << "The array doesn't contain Duplicates !";
    return 0;
}