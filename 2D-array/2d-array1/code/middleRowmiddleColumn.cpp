// Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter Row/Column no - ";
    cin >> m;

    int arr[m][m];

    // Taking inputs
    cout << "Enter the elements - " << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Finding and printing the middle element and middle row
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == m / 2 or j == m / 2)
                cout << arr[i][j] << " ";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}