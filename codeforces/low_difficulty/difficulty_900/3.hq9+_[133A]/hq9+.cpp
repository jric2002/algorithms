#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  char kw[4] = {'H', 'Q', '9', '+'};
  string p;
  unsigned short int size_p, size_kw;
  bool output;
  cin >> p;
  size_p = p.size();
  size_kw = sizeof(kw)/sizeof(char);
  output = false;
  for (unsigned short int i = 0; i < size_p && !output; i++) {
    for (unsigned short int j = 0; j < (size_kw - 1); j++) {
      if (kw[j] == p.at(i)) {
        output = true;
        break;
      }
    }
  }
  (output) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}