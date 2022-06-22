#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  unsigned int n, min_diff;
  cin >> t;
  while (t--) {
    cin >> n;
    min_diff = pow(2, ((n / 2) + 1)) - 2;
    cout << min_diff << endl;
  }
  return 0;
}