
/*

n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in
the array sums up to 13.

Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(1)

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool triplateSum(int arr[], int n, int target);
bool triplateSum2(int arr[], int n, int target);

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    int size = sizeof(arr) / sizeof(int);
    cout << triplateSum2(arr, size, 13);
    return 0;
}

// APPROACH 1 --> BRUTEFORCE.
bool triplateSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                    ;
                return true;
            }
        }
    }
    return false;
}

// APPROACH 2 --> OPTIMIZE
bool triplateSum2(int arr[], int n, int target)
{
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        int low = i + 1;
        int high = n - 1;

        while (low < high)
        {
            if (arr[i] + arr[low] + arr[high] == target)
                return true;
            else if (arr[i] + arr[low] + arr[high] < target)
                low++;
            else
                high--;
        }
    }
    return false;
}
