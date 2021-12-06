#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int w;
  cin >> w;
  if (w >= 1 && w <= 100) {
    if ((w == 2) || ((w % 2) != 0)) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
    }
  }
  return 0;
}