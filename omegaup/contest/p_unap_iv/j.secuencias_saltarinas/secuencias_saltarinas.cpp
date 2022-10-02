#include <iostream>
#include <set>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n, m, x_ant, x_act;
  set<int> dif;
  bool salt;
  cin >> n;
  cin >> x_ant;
  for (int i = 1; i < n; i++) {
    cin >> x_act;
    dif.insert(abs(x_act - x_ant));
    x_ant = x_act;
  }
  set<int>::iterator it = dif.begin();
  m = *it;
  salt = true;
  for (int i = 0; i < (n - 1); i++) {
    if (m != *it || it == dif.end()) {
      salt = false;
      break;
    }
    m++;
    it++;
  }
  if (salt) {
    m = 0;
  }
  cout << m << endl;
  return 0;
}
/* Definition */