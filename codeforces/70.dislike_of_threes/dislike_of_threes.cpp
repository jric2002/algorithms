#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, k, i, x;
  cin >> t;
  while (t--) {
    cin >> k;
    i = 1;
    x = 0;
    while (i <= k) {
      x++;
      if ((x % 3) != 0) {
        if ((x % 10) != 3) {
          i++;
        }
      }
    }
    cout << x << endl;
  }
  return 0;
}