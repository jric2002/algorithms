#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, ai;
  vector<unsigned short int> c;
  cin >> n;
  while (n--) {
    cin >> ai;
    c.push_back(ai);
  }
  sort(c.begin(), c.end());
  for (unsigned short int a : c) {
    cout << a << " ";
  }
  return 0;
}