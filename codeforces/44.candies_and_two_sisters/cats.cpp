#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int t;
  unsigned long int n, r;
  cin >> t;
  for(unsigned int i = 0; i < t; i++) {
    cin >> n;
    if ((n % 2) == 0) {
      r = (n / 2) - 1;
    }
    else {
      r = ceil((float)n / 2.0) - 1;
    }
    cout << r << endl;
  }
  return 0;
}