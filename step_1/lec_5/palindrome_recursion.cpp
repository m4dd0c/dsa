// palindrome

#include "../../package/linear.cpp"
#include <bits/stdc++.h>
using namespace std;

void reverse(int *arr, int s, int e) {
  // base case
  if (s >= e)
    return;
  swap(arr[s], arr[e]);
  reverse(arr, s + 1, e - 1);
}

bool palindrome(int *arr, int s, int e) {
  // base case
  if (s >= e)
    return true;
  if (arr[s] != arr[e]) {
    return false;
  } else {
    palindrome(arr, s + 1, e - 1);
  }
}

int main() {
  int arr1[] = {1, 2, 3, 4};
  int arr2[] = {1, 1, 1, 1, 2, 1, 1, 1, 1};
  int s1 = 0, e1 = sizeof(arr1) / sizeof(*arr1);
  int s2 = 0, e2 = sizeof(arr2) / sizeof(*arr2);
  reverse(arr1, s1, e1 - 1);
  print_arr(arr1, e1);
  cout << endl << "Is Arr2 Palindrome: " << palindrome(arr2, s2, e2 - 1);
  return 0;
}