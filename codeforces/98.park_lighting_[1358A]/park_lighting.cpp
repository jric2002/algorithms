#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, m;
  unsigned int l;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    l = n * m;
    if ((l % 2) != 0) {
      l = (l + 1) / 2;
    }
    else {
      l = l / 2;
    }
    cout << l << endl;
  }
  return 0;
}