#include <iostream>
using namespace std;

bool palindrome(int arr[], int n);

int main()
{
    int arr[] = {3, 6, 0, 6, 3};
    int size = sizeof(arr) / sizeof(int);

    if (palindrome(arr, size))
        cout << "Array is palindrome " << endl;
    else
        cout << "Array is not a palindrome " << endl;

    return 0;
}

bool palindrome(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}