#include <bits/stdc++.h>

#include "../../package/linear.cpp"
using namespace std;

vector<int> num_of_occurance_in_int_arr(vector<int> arr) {
  int max = *max_element(arr.begin(), arr.end());
  vector<int> hash(max + 1, 0);
  // hash = {0,1,2,3,4,5,6,7,8,9,10}
  for (int i = 0; i < arr.size(); i++) {
    ++hash[arr[i]];
  }
  return hash;
}

vector<int> num_of_occurance_in_string(string str) {
  // initialize array of size 26 with all elements as 0
  // since there are 26 alphabets in english
  vector<int> hash(26, 0);
  for (int i = 0; str[i] != '\0'; i++) {
    int idx = str[i] - 'a';
    ++hash[idx];
  }
  return hash;
}

int main() {
  vector<int> int_arr = {1, 2, 1, 3, 4, 5, 4, 3, 2, 5, 2, 1, 1, 6, 7, 10};
  string str = "bananaz";
  vector<int> hash_int = num_of_occurance_in_int_arr(int_arr);
  vector<int> hash_char = num_of_occurance_in_string(str);
  cout << "Number of occurrene in Integer array: ";
  print_vect(hash_int);
  cout << "\nNumber of occurrene in String: ";
  print_vect(hash_char);
  return 0;
}