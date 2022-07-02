#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  short int n;
  unsigned short int h, i;
  cin >> n;
  h = 0;
  for (unsigned short int i = 1; n >= 0; i++) {
    n = n - ((i * (i + 1) / 2));
    if (n >= 0) {
      h++;
    }
  }
  cout << h << endl;
  return 0;
}