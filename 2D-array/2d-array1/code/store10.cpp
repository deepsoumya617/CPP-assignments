// Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter no of rows / columns - ";
    cin >> m;

    int arr[m][m];

    // STORING 10 AT EVERY INDEX
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = 10;
        }
    }

    // PRINTING THE MATRIX
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}