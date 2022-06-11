#include <iostream>
#include <algorithm>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, si, pos;
  vector<short int> s;
  vector<short int> r;
  cin >> t;
  while (t--) {
    cin >> n;
    for (unsigned short int i = 0; i < n; i++) {
      cin >> si;
      s.push_back(si);
    }
    sort(s.begin(), s.end());
    for (unsigned short int i = 1; i < n; i++) {
      r.push_back(s.at(i) - s.at(i - 1));
    }
    cout << *min_element(r.begin(), r.end()) << endl;
    s.clear();
    r.clear();
  }
  return 0;
}