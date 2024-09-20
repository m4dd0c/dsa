// ref: https://www.geeksforgeeks.org/problems/while-loop-printtable-java/1
#include <iostream>
using namespace std;

void printRevTable(int n)
{
    int multiplier = 10;
    while (multiplier > 0)
    {
        cout << n * multiplier << " ";
        multiplier--;
    }
}

int main()
{
    printRevTable(5);
    return 0;
}