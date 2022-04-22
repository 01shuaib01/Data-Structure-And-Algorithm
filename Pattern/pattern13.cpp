
/*

3 
4 4
5 5 5
6 6 6 6
5 5 5
4 4
3

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int row;
    int count = 3;
    for (row = 1; row <= n / 2; row++)
    {

        for (int col = 1; col <= row; col++)
        {
            cout << count << " ";
        }
        cout << endl;
        count++;
    }
    for (; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << count<<" ";
        }
        cout << endl;
        count--;
    }
    return 0;
}