#include <iostream>
#include <algorithm>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n;
  vector<long int> a;
  vector<long int> b;
  long int ai, bi, min_a, min_b;
  long long int min_mov;
  cin >> t;
  while (t--) {
    cin >> n;
    min_mov = 0;
    for (unsigned short int i = 0; i < n; i++) {
      cin >> ai;
      a.push_back(ai);
      if (i > 0) {
        if (min_a > ai) {
          min_a = ai;
        }
      }
      else {
        min_a = ai;
      }
    }
    for (unsigned short int i = 0; i < n; i++) {
      cin >> bi;
      b.push_back(bi);
      if (i > 0) {
        if (min_b > bi) {
          min_b = bi;
        }
      }
      else {
        min_b = bi;
      }
    }
    for (unsigned short int i = 0; i < n; i++) {
      min_mov += max((a.at(i) - min_a), (b.at(i) - min_b));
    }
    cout << min_mov << endl;
    a.clear();
    b.clear();
  }
  return 0;
}