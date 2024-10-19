// lets use map; since 10^7 is the max size of array we can have in CPP.
// always use unordered_map since best & avg case TC is TC(1)
// when collision happens then only worst case happens TC(n)
// in ordered_map (which is default map) all three case has TC(logN)
// it is advised to primarily use unordered_map,
// if it gives TLE then use ordered_map (map)

#include <bits/stdc++.h>

#include "../../package/linear.cpp"
using namespace std;

unordered_map<char, int> num_of_occurence_string(string str) {
  unordered_map<char, int> mpp;
  for (int i = 0; i < str.length(); i++) {
    mpp[str[i]]++;
  }
  return mpp;
}

unordered_map<int, int> num_of_occurence_int_arr(vector<int> arr) {
  unordered_map<int, int> mpp;
  for (int i = 0; i < arr.size(); i++) {
    mpp[arr[i]]++;
  }
  return mpp;
}
int main() {
  string str = "bananaZ";
  vector<int> vect = {1, 2, 3, 1, 2, 2};
  cout << "Number of occurrene in Integer array:\n";
  unordered_map<int, int> int_map = num_of_occurence_int_arr(vect);
  print_map(int_map);
  cout << "\nNumber of occurrene in String:\n";
  unordered_map<char, int> str_map = num_of_occurence_string(str);
  print_map(str_map);
  return 0;
}