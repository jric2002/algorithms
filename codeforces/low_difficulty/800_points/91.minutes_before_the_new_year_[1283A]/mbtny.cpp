#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, h, m, r;
  cin >> t;
  while (t--) {
    cin >> h >> m;
    r = ((23 - h) * 60) + (60 - m);
    cout << r << endl;
  }
  return 0;
}