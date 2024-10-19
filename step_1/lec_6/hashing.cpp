#include <bits/stdc++.h>

#include "../../package/linear.cpp"
using namespace std;

vector<int> num_of_occurance(vector<int> arr) {
  int max = *max_element(arr.begin(), arr.end());
  vector<int> hash(max + 1, 0);
  // hash = {0,1,2,3,4,5,6,7,8,9,10}
  for (int i = 0; i < arr.size(); i++) {
    ++hash[arr[i]];
  }
  return hash;
}

int main() {
  vector<int> arr = {1, 2, 1, 3, 4, 5, 4, 3, 2, 5, 2, 1, 1, 6, 7, 10};
  vector<int> hash = num_of_occurance(arr);
  print_vect(hash);
  return 0;
}