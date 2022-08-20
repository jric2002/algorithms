#include <iostream>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, r;
  long long int a, b, c, d, num, den, min_n, max_n;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c >> d;
    num = (a * d);
    den = (c * b);
    if (num == den) {
      r = 0;
    }
    else {
      max_n = max(num, den);
      min_n = min(num, den);
      min_n = (min_n == 0) ? 1 : min_n;
      if ((max_n % min_n) == 0) {
        r = 1;
      }
      else {
        r = 2;
      }
    }
    cout << r << endl;
  }
  return 0;
}