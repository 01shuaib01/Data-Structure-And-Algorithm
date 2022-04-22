
/*

1 
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        int i = 1;
        int j = row - 1;
        for (int col = 1; col <= row * 2 - 1; col++)
        {
            if (col <= row)
                cout << i++ << " ";
            else
                cout << j-- << " ";
        }
        cout << endl;
    }
    return 0;
}