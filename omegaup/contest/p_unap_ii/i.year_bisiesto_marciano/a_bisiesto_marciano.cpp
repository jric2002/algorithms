#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int d, m, a, s;
  cin >> d >> m >> a;
  s = ((a - 2001) * 684);
  if (m >= 3) {
    s += ((a - 2001 + 1) * 2);
  }
  else {
    s += ((a - 2001) * 2);
  }
  s -= ((a - 2001) / 5);
  if (((a - 2001 + 1) % 5) == 0 && m >= 3) {
    s += 1;
  }
  s += d;
  s = s % 7;
  if (s == 0) {
    s = 7;
  }
  cout << s << endl;
  return 0;
}
/* Definition */