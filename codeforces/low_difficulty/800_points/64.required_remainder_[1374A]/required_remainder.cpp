#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int t, x, y, n, c, k;
  cin >> t;
  while (t--) {
    cin >> x >> y >> n;
    c = (n / x);
    while (true) {
      k = ( x * c) + y;
      if (k <= n) {
        break;
      }
      c -= 1;
    }
    cout << k << endl;
  }
  return 0;
}