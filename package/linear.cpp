#include <bits/stdc++.h>
using namespace std;

void print_arr(auto *arr, int size) {
  cout << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void print_vect(vector<int> vect) {
  for (auto i : vect) {
    cout << i << " ";
  }
}

template <typename K, typename V>
void print_map(const unordered_map<K, V> &mpp) {
  for (const auto &pair : mpp) {
    cout << pair.first << " -> " << pair.second << endl;
  }
}