#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  unsigned int n, amount;
  long long int ordinary_number;
  cin >> t;
  while (t--) {
    cin >> n;
    amount = 0;
    for (unsigned short int i = 1; i < 10; i++) {
      ordinary_number = i;
      while (ordinary_number <= n) {
        amount += 1;
        ordinary_number = (10 * ordinary_number) + i;
      }
    }
    cout << amount << endl;
  }
  return 0;
}