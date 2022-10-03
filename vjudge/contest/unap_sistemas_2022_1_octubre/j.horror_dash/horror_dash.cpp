#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int t, n, v, vm;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n;
    vm = 0;
    while (n--) {
      cin >> v;
      if (v > vm) {
        vm = v;
      }
    }
    cout << "Case " << i << ": " << vm << endl;
  }
  return 0;
}
/* Definition */