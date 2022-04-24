
/*

Given two arrays a[] and b[] of size n and m respectively.
The task is to find intersection between these two sorted arrays.

Input:
5 3
1 2 3 4 5
1 2 3
Output:
3

Time complexity --> O(N).
Space Complexity--> O(1).

*/

#include <iostream>
using namespace std;

int findIntersection(int arr1[], int arr2[], int n, int m);

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3};
    // int arr1[] = {1, 6, 25, 32, 54, 85};
    // int arr2[] = {2, 85};

    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);

    cout << "total --> " << findIntersection(arr1, arr2, n, m);

    return 0;
}

int findIntersection(int arr1[], int arr2[], int n, int m)
{

    int i = 0, j = 0, count = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            count++;
            i++;
            j++;
        }
    }
    return count;
}