#include <iostream>
#include <map>
#include <cstring>
#include <limits>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n;
  string s, sn, r;
  map<string, char> d;
  d.insert(pair<string, char>(".*.", '1'));
  d.insert(pair<string, char>("*..", '2'));
  d.insert(pair<string, char>("..*", '3'));
  map<string, char>::iterator it;
  cin >> n;
  for (int i = 1; i <= 5; i++) {
    cin >> s;
    if (i == 4) {
      sn = s;
    }
  }
  r = "";
  for (int i = 0; i < sn.size(); i += 4) {
    it = d.find(sn.substr(i, 3));
    if (it != d.end()) {
      r = r + (*it).second;
    }
  }
  cout << r << endl;
  return 0;
}
/* Definition */