
//  for approach 1.
/*
    lets take n = 5 and perform form '&' opration with n-1 bit.
    8 -> 1000
    7 -> 0111
  --------------
    ans->0000

    check the condition if(ans == 0) return true
    else return false.

*/

//  for approach 2.
/*
    2^0 -> 0001
    2^1 -> 0010
    2^2 -> 0100
    2^3 -> 1000
    ------- so on.
    count total set bit
    if (count == 1)
        return true.
*/

// APPROACH 1
bool isPowerOfTwo(int n)
{

    if (n <= 0)
        return false;

    int ans = (n & (n - 1));

    if (ans == 0)
        return true;
    return false;
}

// APPROACH 2.
bool isPowerOfTwo(int n)
{
    int count = 0;
    if (n <= 0)
        return false;
    while (n != 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    if (count == 1)
        return true;
    return false;
}