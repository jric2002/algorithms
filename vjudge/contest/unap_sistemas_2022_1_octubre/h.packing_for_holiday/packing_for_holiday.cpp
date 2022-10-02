#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int t, l, w, h;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> l >> w >> h;
    cout << "Case " << i << ": ";
    if (l <= 20 && h <= 20 && w <= 20) {
      cout << "good";
    }
    else {
      cout << "bad";
    }
    cout << endl;
  }
  return 0;
}
/* Definition */