#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int n;
  unsigned short int k;
  cin >> n >> k;
  while (k--) {
    if ((n % 10) == 0) {
      n = n / 10;
    }
    else {
      n--;
    }
  }
  cout << n << endl;
  return 0;
}