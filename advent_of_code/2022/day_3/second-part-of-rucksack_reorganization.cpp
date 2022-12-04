#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string s1, s2, s3;
  char c;
  bool st;
  int tp = 0;
  while (cin >> s1 >> s2 >> s3) {
    st = true;
    for (int i = 0; i < s1.size() && st; i++) {
      for (int j = 0; j < s2.size() && st; j++) {
        if (s1.at(i) == s2.at(j)) {
          for (int k = 0; k < s3.size(); k++) {
            if (s2.at(j) == s3.at(k)) {
              c = s3.at(k);
              st = false;
              break;
            }
          }
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