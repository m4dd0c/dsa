#include "../../package/linear.cpp"
#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size() - i; j++) {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }
}

int main() {
  vector<int> arr = {1, 24, 22, 4, 1, 6, 9};
  bubble(arr);
  print_vect(arr);
  return 0;
}