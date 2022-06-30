#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, x, f;
  cin >> t;
  while (t--) {
    cin >> n >> x;
    if (n <= 2) {
      f = 1;
    }
    else {
      if ((n - 2) <= x) {
        f = 2;
      }
      else {
        f = 1;
        for (unsigned short int i = 3; i <= n; i = i + x) {
          f++;
        }
      }
    }
    cout << f << endl;
  }
  return 0;
}