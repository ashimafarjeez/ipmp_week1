// You are given an integer array arr of size n+2. All elements of the array are in the range from 1 to n.
// Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.

class Solution
{
public:
    vector<int> twoRepeated(vector<int> &arr)
    {
        int n = arr.size();
        n -= 2;
        int xor_arr = 0;
        for (int a : arr)
        {
            xor_arr ^= a;
        }
        for (int i = 1; i <= n; i++)
        {
            xor_arr ^= i;
        }
        int diff_bit = xor_arr & (~(xor_arr - 1));
        int xor_one = 0, xor_zero = 0;
        for (int a : arr)
        {
            if ((a & diff_bit) == 0)
            {
                xor_zero ^= a;
            }
            else
            {
                xor_one ^= a;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if ((i & diff_bit) == 0)
            {
                xor_zero ^= i;
            }
            else
            {
                xor_one ^= i;
            }
        }
        int x = xor_zero, y = xor_one;
        int cntx = 0, cnty = 0;
        for (int a : arr)
        {
            if (a == x)
                cntx++;
            else if (a == y)
                cnty++;
            if (cntx == 2)
            {
                return {x, y};
            }
            else if (cnty == 2)
            {
                return {y, x};
            }
        }
    }
};
