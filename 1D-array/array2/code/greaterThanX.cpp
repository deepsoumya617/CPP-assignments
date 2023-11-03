// Count the number of elements strictly greater than x.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x;
    cout << "Enter target element = ";
    cin >> x;
    cout << "Enter the size of the vector - ";
    cin >> n;

    vector<int> v;
    // Taking inputs
    cout << "Enter vector elements - ";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }

    // BRUTEFORCE Approach
    int count = 0;
    int s = v.size();
    for (int i = 0; i < s; i++)
    {
        if (v[i] > x)
            count++;
    }

    // Printing the result
    cout << "No. of elements strictly greater than " << x << " is = " << count;

    return 0;
}
