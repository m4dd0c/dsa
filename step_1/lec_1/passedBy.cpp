// ref: https://www.geeksforgeeks.org/problems/pass-by-reference-and-value/1
#include <bits/stdc++.h>
using namespace std;

vector<int> passedBy(int a, int &b)
{
    vector<int> res;
    res.push_back(a + 1);
    res.push_back(b + 2);
    return res;
}
int main()
{
    int n1 = 1;
    int n2 = 3;
    vector<int> ans = passedBy(n1, n2);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}