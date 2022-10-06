#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int g(int);
int main() {
  int n;
  while (cin >> n) {
    if (n != 0) {
      cout << g(n) << endl;
    }
    else {
      break;
    }
  }
  return 0;
}
/* Definition */
int g(int n) {
  int s;
  s = n;
  while (s >= 10) {
    n = s;
    s = 0;
    while (n > 0) {
      s += (n % 10);
      n /= 10;
    }
  }
  return s;
}