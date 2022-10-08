#include <iostream>
#include <map>
#include <cstring>
#include <sstream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string s, e, n;
  stringstream ss;
  bool st;
  map<string, string> d;
  st = true;
  while (getline(cin, s, '\n')) {
    if (s.empty()) {
      st = false;
      continue;
    }
    if (st) {
      ss << s;
      ss >> n >> e;
      d.insert(pair<string, string>(e, n));
      ss.clear();
    }
    else {
      if (d.find(s) != d.end()) {
        cout << d.at(s) << endl;
      }
      else {
        cout << "eh" << endl;
      }
    }
  }
  return 0;
}
/* Definition */