#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int k, n, w;
  signed int borrowed_money = 0;
  cin >> k >> n >> w;
  borrowed_money = (k * ((w * (w + 1)) / 2)) - n;
  borrowed_money = (borrowed_money > 0) ? borrowed_money : 0;
  cout << borrowed_money << endl;
  return 0;
}