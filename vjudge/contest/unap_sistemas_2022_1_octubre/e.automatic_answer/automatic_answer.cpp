#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int t;
  long long int n;
  cin >> t;
  while (t--) {
    cin >> n;
    n = (((((n * 567)/9) + 7492) * 235)/47) - 498;
    if (n < 0) {
      n = -1 * n;
    }
    cout << ((n % 100)/10) << endl;
  }
  return 0;
}
/* Definition */