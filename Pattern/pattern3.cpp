/*

   *
  **
 ***
****

*/

// 1.SPACE :- N-ROW
// 2.STAR :- ROW

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // for each row
    for (int row = 1; row <= n; row++)
    {
        // for space
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        // for star
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        //after each row
        cout << endl;
    }
    return 0;
}