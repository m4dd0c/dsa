#include <bits/stdc++.h>
using namespace std;

void palindrome(int *arr, int s, int e) {
  // base case
  if (s >= e) return;
  swap(arr[s], arr[e]);
  palindrome(arr, s + 1, e - 1);
}

int main() {
  int arr[] = {1, 2, 3, 4};
  int s = 0, e = 3;
  palindrome(arr, s, e);

  for (auto i : arr) {
    cout << i << " ";
  }
  return 0;
}