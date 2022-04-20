
/*

* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

*/

//spaces:-row - 1
//star :- n - row + 1

#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    // for rows.
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}