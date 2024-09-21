/*

 * pattern: 01

 1
 1 2
 1 2 3

 * pattern: 02

 3 3 3
 2 2
 1

 * pattern: 03

      *
     ***
    *****

 * pattern: 04

    *****
     ***
      *

 * pattern: 05

 A
 A B
 A B C

 * pattern: 06

 * * * *
 *     *
 *     *
 * * * *

 * pattern: 07

 * * * * * * *
 * * *   * * *
 * *       * *
 *           *
 * *       * *
 * * *   * * *
 * * * * * * *

 * pattern: 08

 *             *
 * *         * *
 * * *     * * *
 * * * * * * * *
 * * *     * * *
 * *         * *
 *             *

 * pattern: 09

 4 4 4 4 4 4 4
 4 3 3 3 3 3 4
 4 3 2 2 2 3 4
 4 3 2 1 2 3 4
 4 3 2 2 2 3 4
 4 3 3 3 3 3 4
 4 4 4 4 4 4 4

*/
#include <iostream>
using namespace std;

void pat_1(int n)
{
    cout << "\nPattern 01:\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << j + 1 << " ";
        cout << endl;
    }
}
void pat_2(int n)
{
    cout << "\nPattern 02:\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << n - i + 1 << " ";
        }
        cout << endl;
    }
}
void pat_3(int n)
{
    cout << "\nPattern 03:\n";
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // starts
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pat_4(int n)
{
    cout << "\nPattern 04:\n";
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < (2 * (n - i)) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pat_5(int n)
{
    cout << "\nPattern 05:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            char c = 'A' + j;
            cout << c << " ";
        }
        cout << endl;
    }
}
int main()
{
    pat_1(5);
    pat_2(5);
    pat_3(5);
    pat_4(5);
    pat_5(5);

    cout << endl;
    return 0;
}