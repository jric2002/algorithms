#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  float a, b, c;
  while (cin >> a >> b >> c) {
    if ((a + b) == c) {
      cout << a << " + " << b << " = " << c;
    }
    else if ((a - b) == c) {
      cout << a << " - " << b << " = " << c;
    }
    else if ((a * b) == c) {
      cout << a << " * " << b << " = " << c;
    }
    else if ((a / b) == c) {
      cout << a << " / " << b << " = " << c;
    }
    else if (a == (b + c)) {
      cout << a << " = " << b << " + " << c;
    }
    else if (a == (b - c)) {
      cout << a << " = " << b << " - " << c;
    }
    else if (a == (b * c)) {
      cout << a << " = " << b << " * " << c;
    }
    else {
      cout << a << " = " << b << " / " << c;
    }
    cout << endl;
  }
  return 0;
}
/* Definition */