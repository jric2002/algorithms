#include <iostream>

/* Author: José Rodolfo (jric2002) */

using namespace std;

int main() {
  unsigned short int m, n;
  cin >> m >> n;
  if (m >= 1 && m <= n && n <= 16) {
    unsigned short int max_num_dominoes;
    max_num_dominoes = (m * n) / 2;
    cout << max_num_dominoes << endl;
  }
  return 0;
}