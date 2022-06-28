#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << n << " ";
    for (unsigned short int i = 1; i < n; i++) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}