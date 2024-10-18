#include <bits/stdc++.h>
using namespace std;

void print_name(string s, int cnt)
{
    if (cnt == 0)
        return;
    cout << s << endl;
    print_name(s, --cnt);
}

void print_til_1(int num)
{
    if (num == 0)
        return;
    cout << num << " ";
    print_til_1(--num);
}
void print_til_n(int start, int end)
{
    if (end + 1 == start)
        return;
    cout << start << " ";
    print_til_n(++start, end);
}

int sum_of_first_n(int n, int sum)
{
    if (n == 0)
        return sum;
    sum_of_first_n(--n, sum + n);
}

void print_til_1_backtrack(int end, int num)
{
    // base case
    if (end > num)
        return;
    print_til_1_backtrack(end + 1, num);
    cout << end << " ";
}

long long int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    print_name("ManishBhai", 5);
    cout << endl;
    print_til_1(5);
    cout << endl;
    print_til_1_backtrack(1, 5);
    cout << endl;
    print_til_n(1, 10);
    cout << endl;
    cout << sum_of_first_n(10, 0) << endl;
    cout << fact(10) << endl;
    return 0;
}