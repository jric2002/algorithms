#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, a, amount_one, amount_zero;
  signed short int min_mov;
  cin >> t;
  while (t--) {
    min_mov = 0;
    amount_zero = 0;
    amount_one = 0;
    cin >> n;
    for (unsigned short int i = 0; i < n; i++) {
      cin >> a;
      if ((a % 2) != (i % 2)) {
        ((a % 2) == 0) ? amount_zero++ : amount_one++;
      }
    }
    (amount_zero != amount_one) ? min_mov = -1 : min_mov = amount_one;
    cout << min_mov << endl;
  }
  return 0;
}