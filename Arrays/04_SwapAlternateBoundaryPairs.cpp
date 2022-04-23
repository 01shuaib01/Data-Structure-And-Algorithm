
/*

Approach: Initialize pointer i = 0 and j = N – 1 then swap the elements at these pointers 
and update i = i + 2 and j = j – 2. 
Repeat these steps while i < j. 
Finally print the updated array.
Below is the implementation of the above approach:

*/

#include <iostream>
using namespace std;

void print(int arr[], int size);
void swapAlternate(int arr[], int size);

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {5, 54, 12, 63, 45};

    int size = 5;

    print(arr, size);
    swapAlternate(arr, size);
    print(arr, size);

    return 0;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end - 2;
    }
}