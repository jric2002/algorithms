#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int n, m, a;
  long long int r;
  cin >> n >> m >> a;
  r = ceil(n / (float)a) * ceil(m / (float)a);
  cout << r << endl;
  return 0;
}