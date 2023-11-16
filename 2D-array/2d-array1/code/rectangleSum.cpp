// Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter Row no - ";
    cin >> m;
    cout << "Enter Column no - ";
    cin >> n;

    int l1, l2, r1, r2;
    cout << "Enter 1st coordinate (l1, r1) = ";
    cin >> l1 >> r1;
    cout << "Enter 2nd coordinate (l2, r2) = ";
    cin >> l2 >> r2;

    int arr[m][n];

    // Taking inputs
    cout << "Enter Matrix elements - " << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Fnding sum
    int sum = 0;
    for (int i = min(l1, l2); i <= max(l1, l2); i++)
    {
        for (int j = min(r1, r2); j <= max(r1, r2); j++)
        {
            sum += arr[i][j];
        }
    }

    // Printing the SUM
    cout << "SUM = " << sum;
    return 0;
}