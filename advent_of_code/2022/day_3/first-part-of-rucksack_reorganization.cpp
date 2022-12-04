#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string s;
  char c;
  bool st;
  int tp = 0;
  while (cin >> s) {
    st = true;
    for (int i = 0; i < (s.size()/2) && st; i++) {
      for (int j = (s.size()/2); j < s.size(); j++) {
        if (s.at(i) == s.at(j)) {
          c = s.at(i);
          st = false;
          break;
        }
      }
    }
    if ((int)(c) >= 97 && (int)(c) <= 122) {
      tp += (int)(c) - 96;
    }
    else {
      tp += (int)(c) - 38;
    }
  }
  cout << "Total priority: " << tp << endl;
  return 0;
}
/* Definition */