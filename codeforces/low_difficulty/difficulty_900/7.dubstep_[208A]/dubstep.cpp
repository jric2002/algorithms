#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string s, si;
  unsigned short int i;
  bool ss;
  cin >> s;
  i = 0;
  if (s.size() >= 3) {
    si = "";
    ss = true;
    while (i < s.size()) {
      if (i <= (s.size() - 3) && s.substr(i, 3) == "WUB") {
        i += 3;
        if (ss) {
          si = si + ' ';
        }
        ss = false;
        continue;
      }
      else {
        si = si + s.at(i);
        ss = true;
        i++;
      }
    }
    if (si.at(0) == ' ') {
      si.replace(0, 1, "");
    }
    if (si.at(si.size() - 1) == ' ') {
      si.replace((si.size() - 1), 1, "");
    }
  }
  else {
    si = s;
  }
  cout << si << endl;
  return 0;
}