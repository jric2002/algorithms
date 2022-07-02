#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int minNumber(int a, int b);
int main() {
  unsigned short int a, b;
  unsigned short int max_num_days_different_socks;
  unsigned short int max_num_days_same_socks;
  cin >> a >> b;
  max_num_days_different_socks = minNumber(a, b);
  max_num_days_same_socks = floor(abs(a - b)/2);
  cout << max_num_days_different_socks << " ";
  cout << max_num_days_same_socks << endl;
  return 0;
}
int minNumber(int a, int b) {
  if (a > b) {
    return b;
  }
  else {
    return a;
  }
}