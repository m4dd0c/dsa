#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
  // base case
  if (n <= 1) return n;
  return fib(n - 1) + fib(n - 2);
}

int main() {
  // find nth fibonacci number using recursion
  cout << fib(7);
  return 0;
}