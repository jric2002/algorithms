#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo */
using namespace std;
int main() {
  unsigned short int n, k, l, c, d, p, nl, np;
  vector<unsigned short int> r;
  unsigned short int number_toasts;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  r.push_back((k * l) / nl);
  r.push_back(c * d);
  r.push_back(p / np);
  vector<unsigned short int>::iterator aux = min_element(r.begin(), r.end());
  number_toasts = *aux / n;
  cout << number_toasts << endl;
  return 0;
}