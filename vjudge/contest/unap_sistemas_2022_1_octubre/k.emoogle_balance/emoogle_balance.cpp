#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int i, n, r, a, b;
  i = 1;
  while (cin >> n) {
    a = b = 0;
    if (n != 0) {
      while (n--) {
        cin >> r;
        (r != 0) ? a++ : b++;
      }
      cout << "Case " << i << ": " << (a - b) << endl;
    }
    i++;
  }
  return 0;
}
/* Definition */