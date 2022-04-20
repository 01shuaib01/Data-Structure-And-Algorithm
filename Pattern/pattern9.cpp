
/*

*
**
***
****
******
*****
****
***
**
*

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 9;
    int row;
    
    //for row = 4;
    for (row = 1; row <= n / 2; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //for row = 5.
    for (row = n / 2; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}