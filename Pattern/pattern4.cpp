
/*

*****
 ****
  ***
   **
    *

*/

//SPACES :- ROW-1
//STAR :- N-ROW+1

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    //for rows.
    for (int row = 1; row <= n; row++)
    {
        //for spaces
        for (int col = 1; col <= row - 1; col++)
        {
            cout << " ";
        }
        //for star
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "*";
        }
        //after each row
        cout << endl;
    }
    return 0;
}