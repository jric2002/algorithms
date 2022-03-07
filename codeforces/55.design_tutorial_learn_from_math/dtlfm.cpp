#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
template <typename T>
bool isPrime(T number);
using namespace std;
int main() {
  int n, x, y;
  cin >> n;
  x = floor(n / 3);
  while (true) {
    y = n - x;
    if (isPrime(x) || isPrime(y)) {
      x += 1;
    }
    else {
      break;
    }
  }
  cout << x << " " << y << endl;
  return 0;
}
template <typename T>
bool isPrime(T number) {
  for (T i = 2; i <= floor(number / 2); i++) {
    if ((number % i) == 0) {
      return false;
    }
  }
  return true;
}