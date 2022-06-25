#include <iostream>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, s1, s2, s3, s4, r, m1, m2;
  cin >> t;
  while (t--) {
    cin >> s1 >> s2 >> s3 >> s4;
    r = min(max(s1, s2), max(s3, s4));
    m1 = min(s1, s2);
    m2 = min(s3, s4);
    ((r > m1) && (m2 < r)) ? cout << "YES" << endl : cout << "NO" << endl;
  }
  return 0;
}