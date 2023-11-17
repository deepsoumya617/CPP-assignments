// Write a program to print the elements of both the diagonals in a square matrix
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter Rows - ";
    cin >> m;
    cout << "Enter Columns - ";
    cin >> n;

    int arr[m][n];

    // Taking Inputs
    cout << "Enter Matrix elements - " << endl;
    cout << "-------------------------" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing Diagonals
    cout << endl;
    cout << "Diagonals of the Matrix - " << endl;
    cout << "-------------------------" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j) or (i + j == n - 1))
                cout << arr[i][j] << " ";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}