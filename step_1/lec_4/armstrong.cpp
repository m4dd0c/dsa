#include <iostream>
using namespace std;

string armstrong(int n)
{
    int temp = n;
    int ans = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        ans += rem * rem * rem;
        temp /= 10;
    }
    return ans == n ? "true" : "false";
}

int main()
{
    int n1 = 153;
    int n2 = 1321;
    cout << armstrong(n2);
    return 0;
}