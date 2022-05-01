#include <iostream>
using namespace std;

void transpose(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    transpose(arr, 3, 3);
    return 0;
}