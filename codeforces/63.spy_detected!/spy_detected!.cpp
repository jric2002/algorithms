#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, a, index, number, counter;
  cin >> t;
  while (t--) {
    cin >> n;
    index = 0;
    counter = 1;
    cin >> number;
    for (unsigned short int i = 2; i <= n; i++) {
      cin >> a;
      if (number != a && index < 1) {
        index = i;
      }
      if (number == a) {
        counter += 1;
      }
    }
    if (counter == 1) {
      index = index - counter;
    }
    cout << index << endl;
  }
  return 0;
}