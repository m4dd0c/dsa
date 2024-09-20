// ref: https://www.geeksforgeeks.org/problems/data-type-1666706751/1
#include <iostream>
using namespace std;

int dataTypeSize(string str)
{
    if (str == "Integer")
        return sizeof(int);
    else if (str == "Character")
        return sizeof(char);
    else if (str == "Long")
        return sizeof(long);
    else if (str == "Float")
        return sizeof(float);
    else if (str == "Double")
        return sizeof(double);
    else
        return -1;
}

int main()
{
    cout << dataTypeSize("Integer");
    return 0;
}