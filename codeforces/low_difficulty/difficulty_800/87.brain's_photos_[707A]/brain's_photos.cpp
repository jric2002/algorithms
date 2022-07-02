#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, m, t;
  char p;
  bool is_blackandwhite;
  cin >> n >> m;
  t = n * m;
  is_blackandwhite = true;
  while (t--) {
    cin >> p;
    if (p != 'B' && p != 'W' && p != 'G') {
      is_blackandwhite = false;
    }
  }
  if (is_blackandwhite) {
    cout << "#Black&White" << endl;
  }
  else {
    cout << "#Color" << endl;
  }
  return 0;
}