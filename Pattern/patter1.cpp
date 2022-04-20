/*

 *
 **
 ***
 ****
 *****

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // for each row
    for (int row = 1; row <= n; row++)
    {
        // for column
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}