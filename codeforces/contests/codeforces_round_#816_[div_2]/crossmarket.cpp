#include <iostream>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  int n, m, min_v, max_v, tn;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    min_v = min(n, m);
    max_v = max(n, m);
    tn = max_v + (2 * (min_v - 1));
    if (n == 1 && m == 1) {
      tn -= 1;
    }
    cout << tn << endl;
  }
  return 0;
}