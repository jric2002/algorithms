#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main(int argc, char *argv[]) {
  long long int n, u, p;
  cin >> n;
  if (n < 0) {
    n = -1 * n;
    u = static_cast<int>(n/10);
    p = (static_cast<int>(n/100) * 10) + (n % 10);
    n = (u < p) ? u : p;
    n = -1 * n;
  }
  cout << n << endl;
  return 0;
}