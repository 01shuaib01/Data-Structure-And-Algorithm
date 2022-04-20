
/*

******
*   *
*  *
* *
**
*

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    // for rows.
    for (int row = 1; row <= n; row++)
    {
        // for first and last row
        if (row == 1 || row == n)
        {
            // star
            for (int col = 1; col <= n - row + 1; col++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            // space
            for (int col = 1; col <= n - row - 1; col++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}