#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int t, n, r, ai;
  vector<int> a;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> ai;
      a.push_back(ai);
    }
    sort(a.begin(), a.end());
    r = (a.at(n - 1) - a.at(0)) + (a.at(n - 2) - a.at(1));
    cout << r << endl;
    a.clear();
  }
  return 0;
}