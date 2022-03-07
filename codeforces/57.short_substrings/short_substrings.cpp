#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  string b, sub_b, a;
  cin >> t;
  for (unsigned short int i = 0; i < t; i++) {
    cin >> b;
    sub_b = b[1] + b[b.size() - 1];
    cout  << sub_b << endl;
  }
  return 0;
}