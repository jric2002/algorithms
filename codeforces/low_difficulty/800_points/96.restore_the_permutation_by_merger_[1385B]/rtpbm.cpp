#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, ai;
  vector<unsigned short int> a;
  vector<unsigned short int> p;
  cin >> t;
  while (t--) {
    cin >> n;
    for (unsigned short int i = 0; i < (n * 2); i++) {
      cin >> ai;
      a.push_back(ai);
    }
    while (!a.empty()) {
      p.push_back(a.at(0));
      a.erase(find(a.begin() + 1, a.end(), a.at(0)));
      a.erase(a.begin());
    }
    for (auto e : p) {
      cout << e << " ";
    }
    cout << endl;
    a.clear();
    p.clear();
  }
  return 0;
}