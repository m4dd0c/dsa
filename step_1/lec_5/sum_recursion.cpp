#include <bits/stdc++.h>
using namespace std;

int sum_parameterized_way(int sum, int num)
{
    if (num == 0)
        return sum;
    sum_parameterized_way(sum + num, num - 1);
}

int sum_functional_return_way(int num)
{
    if (num == 0)
        return 0;
    return num + sum_functional_return_way(num - 1);
}

int main()
{
    // cout << sum_parameterized_way(0, 10) << endl;
    cout << sum_functional_return_way(10) << endl;
    return 0;
}