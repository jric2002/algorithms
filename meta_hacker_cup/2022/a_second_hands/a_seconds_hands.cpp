#include <iostream>
#include <set>
using namespace std;
int main() {
  unsigned short int t, n, k, si;
  set<unsigned short int> s;
  cin >> t;
  for (unsigned short int i = 1; i <= t; i++) {
    cin >> n >> k;
    for (unsigned short int j = 0; j < n; j++) {
      cin >> si;
      s.insert(si);
    }
    cout << "Case #" << i << ": ";
    if ((n <= (2 * k)) && (s.size() >= k)) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
    s.clear();
  }
  return 0;
}