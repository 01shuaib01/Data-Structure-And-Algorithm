
/*

Input: x = 123
Output: 321

to ensure range of the ans inside the limit.

*/

#include <bits/stdc++.h>
int reverse(int x)
{

    int digit;
    int ans = 0;

    while (x != 0)
    {
        digit = x % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        x = x / 10;
    }
    return ans;
}