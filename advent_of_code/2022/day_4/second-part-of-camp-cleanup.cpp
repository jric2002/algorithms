#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string s, first, second;
  size_t ps;
  stringstream ss;
  vector<vector<int>> ids(2, vector<int> (2));
  int t = 0;
  while (cin >> s) {
    ps = s.find(',');
    first = s.substr(0, ps);
    first.replace(first.find("-"), 1, " ");
    second = s.substr(ps + 1, string::npos);
    second.replace(second.find("-"), 1, " ");
    ss << first;
    ss >> (ids.at(0)).at(0) >> (ids.at(0)).at(1);
    ss.clear();
    ss << second;
    ss >> (ids.at(1)).at(0) >> (ids.at(1)).at(1);
    if (!(((ids.at(0)).at(0) < (ids.at(1)).at(0) && (ids.at(0)).at(1) < (ids.at(1)).at(0)) || ((ids.at(0)).at(0) > (ids.at(1)).at(1) && (ids.at(0)).at(1) > (ids.at(1)).at(1)))) {
      t++;
    }
    ss.clear();
  }
  cout << "Total: " << t << endl;
  return 0;
}
/* Definition */