// ref: https://leetcode.com/problems/reverse-integer/
#include <iostream>
using namespace std;

int rev(int n)
{
    int rn = 0;
    while (n != 0)
    {
        int rem = n % 10;
        // if (int_max < rn * 10) or (int_min > rn * 10) then return 0;
        // since function is only returning "int" hence can't return value more than "int_max" or less than "int_min"
        if ((INT32_MAX / 10 < rn) || (INT32_MIN / 10 > rn))
            return 0;
        rn = (rn * 10) + rem;
        n /= 10;
    }
    return rn;
}
int main()
{
    int num_1 = 123;
    int num_2 = -123;
    int num_3 = 1230;
    int num_4 = -1230;
    int num_5 = 1534236469;
    cout << rev(num_5);
    return 0;
}