
/*

*****
*   *
*****

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    for (int row = 1; row <= n; row++)
    {
        if (row == 1 || row == n)
        {
            for (int col = 1; col <= n * 2 - 1; col++)
                cout << "*";
        }
        else
        {
            cout << "*";
            for (int col = 1; col <= row + 1; col++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}