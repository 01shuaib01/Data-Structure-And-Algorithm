
/*

     * 
    * *
   * * *
  * * * *
 * * * * *
* * * * * *

*/

// spaces:- n-row 
// star :- row 

#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    // for rows.
    for (int row = 1; row <= n; row++)
    {
        //for spaces
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        //for stars
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        //for each row new line
        cout << endl;
    }
    return 0;
}