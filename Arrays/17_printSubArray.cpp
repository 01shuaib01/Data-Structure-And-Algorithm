#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int currSum = 0;
    int maxi = INT_MIN;
    int start = 0;
    int s = 0;
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        // maxi = max(maxi, currSum);

        if (maxi < currSum)
        {
            maxi = currSum;
            start = s;
            end = i;
        }

        if (currSum < 0)
        {
            currSum = 0;
            s = i + 1;
        }
    }

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << start << " " << end << endl;
    return maxi;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(int);
    cout << "maxi sum is --> " << kadane(arr, n);
    return 0;
}