#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  int a, b, min_mov;
  unsigned short int k = 10; // k = [1;10]
  cin >> t;
  for (unsigned short int i = 0; i < t; i++) {
    min_mov = 0;
    cin >> a >> b;
    a = abs(a - b);
    while (a != 0) {
      if (a <= 10) {
        a = 0;
        min_mov++;
      }
      else {
        min_mov += (a / k);
        a = a % k;
      }
    }
    cout << min_mov << endl;
  }
  return 0;
}