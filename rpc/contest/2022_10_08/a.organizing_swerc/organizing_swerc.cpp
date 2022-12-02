#include <iostream>
#include <map>
using namespace std;
int main() {
  int t, n, b, d, bt;
  map<int, int> p;
  map<int, int>::iterator it;
  cin >> t;
  while (t--) {
    cin >> n;
    while (n--) {
      cin >> b >> d;
      it = p.find(d);
      if (it != p.end()) {
        if ((*it).second < b) {
          p.at(d) = b;
        }
      }
      else {
        p.insert(pair<int, int>(d, b));
      }
    }
    bt = 0;
    if (p.size() == 10) {
      for (it = p.begin(); it != p.end(); it++) {
        bt += (*it).second;
      }
      cout << bt << endl;
    }
    else {
      cout << "MOREPROBLEMS" << endl;
    }
    p.clear();
  }
  return 0;
}