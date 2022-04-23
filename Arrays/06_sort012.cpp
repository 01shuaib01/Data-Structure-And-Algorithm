
/*

Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Time Complexity --> O(N).
Space Complexity --> O(1).

*/

#include <iostream>
using namespace std;

void print(int arr[], int size);
void sort012(int arr[], int n);
void sortApp2(int arr[], int n);

int main()
{
    int arr[100] = {0, 1, 2, 0, 1, 2};
    int size = 6;

    print(arr, size);
    // sort012(arr, size);
    sortApp2(arr,size);
    print(arr, size);

    return 0;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//  Approach 1.

void sort012(int arr[], int n)
{
    int zero = 0;
    int one = 0;
    int two = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] == 1)
            one++;
        else if (arr[i] == 2)
            two++;
    }

    for (int i = 0; i < n; i++)
    {
        if (zero > 0)
        {
            arr[i] = 0;
            zero--;
        }
        else if (one > 0)
        {
            arr[i] = 1;
            one--;
        }
        else if (two > 0)
        {
            arr[i] = 2;
            two--;
        }
    }
}


//  OPTIMAL APPROACH.
void sortApp2(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
            swap(arr[mid++], arr[low++]);

        else if (arr[mid] == 1)
            mid++;
        else if (arr[mid] == 2)
            swap(arr[mid], arr[high--]);
    }
}