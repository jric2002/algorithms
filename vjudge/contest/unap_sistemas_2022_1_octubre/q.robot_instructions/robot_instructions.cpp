#include <iostream>
#include <cstring>
#include <vector>
#include <limits>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int t, n, p, pos;
  string i;
  vector<int> si;
  cin >> t;
  while (t--) {
    cin >> n;
    p = 0;
    //fflush(stdin);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (n--) {
      getline(cin, i, '\n');
      if (i == "LEFT") {
        p--;
        si.push_back(-1);
      }
      else if (i == "RIGHT") {
        p++;
        si.push_back(1);
      }
      else {
        pos = stoi(i.substr(8, i.size() - 8));
        p = p + si.at(pos - 1);
        si.push_back(si.at(pos - 1));
      }
    }
    cout << p << endl;
    si.clear();
  }
  return 0;
}
/* Definition */