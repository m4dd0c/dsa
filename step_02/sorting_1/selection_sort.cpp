#include "../../package/linear.cpp"
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int *arr, int size) {
  for (int i = 0; i <= size - 2; i++) {
    int min = i;
    for (int j = i + 1; j <= size - 1; j++) {
      if (arr[min] > arr[j])
        min = j;
    }
    swap(arr[min], arr[i]);
  }
}

int main() {
  int arr[] = {4, 2, 1, 4, 5, 3};
  int size = sizeof(arr) / sizeof(*arr);
  selection_sort(arr, size);
  print_arr(arr, size);
  return 0;
}