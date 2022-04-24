
/*

An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5

Time complexity: O(N) 
Auxiliary Space: O(1)

*/

#include <iostream>
using namespace std;
void print(int arr[], int size);
void moveNegOneSide(int arr[], int n);

int main()
{
    int arr[100] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int size = 9;

    print(arr, size);
    moveNegOneSide(arr, size);
    print(arr, size);
    return 0;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void moveNegOneSide(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}