#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n = 12;
  double dinero;
  double promedio = 0;
  while (n--) {
    cin >> dinero;
    promedio += dinero;
  }
  promedio = promedio / 12;
  cout << fixed;
  cout.precision(2);
  cout << "$" << promedio << endl;
  cout.unsetf(ios::fixed);
  return 0;
}
/* Definition */