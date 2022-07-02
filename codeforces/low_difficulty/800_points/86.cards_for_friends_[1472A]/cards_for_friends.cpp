#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, w, h, x;
  unsigned int n;
  cin >> t;
  while (t--) {
    cin >> w >> h >> n;
    x = 0;
    while ((w % 2) == 0) {
      w = w / 2;
      x++;
    }
    while ((h % 2) == 0) {
      h = h / 2;
      x++;
    }
    if (pow(2, x) >= n) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}