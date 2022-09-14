#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  unsigned short int t, n, a_ant, a_act, nsa, nsb;
  cin >> t;
  for (unsigned short int ne = 1; ne <= t; ne++) {
    nsa = nsb = 0;
    cin >> n;
    cin >> a_ant;
    n--;
    while (n--) {
      cin >> a_act;
      if (a_ant != a_act) {
        if (a_ant < a_act) {
          nsa++;
        }
        else {
          nsb++;
        }
      }
      a_ant = a_act;
    }
    cout << "Escenario " << ne << ": " << nsa << " " << nsb << endl;
  }
  return 0;
}
/* Definition */