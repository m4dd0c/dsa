// ref: https://www.geeksforgeeks.org/problems/count-digits5716/1
#include <bits/stdc++.h>
using namespace std;

int count_digit(int n)
{
    int ans = 0;
    int temp = n;
    while (n != 0)
    {
        int rem = n % 10;
        // if rem == 0 then skip current step
        if (rem == 0)
        {
            n /= 10;
            continue;
        }
        if (temp % rem == 0)
            ans++;
        n /= 10;
    }
    return ans;
}

int count_length_of_number(int n)
{
    return log10(n) + 1;
}
int main()
{
    int n = 22074;
    cout << count_digit(n) << endl;
    cout << count_length_of_number(n);
    return 0;
}