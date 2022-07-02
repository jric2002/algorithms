#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int n, a;
  cin >> n;
  a = 0;
  for (unsigned short int l = 1; l <= (n / 2); l++) {
    if (((n - l) % l) == 0) {
      a++;
    }
  }
  cout << a << endl;
  return 0;
}