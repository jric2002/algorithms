#include <iostream>
#include <iterator>
#include <vector>
#include <map>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int t, n, r;
  char url[100];
  map<int, vector<string>> links;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    n = 10;
    while (n--) {
      cin >> url >> r;
      links[r].push_back(url);
    }
    cout << "Case #" << i << ":" << endl;
    for (vector<string>::iterator it = ((*prev(links.end(), 1)).second).begin(); it != ((*prev(links.end(), 1)).second).end(); it++) {
      cout << (*it) << endl;
    }
    links.clear();
  }
  return 0;
}
/* Definition */