
/*

    Input Array --> 1 2 3 4 5 6
     After swapping
    OutPut Array -->2 1 4 3 6 5
*/

#include <iostream>
using namespace std;

void print(int arr[], int size);
void swapAlternate(int arr[], int size);

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    print(arr, size);

    swapAlternate(arr, size);
    cout << "After swapping " << endl;
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
    for (int i = 0; i < size; i += 2)
        swap(arr[i], arr[i + 1]);
}