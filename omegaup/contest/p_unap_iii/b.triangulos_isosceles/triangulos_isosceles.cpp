#include <iostream>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n;
  int cantidad;
  cin >> n;
  vector<vector<int>> test(n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cantidad = 0;
      for (int l1 = i; l1 <= j; l1++) {
        for (int l2 = i; l2 <= j; l2++) {
          for (int l3 = i; l3 <= j; l3++) {
            if ((l1 == l2 && l1 != l3) || (l1 != l2 && l2 == l3)) {
              if ((l1 + l2) > l3 && (l2 + l3) > l1 && (l3 + l1) > l2) {
                //cout << "(" << l1 << "," << l2 << "," << l3 << ")" << ", ";
                cantidad++;
              }
            }
          }
        }
      }
      cantidad /= 2;
      (test.at(i - 1)).push_back(cantidad);
    }
  }
  for (vector<int> r : test) {
    for (int c : r) {
      cout << c << " ";
    }
    cout << endl;
  }
  cout << "Cantidad: " << cantidad << endl;
  return 0;
}
/* Definition */