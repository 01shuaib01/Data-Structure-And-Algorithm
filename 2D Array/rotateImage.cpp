
/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

Input:
    1 2 3
    4 5 6
    7 8 9
Output
    7 4 1
    8 5 2
    9 6 3

*/

#include <iostream>
using namespace std;

void rotate(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = row - 1; j >= 0; j--)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotate(arr, 3, 3);
    return 0;
}