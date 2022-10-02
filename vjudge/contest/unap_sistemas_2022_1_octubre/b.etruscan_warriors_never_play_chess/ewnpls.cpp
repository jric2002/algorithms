#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  double t, n, r;
  cin >> t;
  while (t--) {
    cin >> n;
    r = (-0.5 + sqrt((2 * n) + 0.25));
    cout.precision(18);
    cout << floor(r) << endl;
  }
  return 0;
}
/* Definition */