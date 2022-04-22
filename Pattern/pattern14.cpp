
/*

1
2*2
3*3*3
4*4*4*4

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int counter;
    // int row;
    for (int row = 1; row <= n / 2; row++)
    {
        int count = row;
        for (int col = 1; col <= row * 2 - 1; col++)
        {
            if (col % 2 == 0)
                cout << "*";
            else
                cout << count;
        }
        
        cout << endl;
    }
    return 0;
}