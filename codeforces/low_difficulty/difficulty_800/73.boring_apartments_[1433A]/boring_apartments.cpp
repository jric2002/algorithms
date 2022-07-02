#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, x, n, p;
  cin >> t;
  while (t--) {
    cin >> x;
    n = (to_string(x)).size();
    p = ((n * (n + 1)) / 2) + (10 * ((x % 10) - 1));
    cout << p <<endl;
  }
  return 0;
}