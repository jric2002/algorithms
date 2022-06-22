#include <iostream>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int y, w;
  unsigned short int n, d;
  unsigned short int i;
  cin >> y >> w;
  d = 6;
  n = d - max(y, w) + 1;
  i = 2;
  while (i <= n) {
    if ((n % i) == 0 && (d % i) == 0) {
      n = n / i;
      d = d / i;
    }
    else {
      i++;
    }
  }
  cout << n << "/" << d << endl;
  return 0;
}