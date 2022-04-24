
/*

Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation:
arr[0] + arr[1] = 1 + 5 = 6
and arr[1] + arr[3] = 5 + 1 = 6.

Time complexity -- > O(n^2).
Space complexity-- > O(1).

*/



#include <iostream>
using namespace std;
int countPair(int arr[], int n, int k);
int main()
{
    // int arr[] = {1, 5, 7, 1};
    int arr[] = {1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(int);
    // int k=6;
    int k = 2;

    cout << "total pair is  --> " << countPair(arr, size, k);
    return 0;
}

int countPair(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
                count++;
        }
    }
    return count;
}