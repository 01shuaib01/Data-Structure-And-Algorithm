
/*

Given two arrays a[] and b[] of size n and m respectively. 
The task is to find union between these two sorted arrays.

Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5

Time complexity --> O(N+M).
Space Complexity--> O(1).

*/

#include <iostream>
using namespace std;

int findUnion(int arr1[], int arr2[], int n, int m);

int main()
{
    // int arr1[] = {1, 2, 3, 4, 5};
    // int arr2[] = {1, 2, 3};
    int arr1[] = {1,6,25,32,54,85};
    int arr2[] = {2,85};
    
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);

    cout << "total --> " << findUnion(arr1, arr2, n, m);

    return 0;
}

int findUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0, count = 0;

    while (i < n && j < m)
    {
        if (arr1[1] < arr2[j])
        {
            i++;
            count++;
        }

        else if (arr2[j] < arr1[i])
        {
            j++;
            count++;
        }
        else
        {
            i++;
            j++;
            count++;
        }
    }

    while (i < n)
    {
        i++;
        count++;
    }
    while (j < m)
    {
        j++;
        count++;
    }

    return count;
}