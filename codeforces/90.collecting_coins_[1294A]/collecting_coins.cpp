#include <iostream>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  int a, b, c, n, m, r;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c >> n;
    m = max(max(a, b), c);
    r = n - ((m - a) + (m - b) + (m - c));
    if (((r % 3) == 0) && (r >= 0)) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}