// euclid method to find gcd or hcf
#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    // base case
    if (n1 == 0 || n2 == 0)
        return n1 + n2;

    // euclid method: gcd(a, b) => gcd(a - b, b);  where a > b
    // n1 > n2 ? gcd(n1 - n2, n2) : gcd(n2 - n1, n1);

    // better approach gcd(a, b) => gcd(a % b, b);  where a > b
    n1 > n2 ? gcd(n1 % n2, n2) : gcd(n2 % n1, n1);
}

int main()
{
    int n1 = 20, n2 = 40;
    cout << gcd(n1, n2);
    return 0;
}
