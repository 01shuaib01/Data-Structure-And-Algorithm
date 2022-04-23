
/*
    Geeks For Geeks Question.
    Link --> https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/#
    
    Initialize min = a[0] and max = a[0].
    Then compare all element in array
    if element is greater then max value to assign max = a[i]
    else if element is smaller then min value to assign min = a[i].

    Time complexity --> O(N).
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
} // } Driver Code Ends

pair<long long, long long> getMinMax(long long a[], int n)
{

    long long min = a[0];
    long long max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
            max = a[i];
        else if (a[i] <= min)
            min = a[i];
    }

    pair<long long, long long> ans;

    ans.first = min;
    ans.second = max;

    return ans;
}