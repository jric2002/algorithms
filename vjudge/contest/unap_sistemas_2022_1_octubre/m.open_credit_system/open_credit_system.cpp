#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int t, n, a, m;
  vector<int> scores;
  cin >> t;
  while (t--) {
    cin >> n;
    while (n--) {
      cin >> a;
      scores.push_back(a);
    }
    m = INT32_MIN;
    a = scores.at(0);
    for (int i = 1; i < scores.size(); i++) {
      m = max(m, a - scores.at(i));
      a = max(a, scores.at(i));
    }
    cout << m << endl;
    scores.clear();
  }
  return 0;
}
/* Definition */