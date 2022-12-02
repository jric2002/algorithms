#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  string c;
  long long int tc_max, tc;
  tc_max = tc = 0;
  while (getline(cin, c)) {
    if (c.empty()) {
      if (tc > tc_max) {
        tc_max = tc;
      }
      tc = 0;
      continue;
    }
    tc += stoi(c);
  }
  cout << "tc_max: " << tc_max << endl;
  return 0;
}
/* Definition */