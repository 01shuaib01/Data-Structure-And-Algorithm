
/*
    LinearSerach Traverse all element in an array and compare target with all element
    if elment is present then return True.
    else element is not present then return false.

    Time complexity --> O(N).

*/

#include <iostream>
using namespace std;

//  Declaration of function.
bool search(int arr[], int n, int target);

int main()
{
    int arr[10] = {11, 1, 22, 24, 55, 66, 77, 88, 44, 100};

    if (search(arr, 10, 77)) //  77->present at 7 position.
        cout << "Element is present in an array" << endl;
    else
        cout << "element is not present in an array" << endl;

    /*
    if (search(arr, 10, 78)) //  78->is not present.
        cout << "Element is present in an array" << endl;
    else
        cout << "element is not present in an array" << endl;
    */
   
    return 0;
}

bool search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return true;
    }
    return false;
}