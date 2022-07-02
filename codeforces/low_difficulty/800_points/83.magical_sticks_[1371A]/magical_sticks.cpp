#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  unsigned int n, max_num_sticks;
  cin >> t;
  while (t--) {
    cin >> n;
    if ((n % 2) == 0) {
      max_num_sticks = n / 2;
    }
    else {
      max_num_sticks = (n + 1) / 2;
    }
    cout << max_num_sticks << endl;
  }
  return 0;
}