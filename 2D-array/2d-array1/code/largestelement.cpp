// Write a C++ program to find the largest element of a given 2D array of integers.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int maximum = INT_MIN;

    // FINDING LARGEST NUMBER
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            maximum = max(maximum, arr[i][j]);
        }
    }

    // PRINTING THE RESULT
    cout << "The Largest element is = " << maximum;
    return 0;
}