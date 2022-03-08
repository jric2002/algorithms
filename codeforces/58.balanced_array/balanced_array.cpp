#include <iostream>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int t, n, j;
  vector<unsigned int> a;
  cin >> t;
  for (unsigned int i = 0; i < t; i++) {
    cin >> n;
    if ((n % 4) == 0) {
      j = 1;
      while (j <= (n - 2)) {
        a.push_back(j);
        j += 1;
      }
      a.push_back(j + 1);
      a.push_back(j + (n / 2));
      cout << "YES" << endl;
      for (unsigned int k = 1; k < (n - 2); k += 2) {
        cout << a.at(k) << " ";
      }
      cout << a.at(n - 2) << " ";
      for (unsigned int k = 0; k < (n - 3); k += 2) {
        cout << a.at(k) << " ";
      }
      cout << a.at(n - 1) << endl;
      a.clear();
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}