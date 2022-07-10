#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int n, ai, m, i, j, k;
  bool s;
  vector<unsigned int> a;
  cin >> n;
  for (unsigned int i = 0; i < n; i++) {
    cin >> ai;
    a.push_back(ai);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  m = i = 0;
  s = true;
  while (i < n) {
    if (s) {
      j = i;
    }
    k = 0;
    while (k < n) {
      if (!(a.at(j) & a.at(k)) && (j != k)) {
        m += a.at(j);
        a.erase(a.begin() + j);
        j = (k > j) ? k - 1 : k;
        n--;
        s = false;
        break;
      }
      k++;
    }
    if (s) {
      i++;
    }
    else {
      s = true;
    }
  }
  cout << m << endl;
  return 0;
}