#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string s, t;
  unsigned short int size_s, number_equal_char = 0;
  bool is_correct = true;
  cin >> s;
  cin >> t;
  size_s = s.size();
  if (size_s == t.size()) {
    for (unsigned short int i = 0, j = size_s - 1; i < size_s; i++, j--) {
      if (s[i] != t[j]) {
        is_correct = false;
        break;
      }
    }
  }
  else {
    is_correct = false;
  }
  if (is_correct) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}