
/*
    APPROACH 1.
        We can count 0 1 2 and then reassign to array.
        but in this we have to traverse array twice.
    
    APPROACH 2.
        This is optimized solution also called DUTCH NATIONAL FLAG.
        in this way can solve the problem only traverse of array.
    
    Input: {0, 1, 2, 0, 1, 2}
    Output: {0, 0, 1, 1, 2, 2}
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void DNF(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid++], arr[low++]);
        }
        else if (arr[mid] == 1)
            mid++;
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high--]);
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 0, 2, 0, 1};
    int size = sizeof(arr) / sizeof(int);

    print(arr, size);
    DNF(arr, size);
    print(arr, size);
    return 0;
}