#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n, m, f, min_p, d;
  vector<int> p;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> f;
    p.push_back(f);
  }
  sort(p.begin(), p.end());
  min_p = numeric_limits<int>::max();
  for (int i = 0; i < (m - n + 1); i++) {
    auto mm = minmax_element(p.begin() + i, p.begin() + n + i);
    d = *(mm.second) - *(mm.first);
    if (d < min_p) {
      min_p = d;
    }
  }
  cout << min_p << endl;
  return 0;
}
/* Definition */