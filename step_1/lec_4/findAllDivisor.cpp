#include <bits/stdc++.h>
using namespace std;

vector<int> findAllDivisor(int n)
{
    vector<int> ans;
    for (int i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            ans.push_back(i);
            if (n / i != i)
                ans.push_back(n / i);
        }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n = 12;
    vector<int> ans = findAllDivisor(n);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}