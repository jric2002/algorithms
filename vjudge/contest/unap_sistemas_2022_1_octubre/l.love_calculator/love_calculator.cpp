#include <iostream>
#include <cstring>
#include <cctype>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int calCadena(char [], int);
int main() {
  char n1[25], n2[25];
  int size_n1, size_n2, n, d, temp;
  while (cin.getline(n1, sizeof(n1)/sizeof(char), '\n')) {
    cin.getline(n2, sizeof(n2)/sizeof(char), '\n');
    size_n1 = strlen(n1);
    size_n2 = strlen(n2);
    n = calCadena(n1, size_n1);
    d = calCadena(n2, size_n2);
    if (n > d) {
      temp = n;
      n = d;
      d = temp;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << ((float(n)/d) * 100) << " %" << endl;
    cout.unsetf(ios::fixed);
  }
  return 0;
}
/* Definition */
int calCadena(char n[25], int size_n) {
  int s = 0, c;
  for (int i = 0; i < size_n; i++) {
    c = static_cast<int>(n[i]);
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) {
      s = s + tolower(n[i]) - 96;
    }
  }
  while (s >= 10) {
    c = s;
    s = 0;
    while (c > 0) {
      s = s + (c % 10);
      c = c / 10;
    }
  }
  return s;
}