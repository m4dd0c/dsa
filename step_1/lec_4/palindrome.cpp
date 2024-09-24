#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int temp = n;
    int rn = 0;
    // reversing the number
    while (n > 0)
    {
        int rem = n % 10;
        // edge case for intmax and intmin similar in reverse number
        if ((INT32_MIN / 10 > rn) || (INT32_MAX / 10 < rn))
            return 0;
        rn = (rn * 10) + rem;
        n /= 10;
    }
    return rn == temp;
}

int main()
{
    int n0 = 123;
    int n1 = -121;
    cout << isPalindrome(n1);
    return 0;
}