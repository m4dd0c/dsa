// ref: https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 1)
        return 1;
    int n1 = 1;
    int n2 = 1;
    int n3;
    for (int i = 3; i <= n; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}

int main()
{
    int n;
    cin >> n;
    int ans = fibo(n);
    cout << ans;
    return 0;
}