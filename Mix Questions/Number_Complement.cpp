
/*
    number stored in 32 bits.
    let take number n = 5;
    5 -> 00000000 00000000 00000000 00000101.

    ~5-> 11111111 11111111 11111111 11111010.
             perform  &  operation.
mask  -> 00000000 00000000 00000000 00000111.-------->7
--------------------------------------------------
ans ->   00000000 00000000 00000000 00000010 ---------> 2.

*/

int findComplement(int num)
{
    int mask = 0;

    while (mask < num)
    {
        mask = mask << 1;
        mask = mask | 1;
    }
    int ans = (~num) & mask;
    return ans;
}