#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int m, n;
  int cantidad;
  cin >> m >> n;
  cantidad = 0;
  for (int l1 = m; l1 <= n; l1++) {
    for (int l2 = l1; l2 <= n; l2++) {
      for (int l3 = l2; l3 <= n; l3++) {
        if ((l1 == l2 && l1 != l3) || (l1 != l2 && l2 == l3)) {
          if ((l1 + l2) > l3 && (l2 + l3) > l1 && (l3 + l1) > l2) {
            cantidad++;
          }
        }
      }
    }
  }
  cout << cantidad << endl;
  return 0;
}
/* Definition */