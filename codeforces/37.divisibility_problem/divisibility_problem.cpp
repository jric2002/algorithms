#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int t;
  unsigned long int a, b;
  unsigned int movements;
  cin >> t;
  unsigned long int min_movements[t];
  for (int i = 0; i < t; i++) {
    cin >> a;
    cin >> b;
    movements = 0;
    if ((a % b) != 0) {
      movements = b - (a % b);
    }
    min_movements[i] = movements;
  }
  for (int i = 0; i < t; i++) {
    cout << min_movements[i] << endl;
  }
  return 0;
}