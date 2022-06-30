#include <iostream>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  unsigned int m;
  cin >> n;
  vector<vector<unsigned int>> a(n, vector<unsigned int> (n, 1));
  for (unsigned short int i = 1; i < n; i++) {
    for (unsigned short int j = 1; j < n; j++) {
      a[i][j] = a[i - 1][j] + a[i][j - 1];
    }
  }
  m = a[n - 1][n - 1];
  cout << m << endl;
  return 0;
}