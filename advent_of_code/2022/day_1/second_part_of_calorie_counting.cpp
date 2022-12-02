#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  string c;
  long long int tc, tct;
  vector<long long int> tc_e;
  while (getline(cin, c)) {
    if (c.empty()) {
      tc_e.push_back(tc);
      tc = 0;
      continue;
    }
    tc += stoi(c);
  }
  sort(tc_e.begin(), tc_e.end());
  tct = 0;
  for (int i = 1; i <= 3; i++) {
    tct += tc_e.at(tc_e.size() - i);
  }
  cout << "tct: " << tct << endl;
  return 0;
}
/* Definition */