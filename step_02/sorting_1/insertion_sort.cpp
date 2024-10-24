#include "../../package/linear.cpp"
#include <bits/stdc++.h>
using namespace std;

void insertion_sort_while(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      swap(arr[j - 1], arr[j]);
      j--;
    }
  }
}

void insertion_sort_for(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    int j = i;
    for (; j >= 1; j--) {
      if (arr[j - 1] > arr[j])
        swap(arr[j - 1], arr[j]);
    }
  }
}

int main() {
  vector<int> arr = {1, 23, 43, 2, 3, 2, 415, 5, 24, 5, 5454, 34};
  insertion_sort_while(arr);
  print_vect(arr);
  return 0;
}