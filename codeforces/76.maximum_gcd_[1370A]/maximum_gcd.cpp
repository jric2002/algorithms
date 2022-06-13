#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  unsigned int n, max_value;
  cin >> t;
  while (t--) {
    cin >> n;
    if ((n % 2) == 0) {
      max_value = n / 2;
    }
    else {
      max_value = (n - 1) / 2;
    }
    cout << max_value << endl;
  }
  return 0;
}