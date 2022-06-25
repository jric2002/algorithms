#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, sp, r, m1, m2;
  vector<unsigned short int> s;
  cin >> t;
  while (t--) {
    for (unsigned short int i = 0; i < 4; i++) {
      cin >> sp;
      s.push_back(sp);
    }
    r = min(*max_element(s.begin(), s.end() - 2), *max_element(s.begin() + 2, s.end()));
    m1 = *min_element(s.begin(), s.end() - 2);
    m2 = *min_element(s.begin() + 2, s.end());
    ((r > m1) && (m2 < r)) ? cout << "YES" << endl : cout << "NO" << endl;
    s.clear();
  }
  return 0;
}