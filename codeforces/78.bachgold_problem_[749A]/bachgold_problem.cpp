#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int n, amount_two;
  cin >> n;
  if ((n % 2) == 0) {
    amount_two = n / 2;
    cout << amount_two << endl;
    for (unsigned int i = 0; i < amount_two; i++) {
      cout << 2 << " ";
    }
    cout << endl;
  }
  else {
    amount_two = (n - 3) / 2;
    cout << (amount_two + 1) << endl;
    for (unsigned int i = 0; i < amount_two; i++) {
      cout << 2 << " ";
    }
    cout << 3 << endl;
  }
  return 0;
}