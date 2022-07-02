#include <iostream>
#include <algorithm>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int a, b, c;
  int x1, x2, x3, x4;
  vector<int> values;
  cin >> x1 >> x2 >> x3 >> x4;
  values.push_back(x1);
  values.push_back(x2);
  values.push_back(x3);
  values.push_back(x4);
  sort(values.begin(), values.end());
  a = values.at(3) - values.at(2);
  b = values.at(0) + values.at(2) - values.at(3);
  c = values.at(1) + values.at(2) - values.at(3);
  cout << a << " " << b << " " << c << endl;
  return 0;
}