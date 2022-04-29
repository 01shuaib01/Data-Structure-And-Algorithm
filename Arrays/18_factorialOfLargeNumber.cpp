
/*

How to compute factorial of 100 using a C/C++ program?
Factorial of 100 has 158 digits. It is not possible to store these many digits even if we use long long int

Input :50
Output : 3041409320171337804361260816606476884-
         4377641568960512000000000000


The following is a detailed algorithm for finding factorial.
factorial(n)
1) Create an array 'res[]' of MAX size where MAX is number of maximum digits in output.
2) Initialize value stored in 'res[]' as 1 and initialize 'res_size' (size of 'res[]') as 1.
3) Do following for all numbers from x = 2 to n.
......a) Multiply x with res[] and update res[] and res_size to store the multiplication result.


multiply(res[], x)
1) Initialize carry as 0.
2) Do following for i = 0 to res_size - 1
....a) Find value of res[i] * x + carry. Let this value be prod.
....b) Update res[i] by storing last digit of prod in it.
....c) Update carry by storing remaining digits in carry.
3) Put all digits of carry in res[] and increase res_size by number of digits in carry.

*/

#include <iostream>
#define maxSize 500
using namespace std;
int multiply(int x, int res[], int res_size);
void factorial(int n)
{
    int res[maxSize];
    res[0] = 1;
    int res_size = 1;

    for (int i = 2; i <= n; i++)
    {
        res_size = multiply(i, res, res_size);
    }

    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;

        res[i] = prod % 10;

        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

int main()
{
    factorial(50);
    return 0;
}