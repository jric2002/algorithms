#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int t, b;
  double l, a, pr, pe;
  cin >> t;
  b = 0;
  while (t--) {
    cin >> l >> a >> pr >> pe;
    if (((l <= 56.00 && a <= 45.00 && pr <= 25.00) || (l + a + pr) <= 125.00) && pe <= 7.00) {
      cout << 1 << endl;
      b++;
    }
    else {
      cout << 0 << endl;
    }
  }
  cout << b << endl;
  return 0;
}
/* Definition */