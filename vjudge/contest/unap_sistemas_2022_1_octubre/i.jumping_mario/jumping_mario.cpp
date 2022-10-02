#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int t, hj, lj, n, h_ant, h_act;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n;
    cin >> h_ant;
    n--;
    hj = lj = 0;
    while (n--) {
      cin >> h_act;
      if (h_ant != h_act) {
        (h_ant < h_act) ? hj++ : lj++;
      }
      h_ant = h_act;
    }
    cout << "Case " << i << ": " << hj << " " << lj << endl;
  }
  return 0;
}
/* Definition */