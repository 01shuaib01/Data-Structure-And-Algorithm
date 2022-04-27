#include <iostream>
using namespace std;

void checkRepeat(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ele = arr[i];
        bool res = false;
        for (int j = i + 1; j < n; j++)
        {
            if (ele == arr[j])
            {
                cout << "first repeating element is " << ele << endl;
                res = true;
                break;
            }
        }
        if (res == true)
            break;
    }
}

int main()
{
    // int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};

    int size = sizeof(arr) / sizeof(int);

    checkRepeat(arr, size);
    return 0;
}