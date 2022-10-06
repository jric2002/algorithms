#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int b, n, d, c, v, ri;
  vector<int> r;
  while (cin >> b >> n) {
    if (b != 0 && n != 0) {
      while (b--) {
        cin >> ri;
        r.push_back(ri);
      }
      while (n--) {
        cin >> d >> c >> v;
        r.at(d - 1) -= v;
        r.at(c - 1) += v;
      }
      if (*min_element(r.begin(), r.end()) >= 0) {
        cout << "S" << endl;
      }
      else {
        cout << "N" << endl;
      }
      r.clear();
    }
    else {
      break;
    }
  }
  return 0;
}
/* Definition */