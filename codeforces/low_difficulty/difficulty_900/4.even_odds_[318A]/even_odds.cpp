#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  long long int n, k, temp, number;
  cin >> n >> k;
  temp = ((n % 2) == 0) ? (n / 2) : ((n + 1) / 2);
  number = (k <= temp) ? ((2 * k) - 1) : (2 * (k - temp));
  cout << number << endl;
  return 0;
}