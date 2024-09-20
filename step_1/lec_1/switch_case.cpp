// ref: https://www.geeksforgeeks.org/problems/java-switch-case-statement3529/1
#include <bits/stdc++.h>
using namespace std;

double switchCase(int choice, vector<double> &arr)
{
    // code here
    switch (choice)
    {
    case 1:
        return M_PI * arr[0] * arr[0];
    case 2:
        return arr[0] * arr[1];
    default:
        return -1;
    }
}

int main()
{
    vector<double> arr1 = {2};
    vector<double> arr2 = {2, 50};
    cout << switchCase(1, arr1) << endl;
    cout << switchCase(2, arr2);
    return 0;
}