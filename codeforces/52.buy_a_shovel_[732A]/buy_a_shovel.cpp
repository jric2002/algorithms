#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int k, r, n, d;
  cin >> k >> r;
  n = 1;
  while (true) {
    d = ((n * k) % 10);
    if ((d == r) || (d == 0)) {
      break;
    }
    n++;
  }
  cout << n << endl;
  return 0;
}