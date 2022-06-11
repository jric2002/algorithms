#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  signed long long int n;
  cin >> n;
  if (n != 0) {
    if ((n % 2) != 0) {
      n += 1;
      n = -1 * n;
    }
    n /= 2;
  }
  else {
    n++;
  }
  cout << n << endl;
  return 0;
}