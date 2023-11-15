// Write a program to print the row number having the maximum sum in a given matrix.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter Row no - ";
    cin >> m;
    cout << "Enter Column no - ";
    cin >> n;

    int arr[m][n];

    // Taking inputs
    cout << "Enter the elements - " << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Finding the row having maximum sum
    int maxSum = INT_MIN;
    int idx = 0;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if (maxSum < sum)
        {
            maxSum = sum;
            idx = i;
        }
    }

    // Printing the result
    cout << "The Row having maximum sum is = " << idx+1;
    return 0;
}