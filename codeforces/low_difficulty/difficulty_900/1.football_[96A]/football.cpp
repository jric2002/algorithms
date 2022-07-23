#include <iostream>
#include <string>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string p, sub_p;
  unsigned short int size_p;
  bool dangerous;
  cin >> p;
  size_p = p.size();
  dangerous = false;
  if (size_p >= 7) {
    for (unsigned short int i = 0; i < (size_p - 7 + 1); i++) {
      sub_p = p.substr(i, 7);
      if (sub_p == "0000000" || sub_p == "1111111") {
        dangerous = true;
        break;
      }
    }
  }
  (dangerous) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}