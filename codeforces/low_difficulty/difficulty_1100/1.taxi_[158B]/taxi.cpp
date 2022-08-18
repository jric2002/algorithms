#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int m = 4;
  int n, si, min_taxis = 0, i, j;
  int d[m] = {0};
  cin >> n;
  while (n--) {
    cin >> si;
    d[si - 1] += 1;
  }
  i = m - 2;
  while (i >= 0) {
    j = 0;
    while (j <= i && (j + i + 2) <= m && (d[i] != 0 || d[j] != 0)) {
      if (j == i) {
        if (((i + 1) * d[i]) >= m) {
          min_taxis += ((i + 1) * d[i]) / m;
          d[i] = (((i + 1) * d[i]) % m) / (i + 1);
        }
        else {
          min_taxis += 1;
          d[i] = 0;
        }
      }
      else {
        if (d[j] >= d[i]) {
          min_taxis += d[i];
          d[j] = d[j] - d[i];
          d[i] = 0;
        }
        else {
          min_taxis += d[j];
          d[i] = d[i] - d[j];
          d[j] = 0;
        }
      }
      j++;
    }
    i--;
  }
  i = 0;
  while (i < m) {
    min_taxis += d[i];
    i++;
  }
  cout << min_taxis << endl;
  return 0;
}