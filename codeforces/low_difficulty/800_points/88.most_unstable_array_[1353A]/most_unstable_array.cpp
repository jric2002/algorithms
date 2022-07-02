#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  long long int n, m, max_sum;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    if (n == 1) {
      max_sum = 0;
    }
    else if (n == 2) {
      max_sum = m;
    }
    else {
      max_sum = m * 2;
    }
    cout << max_sum << endl;
  }
  return 0;
}