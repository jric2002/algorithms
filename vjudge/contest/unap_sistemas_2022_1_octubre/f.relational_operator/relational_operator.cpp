#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int t, a, b;
  char op;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    (a > b) ? op = '>' : (a < b) ? op = '<' : op = '=';
    cout << op << endl;
  }
  return 0;
}
/* Definition */