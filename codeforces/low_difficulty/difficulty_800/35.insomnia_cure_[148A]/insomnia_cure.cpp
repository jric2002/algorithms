#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int k, l, m, n;
  int d, damaged_dragons;
  cin >> k;
  cin >> l;
  cin >> m;
  cin >> n;
  cin >> d;
  damaged_dragons = d;
  for (int i = 1; i <= d; i++) {
    if ((i % k) && (i % l) && (i % m) && (i % n)) {
      damaged_dragons -= 1;
    }
  }
  cout << damaged_dragons << endl;
  return 0;
}