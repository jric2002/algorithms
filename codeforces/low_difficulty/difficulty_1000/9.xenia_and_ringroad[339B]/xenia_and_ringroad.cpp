#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int n, m, ap, ac;
  long long movs;
  cin >> n >> m;
  cin >> ap;
  movs = ap - 1;
  m--;
  while(m--) {
    cin >> ac;
    if (ap <= ac) {
      movs += (ac - ap);
    }
    else {
      movs += ((n + ac) - ap);
    }
    ap = ac;
  }
  cout << movs << endl;
  return 0;
}