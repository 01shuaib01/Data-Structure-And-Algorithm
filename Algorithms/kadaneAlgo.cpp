

/*
kadane used to find the sum of contiguous subarray.
The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array (currSum is used for this). And keep track of maximum sum contiguous segment among all positive segments (maxi is used for this). Each time we get a positive sum compare it with maxi and update maxi if it is greater than max_so_far

Kadane's Algorithm:
    Initialize:
        currSum = 0
        maxi = INT_MIN

    Loop for each element of the array
        1. currSum = currSum + arr[i]
        2. maxi = max(maxi,currSum)
        3. if(currSum < 0)
                currSum = 0
    return maxi
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int currSum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        maxi = max(maxi, currSum);

        if (currSum < 0)
            currSum = 0;
    }
    return maxi;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(int);
    cout << "maxi sum is --> " << kadane(arr, n);
    return 0;
}