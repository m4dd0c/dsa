#include <iostream>
using namespace std;
string compareNM(int n, int m)
{
    // code here
    if (n < m)
        return "lesser";
    else if (n == m)
        return "equal";
    else if (n > m)
        return "greater";
}
int main()
{
    cout << compareNM(4, 5);
    return 0;
}