
/*

    Initialize start = 0 -> which start index of array
    intialize end = size -1 -> which is end index of array

    Then swap the values arr[start] to arr[end] and then increment start as well decrement end.

    Time complexity -> O(n).

*/

#include <iostream>
using namespace std;

void print(int arr[], int size);
void reverseArray(int arr[], int size);

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    cout << "Printing before reverse of array " << endl;
    print(arr, 7);

    reverseArray(arr, 7);
    cout << "Printing after reverse of array " << endl;
    print(arr, 7);
    return 0;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
        swap(arr[start++], arr[end--]);
}