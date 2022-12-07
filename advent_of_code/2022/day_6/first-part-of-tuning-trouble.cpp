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
  while (i < (s.size() - 3)) {
    for (int j = 0; j < 4; j++) {
      chars.insert(s.at(i + j));
    }
    if (chars.size() == 4) {
      break;
    }
    chars.clear();
    i++;
  }
  cout << "Result: " << (i + 4) << endl;
  return 0;
}
/* Definition */