#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  unsigned int a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if (a == b) {
      cout << 0 << endl;
    }
    else if (a > b) {
      if (((a % 2) == 0 && (b % 2) == 0) || ((a % 2) != 0 && (b % 2) != 0)) {
        cout << 1 << endl;
      }
      else {
        cout << 2 << endl;
      }
    }
    else {
      if (((a % 2) == 0 && (b % 2) == 0) || ((a % 2) != 0 && (b % 2) != 0)) {
        cout << 2 << endl;
      }
      else {
        cout << 1 << endl;
      }
    }
  }
  return 0;
}