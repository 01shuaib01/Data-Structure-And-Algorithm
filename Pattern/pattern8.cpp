

#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    // for rows.
    for (int row = 1; row <= n; row++)
    {
        // outer spaces
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }

        if (row == 1)
        {
            cout << "*";
        }
        else if (row == n)
        {
            for (int col = 1; col <= n; col++)
                cout << "*";
        }
        else
        {
            cout << "*";
            // for inner spaces
            for (int col = 1; col <= row - 1; col++)
            {
                cout << " ";
            }
            cout << " *";
        }
        // for each row new line
        cout << endl;
    }
    return 0;
}