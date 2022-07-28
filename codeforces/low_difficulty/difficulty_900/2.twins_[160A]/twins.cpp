#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
template <typename T>
short int addition(T vb, T ve) {
  short int s = 0;
  for (T it = vb; it != ve; it++) {
    s += *it;
  }
  return s;
}
int main() {
  unsigned short int n, c, min_coins;
  unsigned int s1, s2;
  vector<unsigned short int> coins;
  cin >> n;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> c;
    coins.push_back(c);
  }
  sort(coins.begin(), coins.end());
  reverse(coins.begin(), coins.end());
  min_coins = 0;
  do {
    s1 = s2 = 0;
    for (unsigned short int j = 0; j < min_coins; j++) {
      s1 += coins.at(j);
    }
    for (unsigned short int j = min_coins; j < n; j++) {
      s2 += coins.at(j);
    }
    if (s1 > s2) {
      break;
    }
    min_coins++;
  } while (min_coins < n);
  cout << min_coins << endl;
  return 0;
}