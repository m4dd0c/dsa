#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n1 = 1;
    int n2 = 23;
    int n3 = 12;
    cout << isPrime(23);
    return 0;
}