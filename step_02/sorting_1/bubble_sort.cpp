#include "../../package/linear.cpp"
#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    int flag = 0;
    for (int j = 0; j < arr.size() - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        flag = 1;
      }
    }
    // meaning array is always sorted that It never went swapping in one go.
    if (flag == 0)
      break;
  }
}

int main() {
  vector<int> arr = {1, 24, 22, 4, 1, 6, 9};
  bubble(arr);
  print_vect(arr);
  return 0;
}