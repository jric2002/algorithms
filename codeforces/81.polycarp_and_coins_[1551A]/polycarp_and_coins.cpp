#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  unsigned int n, c1, c2;
  cin >> t;
  while (t--) {
    cin >> n;
    if ((n % 3) == 0) {
      c1 = n / 3;
      c2 = c1;
    }
    else if (((n + 2) % 3) == 0) {
      c1 = (n + 2) / 3;
      c2 = c1 - 1;
    }
    else {
      c2 = (n + 1) / 3;
      c1 = c2 - 1;
    }
    cout << c1 << " " << c2 << endl;
  }
  return 0;
}