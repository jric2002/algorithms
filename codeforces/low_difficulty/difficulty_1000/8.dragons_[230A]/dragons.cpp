#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int s, n, x, y;
  vector<pair<int, int>> d;
  bool status;
  cin >> s >> n;
  status = true;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    d.push_back(make_pair(x, y));
  }
  sort(d.begin(), d.end());
  for (pair<int, int> p : d) {
    if (s <= p.first) {
      status = false;
      break;
    }
    else {
      s += p.second;
    }
  }
  (status) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}