// Write a program to add two matrices and save the result in one of the given matrices.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // MATRIX ADDITION
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] += brr[i][j];
        }
    }

    // PRINTING THE RESULT
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}