#include <iostream>
#include <cstring>
#include <set>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string s;
  set<char> chars;
  int i;
  cin >> s;
  i = 0;
  while (i < (s.size() - 13)) {
    for (int j = 0; j < 14; j++) {
      chars.insert(s.at(i + j));
    }
    if (chars.size() == 14) {
      break;
    }
    chars.clear();
    i++;
  }
  cout << "Result: " << (i + 14) << endl;
  return 0;
}
/* Definition */