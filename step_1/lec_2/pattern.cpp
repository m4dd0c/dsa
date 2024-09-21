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

*/
#include <iostream>
using namespace std;

void pat_1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << j + 1 << " ";
        cout << endl;
    }
    cout << endl;
}
void pat_2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << n - i + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    pat_1(5);
    pat_2(5);

    return 0;
}