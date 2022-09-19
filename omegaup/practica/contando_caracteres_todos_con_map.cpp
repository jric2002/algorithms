#include <iostream>
#include <cstring>
#include <map>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string t;
  map<char, int> m;
  getline(cin, t, '\n');
  for (int i = 0; i < t.length(); i++) {
    m[t[i]]++;
  }
  for (map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
    cout << it->first << " -> " << it->second << endl;
  }
  return 0;
}
/* Definition */