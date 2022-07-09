#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int n, ai, m, i, j, invite;
  vector<unsigned int> a;
  cin >> n;
  for (unsigned int i = 0; i < n; i++) {
    cin >> ai;
    a.push_back(ai);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  m = i = 0;
  while (i < n) {
    j = 0;
    while (j < n) {
      if (!(invite & a.at(j)) && (i != y)) {
        m += a.at(i);
        a.erase(a.begin() + i);
        n--;
        break;
      }
      j++;
    }
    i++;
  }
  cout << m << endl;
  return 0;
}