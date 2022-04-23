
/*
Approach: Initialize pointer start = 0 and end = N – 1 then swap the elements at these pointers 
and update start = start + 2 and end = end – 2. 
Repeat these steps while start < end. 
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
