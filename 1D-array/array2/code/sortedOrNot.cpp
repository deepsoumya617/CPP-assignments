// Check if the given array is sorted or not
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
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
    bool flag = true; // by default sorted
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > v[i + 1])
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
        cout << "The array/vector is not sorted";
    else
        cout << "The array/vector is sorted";
    return 0;
}