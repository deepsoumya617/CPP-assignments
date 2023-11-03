// If an array arr contains n elements, then check if the given array is a palindrome or not .
#include <bits/stdc++.h>
using namespace std;

// Function to check it it's a palindrome
bool isPailndrome(vector<int> &v)
{
    int start = 0;
    int end = v.size() - 1;

    while (start < end)
    {
        if (v[start] != v[end])
            return false;
        start++;
        end--;
    }
    return true;
}

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

    // Sending the array to function and checking it it's a palindrome
    if (isPailndrome(v))
        cout << "It is a palindrome";
    else
        cout << "It is not a palindrome";

    return 0;
}